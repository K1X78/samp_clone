/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7080
 * Name: FUN_100b7080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7080(int param_1,char param_2)

{
  *(byte *)(*(int *)(param_1 + 0x4c) + 0x42d) =
       *(byte *)(*(int *)(param_1 + 0x4c) + 0x42d) & 0x7f | param_2 << 7;
  return;
}


/* END FUNCTION 0x100b7080 */
