//----------------------------------------------------------
//
//   SA:MP Multiplayer Modification For GTA:SA
//   Copyright 2004-2006 SA:MP team
//
//----------------------------------------------------------

#include "Hasher.h"
#include "CryptoFns.h"

//------------------------------------

// 0x00140790
DWORD CHasher::ms_dwHashAlgorithm = CALG_SHA1;

//------------------------------------

// 0x000652f0
// Official: FUN_100652f0 @ 0x100652f0 (samp.dll)
CHasher::CHasher(CCryptoContext* pContext)
{
    // Save context for later
    m_pContext = pContext;

    // Generate a hash container
    HCRYPTPROV hCryptProv = pContext->GetProvider();
    CRYPT(CreateHash)(hCryptProv, ms_dwHashAlgorithm, NULL, NULL, &m_hCryptHash);
}

//------------------------------------

// 0x00065320
// Official: FUN_10065320 @ 0x10065320 (samp.dll)
CHasher::~CHasher(void)
{
    // Destory the hash container
    CRYPT(DestroyHash)(m_hCryptHash);
}

//------------------------------------

// 0x00065330
// Official: FUN_10065330 @ 0x10065330 (samp.dll)
void CHasher::AddData(DWORD dwDataLength, BYTE* pbData)
{
    // Add the data to be hashed
    CRYPT(HashData)(m_hCryptHash, pbData, dwDataLength, 0);
}

//------------------------------------

// 0x00065350
// Official: FUN_10065350 @ 0x10065350 (samp.dll)
HCRYPTHASH CHasher::GetContainer()
{
    return m_hCryptHash;
}

//------------------------------------
