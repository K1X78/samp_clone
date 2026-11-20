//----------------------------------------------------------
//
//   SA:MP Multiplayer Modification For GTA:SA
//   Copyright 2004-2006 SA:MP team
//
//----------------------------------------------------------

#pragma once

#include <windows.h>
#include <wincrypt.h>

#ifndef ARCTOOL
#define CRYPT(n) xCryptCall##n

BOOL WINAPI xCryptCallAcquireContext(HCRYPTPROV* provider, LPCSTR containerName, LPCSTR providerName, DWORD providerType, DWORD flags);
BOOL WINAPI xCryptCallReleaseContext(HCRYPTPROV provider, DWORD flags);
BOOL WINAPI xCryptCallCreateHash(HCRYPTPROV provider, ALG_ID algorithm, HCRYPTKEY key, DWORD flags, HCRYPTHASH* hash);
BOOL WINAPI xCryptCallDestroyHash(HCRYPTHASH hash);
BOOL WINAPI xCryptCallHashData(HCRYPTHASH hash, const BYTE* data, DWORD dataLength, DWORD flags);
BOOL WINAPI xCryptCallDestroyKey(HCRYPTKEY key);
BOOL WINAPI xCryptCallImportKey(HCRYPTPROV provider, const BYTE* data, DWORD dataLength, HCRYPTKEY publicKey, DWORD flags, HCRYPTKEY* key);
BOOL WINAPI xCryptCallVerifySignature(HCRYPTHASH hash, const BYTE* signature, DWORD signatureLength, HCRYPTKEY publicKey, LPCSTR description, DWORD flags);

#else
#define CRYPT(n) Crypt##n
#endif
