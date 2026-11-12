/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487ce0
 * Name: FUN_00487ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00487ce0(void *this,uint param_1)

{
  char cVar1;
  char *pcVar2;
  void *this_00;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint local_128;
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b185b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  if (*(int *)((int)this + (param_1 & 0xffff) * 4 + 0x8400) != 0) {
    local_128 = param_1 + 0x400;
    FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
    iVar3 = (param_1 & 0xffff) * 0x21;
    local_128 = *(uint *)(iVar3 + 4 + (int)this);
    puVar4 = (undefined4 *)(iVar3 + (int)this);
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = puVar4[2];
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = puVar4[3];
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = puVar4[4];
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_128 = puVar4[5];
    FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
    local_124[0] = *(byte *)(puVar4 + 6);
    FUN_0044df40(local_120,local_124,8,'\x01');
    local_128 = (uint)*(ushort *)((int)puVar4 + 0x1d);
    FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
    local_128 = (uint)*(ushort *)((int)puVar4 + 0x1f);
    FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
    pcVar5 = (char *)*puVar4;
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar4 = local_120;
    pcVar2 = pcVar2 + (1 - (int)(pcVar5 + 1));
    this_00 = (void *)FUN_00462dd0();
    FUN_00463220(this_00,pcVar5,(int)pcVar2,puVar4);
    FUN_00493c10(DAT_004fc438,&DAT_004bb244,local_120,*(ushort *)((int)this + 0x9800),2);
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00487ce0 */
