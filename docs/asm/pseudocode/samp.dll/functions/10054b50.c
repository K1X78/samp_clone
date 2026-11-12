/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054b50
 * Name: FUN_10054b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10054b50(undefined4 param_1)

{
  FILE *_File;
  int local_120 [3];
  void *local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115c6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f1f0();
  local_4 = 0;
  FUN_100549e0(local_120);
  _File = (FILE *)FUN_100f9cc9(param_1,&DAT_10117d30);
  if (_File != (FILE *)0x0) {
    _fwrite(local_114,local_120[0] + 7 >> 3,1,_File);
    _fclose(_File);
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return 1;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x10054b50 */
