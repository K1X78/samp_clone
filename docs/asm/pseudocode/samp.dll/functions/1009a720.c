/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a720
 * Name: FUN_1009a720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1009a720(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_c;
  
  iVar2 = FUN_10099820();
  if (DAT_10181c54 != 0) {
    DAT_10181c58 = iVar2;
  }
  iVar3 = FUN_10099570();
  if (iVar3 == 0) {
    return 0x80004005;
  }
  FUN_10086cf0(0xf,4);
  FUN_1008c210();
  local_c = 0;
  if (0 < *(int *)(iVar3 + 0x24)) {
    do {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + local_c * 4);
      iVar6 = 0;
      if (0 < *(int *)(iVar3 + 0x48)) {
        piVar4 = *(int **)(iVar3 + 0x44);
        do {
          if ((*piVar4 == iVar2) && (piVar4[1] == iVar1)) goto LAB_1009a7bf;
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar6 < *(int *)(iVar3 + 0x48));
      }
      FUN_1009a160(iVar1);
LAB_1009a7bf:
      local_c = local_c + 1;
    } while (local_c < *(int *)(iVar3 + 0x24));
  }
  FUN_10086cf0(0xf,4);
  FUN_10087e10(DAT_10181c40);
  uVar5 = FUN_1009a3a0();
  return uVar5 & (-1 < (int)uVar5) - 1;
}


/* END FUNCTION 0x1009a720 */
