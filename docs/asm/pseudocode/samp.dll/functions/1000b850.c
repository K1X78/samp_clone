/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000b850
 * Name: FUN_1000b850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000b850(int param_1)

{
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(void **)(param_1 + 0xc) != (void *)0x0)) {
    _free(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* END FUNCTION 0x1000b850 */
