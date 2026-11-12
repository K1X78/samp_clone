//----------------------------------------------------------
//
//   SA:MP Multiplayer Modification For GTA:SA
//   Copyright 2004-2007 SA:MP team
//
//----------------------------------------------------------

#pragma once

// This file defines a basic interface for data streams
// and provides implementations for a filebased stream
// as well as as a memory based stream.

#include <stdio.h>
#include <stdlib.h>

class CAbstractStream
{
public:
    enum eSeek
    {
        SeekStart,
        SeekCurrent,
        SeekEnd,
    };

    // 0x00063e70
// Official: FUN_10063e70 @ 0x10063e70 (samp.dll)
    CAbstractStream() {}

    // 0x00063e80
// Official: FUN_10063e80 @ 0x10063e80 (samp.dll)
    virtual ~CAbstractStream() {}

    // samp.dll RVA: unknown (inline/pure-virtual or legacy helper; standalone native entry not established)
    virtual unsigned int Read(void* pbBuffer, int nNumberOfBytes) = 0;

    // 0x00063e90
// Official: FUN_10063e90 @ 0x10063e90 (samp.dll)
    virtual unsigned int Read(void* pbBuffer, int nElementSize, int nNumberOfElements)
    {
        return Read(pbBuffer, nNumberOfElements * nElementSize);
    }

    // samp.dll RVA: unknown (inline/pure-virtual or legacy helper; standalone native entry not established)
    virtual unsigned int Write(const void* pbBuffer, int nNumberOfBytes) = 0;

    // 0x00063eb0
// Official: FUN_10063eb0 @ 0x10063eb0 (samp.dll)
    virtual unsigned int Write(const void* pbBuffer, int nElementSize, int nNumberOfElements)
    {
        return Write(pbBuffer, nNumberOfElements * nElementSize);
    }

    // samp.dll RVA: unknown (inline/pure-virtual or legacy helper; standalone native entry not established)
    virtual void Seek(int nOffset, eSeek seekMode) = 0;

    // 0x00063ed0
// Official: FUN_10063ed0 @ 0x10063ed0 (samp.dll)
    virtual void Seek(int nOffset)
    {
        Seek(nOffset, SeekStart);
    }

    // samp.dll RVA: unknown (inline/pure-virtual or legacy helper; standalone native entry not established)
    virtual unsigned int Tell() = 0;
};

class CFileStream : public CAbstractStream
{
protected:
    FILE* m_fiFile;

public:
    enum eMode
    {
        ModeRead,
        ModeReadWrite,
        ModeAppend,
        ModeWrite,
    };

    enum eType
    {
        TypeText,
        TypeBinary,
    };

    // samp.dll RVA: unknown (inline/pure-virtual or legacy helper; standalone native entry not established)
    CFileStream()
    {
        m_fiFile = NULL;
    }

    // 0x00064bf0
// Official: FUN_10064bf0 @ 0x10064bf0 (samp.dll)
    CFileStream(const char* szFilename, eType type, eMode mode)
    {
        m_fiFile = NULL;
        Open(szFilename, type, mode);
    }

    // 0x00064d50
// Official: FUN_10064d50 @ 0x10064d50 (samp.dll)
    virtual ~CFileStream()
    {
        if (m_fiFile)
            Close();
    }

    // 0x00063f00
// Official: FUN_10063f00 @ 0x10063f00 (samp.dll)
    virtual bool Open(const char* szFilename, eType type, eMode mode)
    {
        if (m_fiFile)
            Close();

        char szMode[4];
        int nPos = 0;
        szMode[0] = szMode[1] = szMode[2] = szMode[3] = 0;

        switch (mode)
        {
            case ModeRead:
                szMode[nPos++] = 'r';
                break;
            case ModeWrite:
                szMode[nPos++] = 'w';
                break;
            case ModeReadWrite:
                szMode[nPos++] = 'r';
                szMode[nPos++] = '+';
                break;
            case ModeAppend:
                szMode[nPos++] = 'a';
                break;
        }

        switch (type)
        {
            case TypeText:
                szMode[nPos++] = 't';
                break;
            case TypeBinary:
                szMode[nPos++] = 'b';
                break;
        }

        m_fiFile = fopen(szFilename, szMode);
        if (!m_fiFile)
            return false;

        return true;
    }

    // 0x00064c50
// Official: FUN_10064c50 @ 0x10064c50 (samp.dll)
    virtual bool IsOpen()
    {
        return (m_fiFile != NULL);
    }

    // 0x00064c60
// Official: FUN_10064c60 @ 0x10064c60 (samp.dll)
    virtual void Close()
    {
        if (m_fiFile)
        {
            fclose(m_fiFile);
            m_fiFile = NULL;
        }
    }

