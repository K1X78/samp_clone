//----------------------------------------------------------
//
//   SA:MP Multiplayer Modification For GTA:SA
//   Copyright 2004-2006 SA:MP team
//
//----------------------------------------------------------

#include "CryptoFns.h"

#ifndef ARCTOOL

#include <string>

namespace
{
// CryptoAPI export names are XOR-encoded in the original DLL.
// 0x1011bb18
constexpr char acquireContextName[] = {0x16, 0x27, 0x2c, 0x25, 0x21, 0x14, 0x36, 0x24, 0x20, 0x3c, 0x27,
                                       0x30, 0x16, 0x3a, 0x3b, 0x21, 0x30, 0x2d, 0x21, 0x14, 0x55, 0};
// 0x1011bb30
constexpr char releaseContextName[] = {0x16, 0x27, 0x2c, 0x25, 0x21, 0x07, 0x30, 0x39, 0x30, 0x34, 0x26, 0x30,
                                       0x16, 0x3a, 0x3b, 0x21, 0x30, 0x2d, 0x21, 0x55, 0};
// 0x1011bb48
constexpr char createHashName[] = {0x16, 0x27, 0x2c, 0x25, 0x21, 0x16, 0x27, 0x30, 0x34, 0x21, 0x30, 0x1d, 0x34, 0x26, 0x3d, 0x55, 0};
// 0x1011bb58
constexpr char destroyHashName[] = {0x16, 0x27, 0x2c, 0x25, 0x21, 0x11, 0x30, 0x26, 0x21, 0x27, 0x3a, 0x2c, 0x1d, 0x34, 0x26, 0x3d, 0x55, 0};
// 0x1011bb70
constexpr char hashDataName[] = {0x16, 0x27, 0x2c, 0x25, 0x21, 0x1d, 0x34, 0x26, 0x3d, 0x11, 0x34, 0x21, 0x34, 0x55, 0};
// 0x1011bb80
constexpr char destroyKeyName[] = {0x16, 0x27, 0x2c, 0x25, 0x21, 0x11, 0x30, 0x26, 0x21, 0x27, 0x3a, 0x2c, 0x1e, 0x30, 0x2c, 0x55, 0};
// 0x1011bb90
constexpr char importKeyName[] = {0x16, 0x27, 0x2c, 0x25, 0x21, 0x1c, 0x38, 0x25, 0x3a, 0x27, 0x21, 0x1e, 0x30, 0x2c, 0x55, 0};
// 0x1011bba0
constexpr char verifySignatureName[] = {0x16, 0x27, 0x2c, 0x25, 0x21, 0x03, 0x30, 0x27, 0x3c, 0x33, 0x2c, 0x06,
                                        0x3c, 0x32, 0x3b, 0x34, 0x21, 0x20, 0x27, 0x30, 0x14, 0x55, 0};

// Official: FUN_100650f0 @ 0x100650f0 (samp.dll)
FARPROC xCryptGetFunction(const char* name)
{
    std::string decodedName(name);
    for (char& byte : decodedName)
        byte ^= 0x55;

    return GetProcAddress(GetModuleHandleA("advapi32"), decodedName.c_str());
}
}

// Official: FUN_10065170 @ 0x10065170 (samp.dll)
BOOL WINAPI xCryptCallAcquireContext(HCRYPTPROV* provider, LPCSTR containerName, LPCSTR providerName, DWORD providerType, DWORD flags)
{
    static const auto function = reinterpret_cast<decltype(&CryptAcquireContextA)>(xCryptGetFunction(acquireContextName));
    return function ? function(provider, containerName, providerName, providerType, flags) : FALSE;
}

// Official: FUN_100651a0 @ 0x100651a0 (samp.dll)
BOOL WINAPI xCryptCallReleaseContext(HCRYPTPROV provider, DWORD flags)
{
    static const auto function = reinterpret_cast<decltype(&CryptReleaseContext)>(xCryptGetFunction(releaseContextName));
    return function ? function(provider, flags) : FALSE;
}

// Official: FUN_100651d0 @ 0x100651d0 (samp.dll)
BOOL WINAPI xCryptCallCreateHash(HCRYPTPROV provider, ALG_ID algorithm, HCRYPTKEY key, DWORD flags, HCRYPTHASH* hash)
{
    static const auto function = reinterpret_cast<decltype(&CryptCreateHash)>(xCryptGetFunction(createHashName));
    return function ? function(provider, algorithm, key, flags, hash) : FALSE;
}

// Official: FUN_10065200 @ 0x10065200 (samp.dll)
BOOL WINAPI xCryptCallDestroyHash(HCRYPTHASH hash)
{
    static const auto function = reinterpret_cast<decltype(&CryptDestroyHash)>(xCryptGetFunction(destroyHashName));
    return function ? function(hash) : FALSE;
}

// Official: FUN_10065230 @ 0x10065230 (samp.dll)
BOOL WINAPI xCryptCallHashData(HCRYPTHASH hash, const BYTE* data, DWORD dataLength, DWORD flags)
{
    static const auto function = reinterpret_cast<decltype(&CryptHashData)>(xCryptGetFunction(hashDataName));
    return function ? function(hash, data, dataLength, flags) : FALSE;
}

// Official: FUN_10065260 @ 0x10065260 (samp.dll)
BOOL WINAPI xCryptCallDestroyKey(HCRYPTKEY key)
{
    static const auto function = reinterpret_cast<decltype(&CryptDestroyKey)>(xCryptGetFunction(destroyKeyName));
    return function ? function(key) : FALSE;
}

// Official: FUN_10065290 @ 0x10065290 (samp.dll)
BOOL WINAPI xCryptCallImportKey(HCRYPTPROV provider, const BYTE* data, DWORD dataLength, HCRYPTKEY publicKey, DWORD flags, HCRYPTKEY* key)
{
    static const auto function = reinterpret_cast<decltype(&CryptImportKey)>(xCryptGetFunction(importKeyName));
    return function ? function(provider, data, dataLength, publicKey, flags, key) : FALSE;
}

// Official: FUN_100652c0 @ 0x100652c0 (samp.dll)
BOOL WINAPI xCryptCallVerifySignature(HCRYPTHASH hash, const BYTE* signature, DWORD signatureLength, HCRYPTKEY publicKey, LPCSTR description, DWORD flags)
{
    static const auto function = reinterpret_cast<decltype(&CryptVerifySignatureA)>(xCryptGetFunction(verifySignatureName));
    return function ? function(hash, signature, signatureLength, publicKey, description, flags) : FALSE;
}

#endif
