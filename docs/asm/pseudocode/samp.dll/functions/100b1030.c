/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1030
 * Name: FUN_100b1030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b1030(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 == '\x01')) {
    return *(undefined4 *)(param_1 + 0x48);
  }
  return 0;
}


/* END FUNCTION 0x100b1030 */
