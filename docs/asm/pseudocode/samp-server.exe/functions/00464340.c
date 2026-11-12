/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00464340
 * Name: FUN_00464340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00464340(void *this,uint param_1,ushort param_2)

{
  char cVar1;
  char *pcVar2;
  void *this_00;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint local_128;
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b138b;
  local_c = ExceptionList;
  uVar4 = param_1 & 0xffff;
  if (*(int *)((int)this + uVar4 * 4) != 0) {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_4 = 0;
    local_128 = param_1;
    FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
    iVar3 = uVar4 * 0x21;
    local_128 = *(uint *)(iVar3 + 0x1004 + (int)this);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + iVar3 + 0x1008);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + iVar3 + 0x100c);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + iVar3 + 0x1010);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = *(uint *)((int)this + iVar3 + 0x1014);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_124[0] = *(byte *)((int)this + iVar3 + 0x1018);
    FUN_0044df40(local_120,local_124,8,'\x01');
    local_128 = (uint)*(ushort *)((uVar4 + 0x7d) * 0x21 + (int)this);
    FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
    local_128 = (uint)*(ushort *)((int)this + iVar3 + 0x101f);
    FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
    pcVar5 = *(char **)((int)this + iVar3 + 0x1000);
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar6 = local_120;
    pcVar2 = pcVar2 + (1 - (int)(pcVar5 + 1));
    this_00 = (void *)FUN_00462dd0();
    FUN_00463220(this_00,pcVar5,(int)pcVar2,puVar6);
    FUN_00493c10(DAT_004fc438,&DAT_004bb244,local_120,param_2,2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00464340 */
