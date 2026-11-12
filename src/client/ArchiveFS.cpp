//----------------------------------------------------------
//
//   SA:MP Multiplayer Modification For GTA:SA
//   Copyright 2004-2006 SA:MP team
//
//----------------------------------------------------------

#include "ArchiveFS.h"
#include "archive_hash.hpp"

#include "CryptoContext.h"
#include "Hasher.h"
#include "KeyPair.h"
#include "Obfuscator.h"
#include "Signer.h"
#include "TinyEncrypt.h"

#ifndef ARCTOOL
////#include "../game/Util.h"
// Client diagnostics header is unused in the release archive path.
#endif

// samp.dll RVA: unknown (inline/pure-virtual or legacy helper; standalone native entry not established)
extern void _declspec(noreturn) GameForcedExit(int iReasonCode);
#define FORCE_EXIT(a)                                                                                                                                                              \
    GameForcedExit(a);                                                                                                                                                             \
    while (true)                                                                                                                                                                   \
        ;

//------------------------------------

//------------------------------------

// 0x00064dd0
// Official: FUN_10064dd0 @ 0x10064dd0 (samp.dll)
CArchiveFS::CArchiveFS(void)
{
    m_dwNumEntries = SAA_MAX_ENTRIES;
    m_bLoaded = false;
    m_bEntriesLoaded = false;
}

//------------------------------------

// 0x00064e20
// Official: FUN_10064e20 @ 0x10064e20 (samp.dll)
CArchiveFS::CArchiveFS(DWORD dwNumEntries, DWORD dwFDSize)
{
    m_dwNumEntries = dwNumEntries;
    m_bLoaded = false;
    m_bEntriesLoaded = false;

    m_Header.dwFakeDataSize = dwFDSize;
}

//------------------------------------

// 0x00064e80
// Official: FUN_10064e80 @ 0x10064e80 (samp.dll)
CArchiveFS::~CArchiveFS(void) {}

//------------------------------------

// 0x00064550
// Official: FUN_10064550 @ 0x10064550 (samp.dll)
void CArchiveFS::LoadEntries()
{
    // Get the file signature, verify it... use the result to decode the entries table

    // Verify the Archive Signature, and decode the Entry block
    CCryptoContext context;
    CKeyPair keyPair(&context);
    CHasher hasher(&context);
    CSigner signer;
    CTinyEncrypt tinyEnc;
    DWORD i;

    // 1. Load the signature from the file
    DWORD dwSignSize = 128; //m_Header.headerV2.dwSignSize;
    BYTE* pbSignature;
    DWORD dwSignDataEnd;

    pbSignature = new BYTE[dwSignSize];
    m_pStream->Seek(-(INT)dwSignSize, CAbstractStream::SeekEnd);
    dwSignDataEnd = m_pStream->Tell();
    m_pStream->Read(pbSignature, dwSignSize);

    // 2. Hash the stuff (excluding the header and signature!)
    BYTE* pbReadData;
    DWORD dwReadSize;
    const DWORD dwReadBlockSize = 10 * 1024; // 10kb

    m_pStream->Seek(m_Header.SizeOf()); // start from the actual data section
    pbReadData = new BYTE[dwReadBlockSize];
    for (i = m_Header.SizeOf(); i < dwSignDataEnd;)
    {
        dwReadSize = m_pStream->Read(pbReadData, dwReadBlockSize);
        if (i + dwReadSize > dwSignDataEnd)
            hasher.AddData(dwSignDataEnd - i, pbReadData);
        else
            hasher.AddData(dwReadSize, pbReadData);
        i += dwReadSize;
    }
    delete[] pbReadData;

    // 3. Load the key and verify the signature
    BOOL bVerified;

    keyPair.LoadFromMemory(RSA_PUB_KEY_SIZE, (BYTE*)RSA_PUB_KEY, RSA_XOR_KEY);
    signer.SetSignature(dwSignSize, pbSignature);
    bVerified = signer.VerifySignature(&hasher, &keyPair);

    delete[] pbSignature;

    // Set the obfuscation decoding mask based on the bVerified value
    m_dwObfsMask = -((INT)bVerified); // if its 1 (true), then 0xffffffff, else 0.

    // 4. Decode the TEA encrypted archive entry

    m_pStream->Seek((dwSignDataEnd - m_dwNumEntries * sizeof(SAA_ENTRY)));
    DWORD dwFilePos = m_pStream->Tell();
    m_pStream->Read(m_pEntries, sizeof(SAA_ENTRY), m_dwNumEntries);
    dwFilePos = m_pStream->Tell();

    tinyEnc.SetKey((BYTE*)TEA_KEY, TEA_XOR_KEY);
    tinyEnc.DecryptData(sizeof(SAA_ENTRY) * m_dwNumEntries, reinterpret_cast<BYTE*>(m_pEntries));

    // 5. Build a binary tree of the entries.. it makes searching for files faster (since we have a
    //    huge index with fake entries)
    for (i = 0; i < m_dwNumEntries; i++)
    {
        m_EntryBTreeRoot.AddEntry(&m_pEntries[i]);
    }

    // Done.

    m_bEntriesLoaded = true;
}

