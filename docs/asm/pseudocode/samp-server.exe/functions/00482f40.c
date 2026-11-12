/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482f40
 * Name: FUN_00482f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_00482f40(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *_Dest;
  uint local_10;
  char *local_c;
  undefined4 local_8 [2];
  
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  _Dest = operator_new(0x11b);
  _strncpy(_Dest,param_1,0xff);
  *(undefined4 *)(_Dest + 0x107) = param_3;
  *(undefined4 *)(_Dest + 0xff) = param_2;
  *(undefined4 *)(_Dest + 0x103) = param_2;
  *(undefined4 *)(_Dest + 0x10f) = param_4;
  _Dest[0x113] = '\0';
  _Dest[0x114] = '\0';
  _Dest[0x115] = '\0';
  _Dest[0x116] = '\0';
  _Dest[0x10b] = '\0';
  _Dest[0x10c] = '\0';
  _Dest[0x10d] = '\0';
  _Dest[0x10e] = '\0';
  _Dest[0x117] = '\0';
  _Dest[0x118] = '\0';
  _Dest[0x119] = '\0';
  _Dest[0x11a] = '\0';
  local_10 = *(uint *)((int)this + 0xc);
  local_c = _Dest;
  FUN_00482a60(this,local_8,&local_10);
  return *(undefined4 *)((int)this + 0xc);
}


/* END FUNCTION 0x00482f40 */
