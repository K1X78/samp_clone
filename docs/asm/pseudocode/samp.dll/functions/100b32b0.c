/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b32b0
 * Name: FUN_100b32b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b32b0(int param_1)

{
  if ((*(int *)(param_1 + 0x987) == 5) && (*(int *)(param_1 + 0x9a3) != -1)) {
    FUN_100b2750(*(int *)(param_1 + 0x9a3));
    *(undefined4 *)(param_1 + 0x9a3) = 0xffffffff;
  }
  return;
}


/* END FUNCTION 0x100b32b0 */