//------------------------------------

// 0x00064f20
// Official: FUN_10064f20 @ 0x10064f20 (samp.dll)
bool CArchiveFS::Load(char* szFileName)
{
    if (m_bLoaded)
        Unload();

    m_pStream = new CFileStream(szFileName, CFileStream::TypeBinary, CFileStream::ModeRead);

    m_Header.Read(m_pStream);

    m_Header.XorV2Identifier();

    m_bLoaded = true;

    if (!m_Header.VerifyIdentifier())
    {
        Unload();
        return false;
    }

    return true;
}

//------------------------------------

// 0x000647b0
// Official: FUN_100647b0 @ 0x100647b0 (samp.dll)
bool CArchiveFS::Load(BYTE* pbData, DWORD nLength)
{
    if (m_bLoaded)
        Unload();

    m_pStream = new CMemoryStream(pbData, nLength);

    m_Header.Read(m_pStream);

    m_Header.XorV2Identifier();

    m_bLoaded = true;

    if (!m_Header.VerifyIdentifier())
    {
        Unload();
        return false;
    }

    return true;
}

//------------------------------------

// 0x00064890
// Official: FUN_10064890 @ 0x10064890 (samp.dll)
void CArchiveFS::Unload()
{
    if (!m_bLoaded)
        return;

    delete m_pStream;
    m_pStream = NULL;

    m_bLoaded = false;
    m_bEntriesLoaded = false;
}

//------------------------------------

// 0x000648c0
// Official: FUN_100648c0 @ 0x100648c0 (samp.dll)
DWORD CArchiveFS::GetFileIndex(DWORD dwFileHash)
{
    if (!m_bEntriesLoaded)
        LoadEntries();

    AFS_ENTRYBT_NODE* node = m_EntryBTreeRoot.FindEntry(dwFileHash);

    if (node == NULL)
    {
        return FS_INVALID_FILE;
    }

    SAA_ENTRY saaEntry = *(node->pEntry); // Always make a copy of saaEntry before decrypting it
                                          // Otherwise, the data decryption will get messed up

    saaEntry.dwDataBlock = UNOBFUSCATE_DATA(saaEntry.dwDataBlock) ^ (saaEntry.dwFileNameHash & this->m_dwObfsMask);
    if (node->pEntry == &(m_pEntries[saaEntry.dwPrevEntry]))
        return FS_INVALID_FILE;

    // Okay, we got a file.
    // TODO: It might be wise at this point to start a thread to decrypt the data
    // Chances are if the index was requested, data for it will be requested.

    // Painfully evil conversion from SAA_ENTRY* to DWORD
    DWORD* ppEntry = reinterpret_cast<DWORD*>(&node);
    return *ppEntry;
}

//------------------------------------

// 0x00064940
// Official: FUN_10064940 @ 0x10064940 (samp.dll)
DWORD CArchiveFS::GetFileIndex(char* szFileName)
{
    // PRE: szFileName must be the filename only (no paths!)

    if (!m_bEntriesLoaded)
        LoadEntries();

    CHAR szFileNameLC[MAX_PATH];
    strcpy(szFileNameLC, szFileName);
    _strlwr(szFileNameLC);

    DWORD dwHash = samp::client::g_archive_hash.HashString(szFileNameLC);

    DWORD dwIndex = GetFileIndex(dwHash);

#ifdef _DEBUG
    if (dwIndex != FS_INVALID_FILE)
    {
        CHAR szDebugMsg[1024];
        sprintf(szDebugMsg, "ArchiveFS: Requested file: %s...\n", szFileNameLC);
        OutputDebugString(szDebugMsg);
    }
#endif

    return dwIndex;
}

