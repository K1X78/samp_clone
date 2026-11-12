/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049ef10
 * Name: FUN_0049ef10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0049ef10(void *this,byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  void *_Memory;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_0049ed40(this,param_1);
  if ((iVar2 < 0) && (iVar2 = FUN_0049ede0(this,(char *)param_1), iVar2 < 0)) {
    return 0;
  }
  if (param_3 == 0) {
    if (*(int *)((int)this + iVar2 * 0x3d + 0x29) != 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)((int)this + iVar2 * 0x3d + 0x29) = 1;
  }
  _Memory = *(void **)((int)this + iVar2 * 0x3d + 0x39);
  *(undefined4 *)((int)this + iVar2 * 0x3d + 0x2d) = 2;
  if (_Memory != (void *)0x0) {
    _free(_Memory);
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = _calloc(1,(size_t)(pcVar3 + (1 - (int)(param_2 + 1))));
  *(char **)((int)this + iVar2 * 0x3d + 0x39) = pcVar3;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return 1;
}


/* END FUNCTION 0x0049ef10 */
