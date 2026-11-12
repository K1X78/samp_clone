/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004940e0
 * Name: FUN_004940e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004940e0(void *this,undefined4 param_1,undefined4 param_2)

{
  tm *_Tm;
  char *_Buf;
  FILE *_File;
  void *local_4;
  
  local_4 = this;
  local_4 = (void *)FID_conflict___time32((undefined4 *)0x0);
  _Tm = _localtime((time_t *)&local_4);
  _Buf = operator_new(0x100);
  _strftime(_Buf,0x100,"[%d/%m/%y | %H:%M:%S]",_Tm);
  (**(code **)(**(int **)((int)this + 0x40) + 0xf0))(param_2,0);
  _File = (FILE *)FUN_0049fbe9("samp.ban","a");
  if (_File != (FILE *)0x0) {
    _fprintf(_File,"%s %s %s - %s\n",param_2,_Buf,local_4,param_1);
    _fclose(_File);
    _free(_Buf);
  }
  return;
}


/* END FUNCTION 0x004940e0 */
