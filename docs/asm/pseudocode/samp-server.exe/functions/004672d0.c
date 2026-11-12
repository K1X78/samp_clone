/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004672d0
 * Name: FUN_004672d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004672d0(void *this,uint param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b14db;
  local_c = ExceptionList;
  uVar5 = param_1 & 0xffff;
  puVar6 = *(undefined4 **)((int)this + uVar5 * 4 + 0x4000);
  if (puVar6 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    _strncpy(*(char **)((int)this + uVar5 * 4 + 0x4000),param_2,0x400);
    FUN_0044d8a0(local_120);
    pcVar3 = *(char **)((int)this + uVar5 * 4 + 0x4000);
    local_4 = 0;
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    local_124 = param_1;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = (int)pcVar3 - (int)pcVar1;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,*(byte **)((int)this + uVar5 * 4 + 0x4000),
                 (int)pcVar3 - (int)pcVar1 & 0xffff);
    iVar4 = 0;
    do {
      if (*(char *)((int)this + iVar4 + uVar5 * 1000 + 0x6000) != '\0') {
        FUN_00493c10(DAT_004fc438,&DAT_004bb328,local_120,(ushort)iVar4,2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 1000);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004672d0 */
