/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000b820
 * Name: FUN_1000b820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000b820(undefined4 *param_1)

{
  if ((*(char *)((int)param_1 + 0xd) != '\0') && ((void *)*param_1 != (void *)0x0)) {
    _free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


/* END FUNCTION 0x1000b820 */
