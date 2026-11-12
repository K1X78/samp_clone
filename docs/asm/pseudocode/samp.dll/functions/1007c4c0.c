/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007c4c0
 * Name: FUN_1007c4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_1007c4c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = FUN_1007ba20(param_2,0,*(int *)(param_1 + 4));
    return iVar1 != -1;
  }
  return false;
}


/* END FUNCTION 0x1007c4c0 */
