/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006e290
 * Name: FUN_1006e290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1006e290(int param_1,ushort param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 < 0x3ed) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x26 + (uint)param_2 * 4), puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return 0;
}


/* END FUNCTION 0x1006e290 */
