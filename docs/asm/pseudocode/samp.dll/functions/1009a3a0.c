/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a3a0
 * Name: FUN_1009a3a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1009a3a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  iVar1 = FUN_10099840();
  DAT_10181c40 = iVar1;
  iVar2 = FUN_10099570();
  if (iVar2 == 0) {
    return 0x80004005;
  }
  uVar4 = 0;
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x24)) {
    piVar5 = *(int **)(iVar2 + 0x20);
    do {
      if (*piVar5 == iVar1) {
        uVar4 = *(uint *)(*(int *)(iVar2 + 0x2c) + iVar3 * 4);
        break;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x24));
  }
  FUN_10086cf0(0x10,4);
  FUN_1008c210();
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1009a1a0(uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  FUN_10087e10(DAT_10181c44);
  uVar4 = FUN_10099fa0();
  return uVar4 & (-1 < (int)uVar4) - 1;
}


/* END FUNCTION 0x1009a3a0 */
