/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b440
 * Name: FUN_1009b440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009b440(undefined4 *param_1)

{
  _free((void *)*param_1);
  if (*(int *)((int)param_1 + 0xe) != 0) {
    (*(code *)PTR_FUN_10140c0c)((int)param_1 + 0xe);
  }
  return;
}


/* END FUNCTION 0x1009b440 */
