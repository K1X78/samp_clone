/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a2a0
 * Name: FUN_1009a2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1009a2a0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_8;
  
  iVar1 = FUN_10099530();
  if (iVar1 != 0) {
    FUN_10099710(&local_28,&local_24);
    local_14 = DAT_10181c60;
    DAT_10181c30 = local_28;
    DAT_10181c34 = local_24;
    local_18 = FUN_10086cf0(0xb,4);
    FUN_1008c210();
    local_1c = DAT_10181c28;
    local_20 = 0;
    if (0 < *(int *)(iVar1 + 0x554)) {
      iVar4 = 0;
      do {
        piVar2 = (int *)(*(int *)(iVar1 + 0x550) + iVar4);
        local_8 = piVar2[2];
        if (((piVar2[3] == local_1c) && (*piVar2 == local_28)) && (piVar2[1] == local_24)) {
          FUN_1009a0d0(local_8);
        }
        local_20 = local_20 + 1;
        iVar4 = iVar4 + 0x10;
      } while (local_20 < *(int *)(iVar1 + 0x554));
    }
    FUN_10087e10(local_14);
    uVar3 = FUN_10099f90();
    return uVar3 & (-1 < (int)uVar3) - 1;
  }
  return 0x80004005;
}


/* END FUNCTION 0x1009a2a0 */
