/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490aa0
 * Name: FUN_00490aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00490aa0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_12c [4];
  void *local_128;
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b195b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _strncpy(local_10c,param_1,0xff);
  __strlwr(local_10c);
  pcVar3 = local_10c;
  local_114 = 0xf;
  local_118 = 0;
  local_128 = (void *)((uint)local_128 & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00469e30(local_12c,(undefined4 *)local_10c,(int)pcVar3 - (int)(local_10c + 1));
  local_4 = 0;
  piVar4 = (int *)FUN_004909d0(this,&local_110,local_12c);
  iVar2 = *piVar4;
  if (0xf < local_114) {
    _free(local_128);
  }
  if (iVar2 == *(int *)((int)this + 4)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0x28);
  }
  ExceptionList = local_c;
  return uVar5;
}


/* END FUNCTION 0x00490aa0 */
