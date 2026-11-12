/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ab30
 * Name: FUN_1009ab30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1009ab30(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  DAT_10181c20 = FUN_100995f0();
  FUN_10086cf0(4,4);
  FUN_1008c210();
  iVar1 = FUN_10099530();
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x560)) {
      do {
        FUN_1009a020(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x55c) + iVar3 * 4) + 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x560));
    }
    FUN_10087e10(DAT_10181c24);
    uVar2 = FUN_1009a810();
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  return 0x80004005;
}


/* END FUNCTION 0x1009ab30 */
