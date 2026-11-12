//----------------------------------------------------------
//
//   SA:MP Multiplayer Modification For GTA:SA
//   Copyright 2004-2006 SA:MP team
//
//----------------------------------------------------------

#include "Signer.h"
#include "CryptoFns.h"

//------------------------------------

// 0x00065440
// Official: FUN_10065440 @ 0x10065440 (samp.dll)
CSigner::CSigner(void)
{
    m_dwLength = 0;
    m_pbSignature = NULL;
}

//------------------------------------

// 0x00065450
// Official: FUN_10065450 @ 0x10065450 (samp.dll)
CSigner::~CSigner(void)
{
    if (m_pbSignature != NULL)
        delete[] m_pbSignature;
}

//------------------------------------

#ifdef ARCTOOL
// samp.dll RVA: unknown (ARCTOOL-only branch; not established in the client)
void CSigner::SignHash(CHasher* pHasher)
{
    if (m_pbSignature != NULL)
        delete[] m_pbSignature;

    HCRYPTHASH hCryptHash = pHasher->GetContainer();
    CryptSignHash(hCryptHash, AT_SIGNATURE, NULL, CRYPT_NOHASHOID, NULL, &m_dwLength);
    m_pbSignature = new BYTE[m_dwLength];
    CryptSignHash(hCryptHash, AT_SIGNATURE, NULL, CRYPT_NOHASHOID, m_pbSignature, &m_dwLength);
}
#endif

//------------------------------------

#ifdef ARCTOOL
// samp.dll RVA: unknown (ARCTOOL-only branch; not established in the client)
BYTE* CSigner::GetSignature()
{
    return m_pbSignature;
}
#endif

//------------------------------------

#ifdef ARCTOOL
// samp.dll RVA: unknown (ARCTOOL-only branch; not established in the client)
DWORD CSigner::GetSignatureLength()
{
    return m_dwLength;
}
#endif

//------------------------------------

// 0x00065460
// Official: FUN_10065460 @ 0x10065460 (samp.dll)
void CSigner::SetSignature(DWORD dwLength, BYTE* pbSignature)
{
    if (m_pbSignature != NULL)
        delete[] m_pbSignature;

    m_dwLength = dwLength;
    m_pbSignature = new BYTE[dwLength];
    memcpy(m_pbSignature, pbSignature, m_dwLength);
}

//------------------------------------

// 0x000654b0
// Official: FUN_100654b0 @ 0x100654b0 (samp.dll)
BOOL CSigner::VerifySignature(CHasher* pHasher, CKeyPair* pKeyPair)
{
    HCRYPTHASH hCryptHash = pHasher->GetContainer();
    HCRYPTKEY hCryptKey = pKeyPair->GetContainer();
    BOOL bVerify;

    bVerify = CRYPT(VerifySignature)(hCryptHash, m_pbSignature, m_dwLength, hCryptKey, NULL, CRYPT_NOHASHOID);

    return bVerify;
}

//------------------------------------