//------------------------------------

// 0x000649a0
// Official: FUN_100649a0 @ 0x100649a0 (samp.dll)
DWORD CArchiveFS::GetFileSize(DWORD dwFileIndex)
{
    AFS_ENTRYBT_NODE* node = *(reinterpret_cast<AFS_ENTRYBT_NODE**>(&dwFileIndex));

    SAA_ENTRY saaEntry = *(node->pEntry); // Make a copy!
    saaEntry.dwDataBlock = UNOBFUSCATE_DATA(saaEntry.dwDataBlock) ^ (saaEntry.dwFileNameHash & this->m_dwObfsMask);
    return saaEntry.dwFileSize;
}

//------------------------------------

// 0x000649e0
// Official: FUN_100649e0 @ 0x100649e0 (samp.dll)
BYTE* CArchiveFS::GetFileData(DWORD dwFileIndex)
{
    CTinyEncrypt tinyEnc;

    AFS_ENTRYBT_NODE* node = *(reinterpret_cast<AFS_ENTRYBT_NODE**>(&dwFileIndex));

    SAA_ENTRY saaEntry = *(node->pEntry); // Make a copy!
    saaEntry.dwDataBlock = UNOBFUSCATE_DATA(saaEntry.dwDataBlock) ^ (saaEntry.dwFileNameHash & this->m_dwObfsMask);

    DWORD dwFileSize;

    if (node->pbData != NULL)
    {
        return node->pbData;
    }
    else
    {
        // Alloc memory (in blocks!)
        dwFileSize = saaEntry.dwFileSize;
        if (dwFileSize % SAA_BLOCK_SIZE != 0)
            dwFileSize += (SAA_BLOCK_SIZE - (dwFileSize % SAA_BLOCK_SIZE));

        node->pbData = new BYTE[dwFileSize];

        // Determine offset to data
        SAA_ENTRY prevEntry;
        DWORD dwDataOffset = m_Header.SizeOf();

        if (saaEntry.dwPrevEntry != m_Header.headerV2.dwInvalidIndex)
        {
            prevEntry = saaEntry;
            do
            {
                prevEntry = m_pEntries[prevEntry.dwPrevEntry];
                prevEntry.dwDataBlock = UNOBFUSCATE_DATA(prevEntry.dwDataBlock) ^ (prevEntry.dwFileNameHash & this->m_dwObfsMask);

                dwFileSize = prevEntry.dwFileSize;
                if (dwFileSize % SAA_BLOCK_SIZE != 0)
                    dwFileSize += (SAA_BLOCK_SIZE - (dwFileSize % SAA_BLOCK_SIZE));
                dwDataOffset += dwFileSize;
            }
            while (prevEntry.dwPrevEntry != m_Header.headerV2.dwInvalidIndex);
        }

        m_pStream->Seek(dwDataOffset);

        // Load the data in blocks and decrypt it
        BYTE* pbTEAKey = reinterpret_cast<BYTE*>(this->m_pEntries) + (saaEntry.dwFileNameHash % (sizeof(SAA_ENTRY) * m_dwNumEntries - TEA_KEY_SIZE));

        tinyEnc.SetKey(pbTEAKey, 0);

        for (DWORD i = 0; i < saaEntry.dwFileSize; i += SAA_BLOCK_SIZE)
        {
            m_pStream->Read(node->pbData + i, SAA_BLOCK_SIZE);
            tinyEnc.DecryptData(SAA_BLOCK_SIZE, node->pbData + i);
        }

        return node->pbData;
    }
}

// 0x00064bd0
// Official: FUN_10064bd0 @ 0x10064bd0 (samp.dll)
void CArchiveFS::UnloadData(DWORD dwFileIndex)
{
    AFS_ENTRYBT_NODE* node = *(reinterpret_cast<AFS_ENTRYBT_NODE**>(&dwFileIndex));

    if (node->pbData != NULL)
    {
        delete[] node->pbData;
        node->pbData = NULL;
    }
}
