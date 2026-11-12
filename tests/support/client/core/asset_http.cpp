#include "samp/client/asset_manager.hpp"
#include <algorithm>
#include <chrono>
#include <memory>
#ifdef _WIN32
#include <windows.h>
#include <winhttp.h>
#endif

namespace samp::client {

// Native e180/c830/e0a0 assigns a file descriptor to one of six HTTP workers.
// The worker's owned URL/bytes never retain a pointer to the manager, so reset
// can cancel/join it before releasing a server's manifest or cache directory.
bool AssetManager::start_http_download(std::uint8_t type,std::uint32_t checksum,std::string_view url) {
    if(type!=1 && type!=2) return false;
    const auto index=find_index(type==1?AssetKind::kModel:AssetKind::kTexture,checksum);
    if(index<0) return false;
    const auto free=std::find_if(http_.begin(),http_.end(),[](const auto& job){return !job;});
    if(free==http_.end()) return false;
    // Original e0a0 logs [url0xID]:URL when logurls is enabled.
    if(url_notice_) url_notice_(checksum,url);
    const auto expected=type==1?elements_[index]->model_size:elements_[index]->texture_size;
    const auto pending=std::find(pending_requests_.begin(),pending_requests_.end(),std::pair{type,checksum});
    if(pending!=pending_requests_.end()) pending_requests_.erase(pending);
    // Explicit host memory bound; native wire sizes remain uint32.
    if(expected>64u*1024*1024 || url.empty()) {
        transfer_.type=type;transfer_.index=static_cast<std::uint32_t>(index);fail_download(6001);return false;
    }
    AssetHttpJob job;job.type=type;job.checksum=checksum;job.index=static_cast<std::uint32_t>(index);job.expected=expected;
    job.cancelled=std::make_shared<std::atomic_bool>(false);
    job.result=std::async(std::launch::async,[url=std::string(url),expected,cancel=job.cancelled]() {
        AssetHttpResult result;
#ifdef _WIN32
        const auto length=MultiByteToWideChar(CP_UTF8,MB_ERR_INVALID_CHARS,url.data(),static_cast<int>(url.size()),nullptr,0);
        if(length<=0) {result.error=3;return result;}
        std::wstring address(length,L'\0');
        MultiByteToWideChar(CP_UTF8,MB_ERR_INVALID_CHARS,url.data(),static_cast<int>(url.size()),address.data(),length);
        URL_COMPONENTS parts{};parts.dwStructSize=sizeof(parts);
        parts.dwHostNameLength=parts.dwUrlPathLength=parts.dwExtraInfoLength=static_cast<DWORD>(-1);
        if(!WinHttpCrackUrl(address.c_str(),static_cast<DWORD>(address.size()),0,&parts) ||
           (parts.nScheme!=INTERNET_SCHEME_HTTP && parts.nScheme!=INTERNET_SCHEME_HTTPS)) {result.error=1;return result;}
        const auto close=[](void* handle){if(handle) WinHttpCloseHandle(handle);};
        using Handle=std::unique_ptr<void,decltype(close)>;
        Handle session(WinHttpOpen(L"SA-MP",WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
            WINHTTP_NO_PROXY_NAME,WINHTTP_NO_PROXY_BYPASS,0),close);
        if(!session) {result.error=7;return result;}
        // Bounded host IO permits prompt reset without invoking the game loop.
        WinHttpSetTimeouts(session.get(),2000,2000,2000,2000);
        const std::wstring host(parts.lpszHostName,parts.dwHostNameLength);
        Handle connection(WinHttpConnect(session.get(),host.c_str(),parts.nPort,0),close);
        if(!connection) {result.error=7;return result;}
        std::wstring path=parts.dwUrlPathLength?std::wstring(parts.lpszUrlPath,parts.dwUrlPathLength):L"/";
        if(parts.dwExtraInfoLength) path.append(parts.lpszExtraInfo,parts.dwExtraInfoLength);
        Handle request(WinHttpOpenRequest(connection.get(),L"GET",path.c_str(),nullptr,
            WINHTTP_NO_REFERER,WINHTTP_DEFAULT_ACCEPT_TYPES,parts.nScheme==INTERNET_SCHEME_HTTPS?WINHTTP_FLAG_SECURE:0),close);
        if(!request) {result.error=7;return result;}
        DWORD redirect=WINHTTP_OPTION_REDIRECT_POLICY_ALWAYS;
        WinHttpSetOption(request.get(),WINHTTP_OPTION_REDIRECT_POLICY,&redirect,sizeof(redirect));
        if(cancel->load()) {result.error=42;return result;}
        if(!WinHttpSendRequest(request.get(),WINHTTP_NO_ADDITIONAL_HEADERS,0,WINHTTP_NO_REQUEST_DATA,0,0,0) ||
           !WinHttpReceiveResponse(request.get(),nullptr)) {result.error=7;return result;}
        DWORD status=0,n=sizeof(status);
        if(!WinHttpQueryHeaders(request.get(),WINHTTP_QUERY_STATUS_CODE|WINHTTP_QUERY_FLAG_NUMBER,
            WINHTTP_HEADER_NAME_BY_INDEX,&status,&n,WINHTTP_NO_HEADER_INDEX) || status<200 || status>=300) {
            result.error=22;return result;
        }
        DWORD advertised=0,advertised_size=sizeof(advertised);
        const bool have_length=WinHttpQueryHeaders(request.get(),WINHTTP_QUERY_CONTENT_LENGTH|WINHTTP_QUERY_FLAG_NUMBER,
            WINHTTP_HEADER_NAME_BY_INDEX,&advertised,&advertised_size,WINHTTP_NO_HEADER_INDEX)!=FALSE;
        std::array<std::uint8_t,16384> buffer{};
        for(;;) {
            if(cancel->load()) {result.error=42;result.bytes.clear();return result;}
            DWORD read=0;
            if(!WinHttpReadData(request.get(),buffer.data(),static_cast<DWORD>(buffer.size()),&read)) {
                result.error=have_length && result.bytes.size()<advertised?18u:7u;return result;
            }
            if(!read) {
                // Match curl's partial-file status before record size/CRC checks.
                if(have_length && result.bytes.size()!=advertised) result.error=18;
                return result;
            }
            if(std::uint64_t(result.bytes.size())+read>expected) {result.error=100;result.bytes.clear();return result;}
            result.bytes.insert(result.bytes.end(),buffer.begin(),buffer.begin()+read);
        }
#else
        (void)expected;(void)cancel;(void)url;result.error=1;return result;
#endif
    });
    free->emplace(std::move(job));
    state_=std::any_of(http_.begin(),http_.end(),[](const auto& slot){return !slot;})?AssetState::kLoaded:AssetState::kDownloading;
    return true;
}

// The original worker loop df90 calls de60 and commits its own completed file.
// Futures retain the same six independent jobs; only this owner applies results.
void AssetManager::poll_http_downloads() {
    if(transfer_.active) return;
    for(auto& slot:http_) {
        if(!slot || slot->result.wait_for(std::chrono::milliseconds(0))!=std::future_status::ready) continue;
        auto job=std::move(*slot);slot.reset();
        AssetHttpResult result;
        try {result=job.result.get();} catch(...) {result.error=7;}
        if(job.cancelled->load()) continue;
        if(result.error) {
            transfer_.type=job.type;transfer_.index=job.index;fail_download(result.error);continue;
        }
        if(begin_download(job.type,job.checksum) && write_download(result.bytes)) finish_download();
    }
    if(!transfer_.active && std::any_of(http_.begin(),http_.end(),[](const auto& job){return !job;}))
        state_=AssetState::kLoaded;
}

} // namespace samp::client
