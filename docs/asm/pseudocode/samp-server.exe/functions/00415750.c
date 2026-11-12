/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415750
 * Name: FUN_00415750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00415750(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  int iVar3;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 4) == 0)) {
    return 0;
  }
  do {
    uVar2 = (**(code **)(param_1 + 4))(param_1,param_2);
    if (uVar2 != 0) break;
    bVar1 = FUN_004156d0();
    if ((CONCAT31(extraout_var,bVar1) != 0) || (iVar3 = FUN_0040e300(), iVar3 != 0)) {
      return 2;
    }
    param_2 = *(int *)(param_2 + 0x1c);
  } while (param_2 != 0);
  return uVar2 & 2;
}


/* END FUNCTION 0x00415750 */
