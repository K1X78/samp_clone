/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067240
 * Name: FUN_10067240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10067240(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *_File;
  tm *_Tm;
  undefined4 local_48;
  char local_44 [68];
  
  local_48 = FID_conflict___time32(0);
  if (*(int *)(param_1 + 0xd) != 0) {
    _File = (FILE *)FUN_100f9cc9(param_1 + 0x11,&DAT_10118170);
    if (_File != (FILE *)0x0) {
      _Tm = _localtime((time_t *)&local_48);
      _strftime(local_44,0x40,"[%H:%M:%S]",_Tm);
      if (param_2 == 2) {
        _fprintf(_File,"%s <%s> %s\r\n",local_44,param_4,param_3);
      }
      else if ((param_2 == 4) || (param_2 == 8)) {
        _fprintf(_File,"%s %s\r\n",local_44,param_3);
        _fclose(_File);
        return;
      }
      _fclose(_File);
    }
  }
  return;
}


/* END FUNCTION 0x10067240 */
