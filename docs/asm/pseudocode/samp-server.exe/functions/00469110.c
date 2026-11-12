/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469110
 * Name: FUN_00469110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00469110(char *param_1)

{
  FILE *_File;
  
  _File = (FILE *)FUN_0049fbe9(param_1,"r");
  if (_File != (FILE *)0x0) {
    _fclose(_File);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00469110 */
