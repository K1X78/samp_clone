/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae130
 * Name: FUN_100ae130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ae130(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_1009f8a0();
    if (iVar1 != 0) {
      FUN_100b19a0(iVar1,param_2,param_3);
    }
  }
  return;
}


/* END FUNCTION 0x100ae130 */
