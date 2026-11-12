/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc0c0
 * Name: FUN_100bc0c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bc0c0(int param_1,undefined4 param_2)

{
  FILE *_File;
  
  _File = (FILE *)FUN_100f9cc9(param_2,&DAT_10117d30);
  if (_File == (FILE *)0x0) {
    return 0;
  }
  FUN_100bc060(_File);
  _fclose(_File);
  return *(undefined4 *)(param_1 + 8);
}


/* END FUNCTION 0x100bc0c0 */
