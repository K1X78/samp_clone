#include "CryptoFns.h"

#include <cstdio>
#include <vector>

namespace
{
int fail(const char* operation)
{
    std::fprintf(stderr, "%s failed (Windows error 0x%08lx)\n", operation, GetLastError());
    return 1;
}
}

int main()
{
    HCRYPTPROV provider = 0;
    if (!CRYPT(AcquireContext)(&provider, nullptr, nullptr, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT))
        return fail("acquire transient provider");

    HCRYPTKEY signingKey = 0;
    if (!CryptGenKey(provider, AT_SIGNATURE, 1024u << 16, &signingKey))
        return fail("generate fixture signing key");

    // Form the signature with the OS API and the production archive verifier's flags.
    const BYTE data[] = {'s', 'a', 'm', 'p'};
    HCRYPTHASH signingHash = 0;
    if (!CryptCreateHash(provider, CALG_SHA1, 0, 0, &signingHash) ||
        !CryptHashData(signingHash, data, sizeof(data), 0))
        return fail("prepare fixture hash");

    DWORD signatureLength = 0;
    if (!CryptSignHashA(signingHash, AT_SIGNATURE, nullptr, CRYPT_NOHASHOID, nullptr, &signatureLength))
        return fail("measure fixture signature");

    std::vector<BYTE> signature(signatureLength);
    if (!CryptSignHashA(signingHash, AT_SIGNATURE, nullptr, CRYPT_NOHASHOID, signature.data(), &signatureLength))
        return fail("create fixture signature");

    DWORD publicKeyLength = 0;
    if (!CryptExportKey(signingKey, 0, PUBLICKEYBLOB, 0, nullptr, &publicKeyLength))
        return fail("measure fixture key");

    std::vector<BYTE> publicKeyBlob(publicKeyLength);
    if (!CryptExportKey(signingKey, 0, PUBLICKEYBLOB, 0, publicKeyBlob.data(), &publicKeyLength))
        return fail("export fixture key");

    HCRYPTKEY publicKey = 0;
    if (!CRYPT(ImportKey)(provider, publicKeyBlob.data(), publicKeyLength, 0, 0, &publicKey))
        return fail("import public key");

    for (bool tampered : {false, true})
    {
        const BYTE suffix[] = {'m', static_cast<BYTE>(tampered ? 'x' : 'p')};
        HCRYPTHASH hash = 0;
        if (!CRYPT(CreateHash)(provider, CALG_SHA1, 0, 0, &hash) ||
            !CRYPT(HashData)(hash, data, 2, 0) ||
            !CRYPT(HashData)(hash, suffix, sizeof(suffix), 0))
            return fail("hash the archive bytes in chunks");

        const BOOL valid = CRYPT(VerifySignature)(hash, signature.data(), signatureLength, publicKey, nullptr, CRYPT_NOHASHOID);
        if ((!valid && !tampered) || (valid && tampered))
            return fail("verify fixture signature");
        if (!CRYPT(DestroyHash)(hash))
            return fail("destroy verification hash");
    }

    if (!CRYPT(DestroyHash)(signingHash) ||
        !CRYPT(DestroyKey)(publicKey) ||
        !CRYPT(DestroyKey)(signingKey) ||
        !CRYPT(ReleaseContext)(provider, 0))
        return fail("release CryptoAPI resources");

    return 0;
}
