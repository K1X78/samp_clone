/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5e30
 * Name: FUN_100b5e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b5e30(char *param_1)

{
  code *pcVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 == '\x01')) {
    pcVar1 = (code *)FUN_100b1030(param_1);
    (*pcVar1)(param_1);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100b5e30 */
