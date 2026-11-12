/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f19d0
 * Name: FUN_100f19d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100f19d0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "Too long hexadecimal number";
  case 2:
    return "Illegal or missing hexadecimal sequence";
  case 3:
    return "Malformed encoding found";
  case 4:
    return "Write error";
  case 5:
    return "Bad content-encoding found";
  case 6:
    return "Out of memory";
  default:
    return "OK";
  }
}


/* END FUNCTION 0x100f19d0 */
