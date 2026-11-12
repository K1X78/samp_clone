/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062950
 * Name: FUN_10062950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10062950(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  void *_DstBuf;
  FILE *_File;
  size_t sVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100635c0();
  local_4 = 0;
  _DstBuf = _calloc(1,0x8000);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  if (_DstBuf != (void *)0x0) {
    _File = (FILE *)FUN_100f9cc9(param_1,&DAT_10118e1c);
    if (_File != (FILE *)0x0) {
      bVar1 = (byte)_File->_flag;
      while ((bVar1 & 0x10) == 0) {
        sVar2 = _fread(_DstBuf,1,0x8000,_File);
        if (0 < (int)sVar2) {
          thunk_FUN_10063d30(_DstBuf,sVar2);
        }
        bVar1 = (byte)_File->_flag;
      }
      _fclose(_File);
      _free(_DstBuf);
      FUN_10063ce0(param_2);
    }
    local_4 = 0xffffffff;
    FUN_10063550();
    ExceptionList = local_c;
    return;
  }
  local_4 = 0xffffffff;
  FUN_10063550();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10062950 */
