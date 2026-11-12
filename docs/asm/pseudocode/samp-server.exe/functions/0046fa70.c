/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fa70
 * Name: FUN_0046fa70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0046fa70(int *param_1,char *param_2)

{
  FILE *_File;
  void *_DstBuf;
  int iVar1;
  int *piVar2;
  size_t local_38;
  short local_34 [10];
  size_t local_20 [8];
  
  _File = (FILE *)FUN_0049fbe9(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 0x13;
  }
  _fread(&local_38,0x38,1,_File);
  FUN_00401020(local_34);
  FUN_00401020(&local_38);
  FUN_00401020(local_20);
  if (local_34[0] != -0xe20) {
    _fclose(_File);
    return 0x11;
  }
  _DstBuf = _malloc(local_20[0]);
  if (_DstBuf == (void *)0x0) {
    _fclose(_File);
    return 0x10;
  }
  _rewind(_File);
  _fread(_DstBuf,1,local_38,_File);
  _fclose(_File);
  piVar2 = param_1;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  iVar1 = FUN_00401320(param_1,(int)_DstBuf);
  if (iVar1 != 0) {
    _free(_DstBuf);
    *param_1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x0046fa70 */