    // 0x00064c80
// Official: FUN_10064c80 @ 0x10064c80 (samp.dll)
    virtual unsigned int Read(void* pbBuffer, int nNumberOfBytes)
    {
        return (unsigned int)fread(pbBuffer, 1, nNumberOfBytes, m_fiFile);
    }

    // 0x00064ca0
// Official: FUN_10064ca0 @ 0x10064ca0 (samp.dll)
    virtual unsigned int Read(void* pbBuffer, int nElementSize, int nNumberOfElements)
    {
        return (unsigned int)fread(pbBuffer, nElementSize, nNumberOfElements, m_fiFile);
    }

    // 0x00064cc0
// Official: FUN_10064cc0 @ 0x10064cc0 (samp.dll)
    virtual unsigned int Write(const void* pbBuffer, int nNumberOfBytes)
    {
        return (unsigned int)fwrite(pbBuffer, 1, nNumberOfBytes, m_fiFile);
    }

    // 0x00064ce0
// Official: FUN_10064ce0 @ 0x10064ce0 (samp.dll)
    virtual unsigned int Write(const void* pbBuffer, int nElementSize, int nNumberOfElements)
    {
        return (unsigned int)fwrite(pbBuffer, nElementSize, nNumberOfElements, m_fiFile);
    }

    // 0x00064d00
// Official: FUN_10064d00 @ 0x10064d00 (samp.dll)
    virtual void Seek(int nOffset, eSeek seekMode)
    {
        int mode = 0;
        switch (seekMode)
        {
            case SeekCurrent:
                mode = SEEK_CUR;
                break;
            case SeekStart:
                mode = SEEK_SET;
                break;
            case SeekEnd:
                mode = SEEK_END;
                break;
        }

        fseek(m_fiFile, nOffset, seekMode);
    }

    // 0x00064d20
// Official: FUN_10064d20 @ 0x10064d20 (samp.dll)
    virtual unsigned int Tell()
    {
        return (unsigned int)ftell(m_fiFile);
    }
};

class CMemoryStream : public CAbstractStream
{
protected:
    unsigned char* m_pbBuffer;
    unsigned int m_nOffset;
    unsigned int m_nLength;
    bool m_bCopy;

public:
    // 0x00063fb0
// Official: FUN_10063fb0 @ 0x10063fb0 (samp.dll)
    CMemoryStream(unsigned char* pbBuffer, unsigned int nLength, bool bCopy = true)
    {
        m_bCopy = bCopy;
        m_nOffset = 0;
        m_nLength = nLength;

        if (bCopy)
        {
            m_pbBuffer = (unsigned char*)malloc(nLength);
            memcpy(m_pbBuffer, pbBuffer, nLength);
        }
        else
        {
            m_pbBuffer = pbBuffer;
        }
    }

    // 0x00064120
// Official: FUN_10064120 @ 0x10064120 (samp.dll)
    virtual ~CMemoryStream()
    {
        if (m_bCopy && m_pbBuffer)
        {
            free(m_pbBuffer);
        }
    }

    // 0x00064010
// Official: FUN_10064010 @ 0x10064010 (samp.dll)
    virtual unsigned int Read(void* pbBuffer, int nNumberOfBytes)
    {
        if (m_nOffset + nNumberOfBytes > m_nLength)
            nNumberOfBytes = m_nLength - m_nOffset;

        memcpy(pbBuffer, m_pbBuffer + m_nOffset, nNumberOfBytes);
        m_nOffset += nNumberOfBytes;

        return nNumberOfBytes;
    }

    // 0x00064060
// Official: FUN_10064060 @ 0x10064060 (samp.dll)
    virtual unsigned int Write(const void* pbBuffer, int nNumberOfBytes)
    {
        if (m_nOffset + nNumberOfBytes > m_nLength)
            nNumberOfBytes = m_nLength - m_nOffset;

        memcpy(m_pbBuffer + m_nOffset, pbBuffer, nNumberOfBytes);
        m_nOffset += nNumberOfBytes;

        return nNumberOfBytes;
    }

    // 0x000640b0
// Official: FUN_100640b0 @ 0x100640b0 (samp.dll)
    virtual void Seek(int nOffset, eSeek seekMode)
    {
        switch (seekMode)
        {
            case SeekStart:
                m_nOffset = nOffset;
                break;
            case SeekCurrent:
                m_nOffset += nOffset;
                break;
            case SeekEnd:
                m_nOffset = m_nLength + nOffset;
                break;
        }

        if (m_nOffset > m_nLength)
            m_nOffset = m_nLength;
    }

    // 0x000640f0
// Official: FUN_100640f0 @ 0x100640f0 (samp.dll)
    virtual unsigned int Tell()
    {
        return m_nOffset;
    }
};
