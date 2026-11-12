/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cd600
 * Name: FUN_100cd600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100cd600(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (DAT_102acb38 == 0) {
    _DAT_102acb40 = 0x6362696c;
    _DAT_102acb44 = 0x2f6c7275;
    _DAT_102acb4c = 0x302e;
    _DAT_102acb48 = 0x37352e37;
    DAT_102acb4e = 0;
    pcVar1 = &DAT_102acb40;
    do {
      pcVar5 = pcVar1;
      pcVar1 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    uVar4 = -(int)(pcVar5 + -0x102acb40) + 200;
    if (1 < uVar4) {
      iVar2 = thunk_FUN_100e2a00(pcVar5 + 1,-(int)(pcVar5 + -0x102acb40) + 199);
      if (iVar2 != 0) {
        *pcVar5 = ' ';
        uVar4 = uVar4 - (iVar2 + 1);
        pcVar5 = pcVar5 + iVar2 + 1;
      }
    }
    uVar3 = FUN_100dfc20();
    FUN_100cc780(pcVar5,uVar4," zlib/%s",uVar3);
    DAT_102acb38 = 1;
  }
  return &DAT_102acb40;
}


/* END FUNCTION 0x100cd600 */
