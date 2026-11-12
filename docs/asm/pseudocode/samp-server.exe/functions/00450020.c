/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450020
 * Name: FUN_00450020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00450020(void *param_1)

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


/* END FUNCTION 0x00450020 */
