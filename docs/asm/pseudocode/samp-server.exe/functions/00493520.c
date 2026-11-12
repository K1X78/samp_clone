/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493520
 * Name: FUN_00493520
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00493520(void *this,int param_1)

{
  char *_Src;
  int iVar1;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_44 = 0;
  if (param_1 == 0) {
    if ((*(int *)((int)this + 0x30) != 0) || (*(int *)((int)this + 0x34) == 0)) {
      *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
    }
    _Src = FUN_00493460((int)this);
    if (_Src != (char *)0x0) {
      _sscanf(_Src,"%s%d",local_40,&local_44);
      _sprintf(&DAT_0051c080,"gamemodes/%s.amx",local_40);
      iVar1 = FUN_00469110(&DAT_0051c080);
      if (iVar1 != 0) {
        if (*(int *)((int)this + 0x30) == 0) {
          *(undefined4 *)((int)this + 0x30) = local_44;
        }
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -1;
        *(undefined4 *)((int)this + 0x34) = 1;
        return 1;
      }
    }
  }
  else {
    _sprintf(&DAT_0051c080,"gamemodes/%s.amx",param_1);
    iVar1 = FUN_00469110(&DAT_0051c080);
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0x30) = 0;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00493520 */
