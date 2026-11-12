/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002230
 * Name: FUN_10002230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10002230(int param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (uint)param_2 * 4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = param_3;
  }
  return;
}


/* END FUNCTION 0x10002230 */
