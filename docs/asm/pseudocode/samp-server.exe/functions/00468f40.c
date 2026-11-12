/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468f40
 * Name: FUN_00468f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00468f40(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('F' < param_1)))) &&
     ((param_1 < 'a' || ('f' < param_1)))) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x00468f40 */
