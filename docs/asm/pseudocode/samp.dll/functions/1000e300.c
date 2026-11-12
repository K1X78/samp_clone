/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000e300
 * Name: FUN_1000e300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000e300(int param_1,ushort param_2)

{
  int iVar1;
  
  if ((param_2 < 0x3ed) && (iVar1 = *(int *)(param_1 + 0x26 + (uint)param_2 * 4), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}


/* END FUNCTION 0x1000e300 */
