/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002250
 * Name: FUN_10002250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10002250(int param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (uint)param_2 * 4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x10);
  }
  return;
}


/* END FUNCTION 0x10002250 */
