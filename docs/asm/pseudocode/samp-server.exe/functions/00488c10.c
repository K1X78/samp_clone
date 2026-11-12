/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488c10
 * Name: FUN_00488c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00488c10(void *this,uint param_1,char *param_2)

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
  puStack_8 = &LAB_004b189b;
  local_c = ExceptionList;
  uVar5 = param_1 & 0xffff;
  puVar6 = *(undefined4 **)((int)this + uVar5 * 4 + 0x800);
  if (puVar6 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    _strncpy(*(char **)((int)this + uVar5 * 4 + 0x800),param_2,0x400);
    FUN_0044d8a0(local_120);
    pcVar3 = *(char **)((int)this + uVar5 * 4 + 0x800);
    local_4 = 0;
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    local_124 = param_1 + 0x800;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = (int)pcVar3 - (int)pcVar1;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_0044dff0(local_120,*(byte **)((int)this + uVar5 * 4 + 0x800),
                 (int)pcVar3 - (int)pcVar1 & 0xffff);
    if (*(char *)(uVar5 + 0xc00 + (int)this) != '\0') {
      FUN_00493c10(DAT_004fc438,&DAT_004bb328,local_120,*(ushort *)((int)this + 0xd00),2);
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00488c10 */
