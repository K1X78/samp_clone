#include "samp/client/dl_archive.hpp"
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iterator>
#ifdef _WIN32
#include <windows.h>
#include <wincrypt.h>
#endif

namespace samp::client {
// source adapter only; no established separate native entry
bool DlArchive::load(const std::filesystem::path& path) {
    ready_=false;error_.clear();file_hashes_.clear();
    std::ifstream file(path,std::ios::binary);
    raw_.assign(std::istreambuf_iterator<char>{file},{});
    if(raw_.size()<256+2048+128) {error_="archive is too small";return false;}
    std::uint32_t header_a=0,header_b=0;
    std::memcpy(&header_a,raw_.data()+248,sizeof(header_a));
    std::memcpy(&header_b,raw_.data()+252,sizeof(header_b));
    const auto check=header_a^header_b;
    if((check&0xfffff)!=0x83433 || (check&0x700000)!=0x200000) {
        error_="archive header check failed";return false;
    }
#ifdef _WIN32
    // This is the signature-verification block of FUN_10064550. The public
    // key bytes are stored XORed in the official binary.
    constexpr char encoded[] =
        "0602000000240000525341310004000001000100efd54767a9a08093526b641b366f2cf0"
        "08b7a1144e5f5e0c48eeb8ac44e66de0dc134646da6c88c096359ae8bf613d220"
        "3a3b00848a0daf775db84b455d9b91b424f3935de59e643320e927da96f22be2"
        "0f39aff418be5711f54bb40d011863e9a36d772ea83c7e4b4b79f140af699d34"
        "606e68726d6a9a80085b899a9f46cbd";
    std::array<std::uint8_t,148> public_key{};
    for(std::size_t i=0;i<public_key.size();++i) {
        const char high=encoded[2*i],low=encoded[2*i+1];
        const auto high_digit=static_cast<std::uint8_t>(high<='9'?high-'0':high-'a'+10);
        const auto low_digit=static_cast<std::uint8_t>(low<='9'?low-'0':low-'a'+10);
        public_key[i]=static_cast<std::uint8_t>(high_digit*16+low_digit);
    }
    HCRYPTPROV provider=0;HCRYPTKEY public_key_handle=0;HCRYPTHASH signature_hash=0;
    const auto signed_body=std::span<const std::uint8_t>(raw_.data(),raw_.size())
        .subspan(256,raw_.size()-256-128);
    const bool signature_valid=
        CryptAcquireContextA(&provider,nullptr,nullptr,PROV_RSA_FULL,CRYPT_VERIFYCONTEXT) &&
        CryptImportKey(provider,public_key.data(),static_cast<DWORD>(public_key.size()),
                       0,0,&public_key_handle) &&
        CryptCreateHash(provider,CALG_SHA1,0,0,&signature_hash) &&
        CryptHashData(signature_hash,signed_body.data(),static_cast<DWORD>(signed_body.size()),0) &&
        CryptVerifySignatureA(signature_hash,raw_.data()+raw_.size()-128,128,
                              public_key_handle,nullptr,0);
    if(signature_hash) CryptDestroyHash(signature_hash);
    if(public_key_handle) CryptDestroyKey(public_key_handle);
    if(provider) CryptReleaseContext(provider,0);
#else
    const bool signature_valid=false;
#endif
    if(!signature_valid) {error_="archive RSA/SHA1 signature failed";return false;}
    root_=static_cast<std::uint8_t>(header_b>>5);
    std::memcpy(table_.data(),raw_.data()+raw_.size()-128-2048,2048);
    std::array<std::uint32_t,4> key{0xa0ea4013,0x89abb509,0xceec401a,0x2afa05d2};
    for(std::size_t at=0;at+8<=table_.size();at+=8) {
        std::uint32_t first=0,second=0;
        std::memcpy(&first,table_.data()+at,4);
        std::memcpy(&second,table_.data()+at+4,4);
        auto a=first,b=second,total=std::uint32_t{0xc6ef3720};
        for(unsigned round=0;round<32;++round) {
            b-=(((a>>5)^(a<<4))+a)^(key[(total>>11)&3]+total);
            total-=0x9e3779b9u;
            a-=(((b>>5)^(b<<4))+b)^(key[total&3]+total);
        }
        std::memcpy(table_.data()+at,&a,4);
        std::memcpy(table_.data()+at+4,&b,4);
        // Feedback uses the input ciphertext, NOT the decrypted words.
        key[0]^=first;key[1]^=second;key[2]^=first;key[3]^=second;
    }
    for(unsigned i=0;i<256;++i) {
        const auto* entry=table_.data()+8*i;
        std::uint32_t encoded_metadata=0,hash=0;
        std::memcpy(&encoded_metadata,entry+4,sizeof(encoded_metadata));
        std::memcpy(&hash,entry,sizeof(hash));
        const auto metadata=(((encoded_metadata^0x3d3e7u)<<13)|
                             ((encoded_metadata^0xc107ffffu)>>19))^hash;
        if((metadata&255)!=i) file_hashes_.push_back(hash);
    }
    ready_=true;return true;
}

// source adapter only; no established separate native entry
// This combines CArchiveFS::GetFileIndex/GetFileData.
bool DlArchive::extract(std::uint32_t hash,std::vector<std::uint8_t>& out) const {
    if(!ready_) return false;
    const std::uint8_t* record=nullptr;
    for(unsigned i=0;i<256;++i) {
        const auto* candidate=table_.data()+8*i;
        std::uint32_t candidate_hash=0;
        std::memcpy(&candidate_hash,candidate,sizeof(candidate_hash));
        if(candidate_hash==hash) {record=candidate;break;}
    }
    if(record==nullptr) return false;
    std::uint32_t encoded_metadata=0,record_hash=0;
    std::memcpy(&encoded_metadata,record+4,sizeof(encoded_metadata));
    std::memcpy(&record_hash,record,sizeof(record_hash));
    const auto info=(((encoded_metadata^0x3d3e7u)<<13)|
                     ((encoded_metadata^0xc107ffffu)>>19))^record_hash;
    const auto size=info>>8;
    auto previous=info&255;
    if(record==table_.data()+8*previous) return false;
    std::size_t offset=256;
    std::array<bool,256> visited{};
    while(previous!=root_) {
        if(visited[previous]) return false;
        visited[previous]=true;
        const auto* previous_entry=table_.data()+8*previous;
        std::uint32_t previous_metadata=0,previous_hash=0;
        std::memcpy(&previous_metadata,previous_entry+4,sizeof(previous_metadata));
        std::memcpy(&previous_hash,previous_entry,sizeof(previous_hash));
        const auto meta=(((previous_metadata^0x3d3e7u)<<13)|
                         ((previous_metadata^0xc107ffffu)>>19))^previous_hash;
        const auto previous_size=meta>>8;
        offset+=(static_cast<std::size_t>(previous_size)+2047)&~std::size_t{2047};
        previous=meta&255;
    }
    const auto padded_size=(static_cast<std::size_t>(size)+2047)&~std::size_t{2047};
    if(offset+padded_size>raw_.size()-128-2048) return false;
    out.assign(raw_.begin()+offset,raw_.begin()+offset+padded_size);
    std::array<std::uint32_t,4> key;
    // The assembly saves the filename hash at [esp+0x14]. Ghidra's
    // pseudocode incorrectly aliases it with the length used earlier.
    std::memcpy(key.data(),table_.data()+hash%(2048-16),16);
    for(std::size_t at=0;at+8<=out.size();at+=8) {
        std::uint32_t first=0,second=0;
        std::memcpy(&first,out.data()+at,4);
        std::memcpy(&second,out.data()+at+4,4);
        auto a=first,b=second,total=std::uint32_t{0xc6ef3720};
        for(unsigned round=0;round<32;++round) {
            b-=(((a>>5)^(a<<4))+a)^(key[(total>>11)&3]+total);
            total-=0x9e3779b9u;
            a-=(((b>>5)^(b<<4))+b)^(key[total&3]+total);
        }
        std::memcpy(out.data()+at,&a,4);
        std::memcpy(out.data()+at+4,&b,4);
        key[0]^=first;key[1]^=second;key[2]^=first;key[3]^=second;
    }
    out.resize(size);return true;
}

}  // namespace samp::client
