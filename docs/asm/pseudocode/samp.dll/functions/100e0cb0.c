/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0cb0
 * Name: FUN_100e0cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e0cb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x54c) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x54c);
    *(undefined4 *)(param_1 + 0x54c) = 0;
  }
  iVar1 = FUN_100d2760(param_1,param_2);
  if (iVar1 != 0) {
    FUN_100d2d00(param_1,0);
  }
  return iVar1;
}


/* END FUNCTION 0x100e0cb0 */
