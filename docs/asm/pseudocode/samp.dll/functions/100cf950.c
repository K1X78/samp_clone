/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf950
 * Name: FUN_100cf950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cf950(void)

{
  undefined **ppuVar1;
  undefined *in_EAX;
  char *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  
  if (PTR_DAT_10155510 == &DAT_10124018) {
    if (in_EAX != (undefined *)0x0) {
      PTR_DAT_10155510 = in_EAX;
      return 0;
    }
    if (PTR_DAT_10155514 != (undefined *)0x0) {
      pcVar2 = _getenv("CURL_SSL_BACKEND");
      if ((pcVar2 != (char *)0x0) && (iVar5 = 0, PTR_DAT_10155514 != (undefined *)0x0)) {
        ppuVar4 = &PTR_DAT_10155514;
        do {
          iVar3 = FUN_100de830(pcVar2,*(undefined4 *)(*ppuVar4 + 4));
          if (iVar3 != 0) {
            PTR_DAT_10155510 = (&PTR_DAT_10155514)[iVar5];
            return 0;
          }
          ppuVar1 = ppuVar4 + 1;
          ppuVar4 = ppuVar4 + 1;
          iVar5 = iVar5 + 1;
        } while (*ppuVar1 != (undefined *)0x0);
      }
      PTR_DAT_10155510 = PTR_DAT_10155514;
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x100cf950 */
