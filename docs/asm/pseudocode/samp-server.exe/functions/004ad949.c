/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ad949
 * Name: __fltout2
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  undefined4 in_stack_ffffffb8;
  undefined2 uVar2;
  short local_30;
  char local_2e;
  uint local_2c [6];
  uint local_14;
  uint uStack_10;
  undefined2 uStack_c;
  undefined4 local_8;
  
  uVar2 = (undefined2)((uint)in_stack_ffffffb8 >> 0x10);
  local_8 = DAT_004ec7b4;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = _I10_OUTPUT(local_14,uStack_10,CONCAT22(uVar2,uStack_c),0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  FUN_004a68f0((uint *)_ResultStr,local_2c);
  _Flt->mantissa = _ResultStr;
  return _Flt;
}


/* END FUNCTION 0x004ad949 */
