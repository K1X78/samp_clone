/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415640
 * Name: FUN_00415640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00415640(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = (*(code *)*param_1)(param_1,param_2);
  if ((uVar1 == 0) && ((*(byte *)(param_2 + 3) & 0x20) == 0)) {
    uVar2 = FUN_00415640(param_1,*(int *)(param_2 + 8));
    if ((uVar2 != 0) || (uVar2 = FUN_00415640(param_1,*(int *)(param_2 + 0xc)), uVar2 != 0)) {
      return 2;
    }
    if ((*(byte *)(param_2 + 3) & 8) == 0) {
      iVar3 = FUN_0040e2c0();
      if (iVar3 != 0) {
        return 2;
      }
    }
    else {
      uVar2 = FUN_00415750((int)param_1,*(int *)(param_2 + 0x10));
      if (uVar2 != 0) {
        return 2;
      }
    }
  }
  return uVar1 & 2;
}


/* END FUNCTION 0x00415640 */
