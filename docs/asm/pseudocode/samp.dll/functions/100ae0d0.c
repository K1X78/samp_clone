/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae0d0
 * Name: FUN_100ae0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100ae0d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(int **)(param_1 + 0x2a4) != (int *)0x0) && (**(int **)(param_1 + 0x2a4) != 0x863c40)) {
    uVar1 = (*(code *)0x5e01c0)(param_3,param_2,0);
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x100ae0d0 */
