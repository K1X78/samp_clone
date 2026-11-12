/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00491fa0
 * Name: FUN_00491fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00491fa0(char *param_1)

{
  char cVar1;
  tm *_Tm;
  char *_Format;
  undefined4 local_1110;
  char local_110c [260];
  byte local_1008 [2052];
  CHAR local_804 [2048];
  undefined4 uStack_4;
  
  uStack_4 = 0x491faa;
  _vsprintf((char *)local_1008,param_1,&stack0x00000008);
  CharToOemA((LPCSTR)local_1008,local_804);
  _puts(local_804);
  _fflush((FILE *)&DAT_004ebe38);
  if (DAT_004fc430 != (FILE *)0x0) {
    if ((DAT_004fc43c == (void *)0x0) ||
       (cVar1 = FUN_00490cc0(DAT_004fc43c,"timestamp"), cVar1 == '\0')) {
      _fprintf(DAT_004fc430,"%s\n",local_1008);
    }
    else {
      local_1110 = FID_conflict___time32((undefined4 *)0x0);
      _Tm = _localtime((time_t *)&local_1110);
      _Format = (char *)FUN_00490ba0(DAT_004fc43c,"logtimeformat");
      _strftime(local_110c,0x100,_Format,_Tm);
      _fprintf(DAT_004fc430,"%s %s\n",local_110c,local_1008);
    }
    _fflush(DAT_004fc430);
  }
  if (DAT_004ebce4 == 0xffff) {
    if (DAT_0051c1a0 != 0) {
      FUN_0049e3a0((char *)local_1008);
    }
    return;
  }
  FUN_00495be0(DAT_004fc438,DAT_004ebce4,0xffffffff,local_1008);
  return;
}


/* END FUNCTION 0x00491fa0 */
