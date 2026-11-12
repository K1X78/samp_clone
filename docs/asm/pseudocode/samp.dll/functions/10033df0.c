/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033df0
 * Name: thunk_FUN_10038070
 * Status: ok
 * Single JMP forwarder to 0x10038070; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void thunk_FUN_10038070(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if ((*(char *)((int)param_1 + 0x14) != '\0') && (*(void **)((int)param_1 + 0x10) != (void *)0x0)
       ) {
      _free(*(void **)((int)param_1 + 0x10));
    }
    _free(param_1);
  }
  return;
}


/* END FUNCTION 0x10033df0 */
