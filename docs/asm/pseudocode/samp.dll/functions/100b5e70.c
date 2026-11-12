/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5e70
 * Name: FUN_100b5e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b5e70(char *param_1)

{
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\x01') {
      FUN_100b5e30();
      return;
    }
    if (*param_1 == '\x02') {
      FUN_100b15d0(param_1);
    }
  }
  return;
}


/* END FUNCTION 0x100b5e70 */
