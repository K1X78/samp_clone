/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3120
 * Name: FUN_100e3120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e3120(int param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x830) = 0;
  uVar1 = FUN_100d8500();
  *(int *)(param_1 + 0x788) = (int)uVar1;
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  *(undefined4 *)(param_1 + 0x7c4) = 0;
  *(int *)(param_1 + 0x78c) = (int)((ulonglong)uVar1 >> 0x20);
  *(uint *)(param_1 + 0x758) = *(uint *)(param_1 + 0x758) & 0x90;
  return;
}


/* END FUNCTION 0x100e3120 */
