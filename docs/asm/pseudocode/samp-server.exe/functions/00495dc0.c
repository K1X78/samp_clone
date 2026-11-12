/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00495dc0
 * Name: FUN_00495dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00495dc0(void *this,uint param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte local_214 [4];
  uint local_210;
  char local_209;
  uint local_208 [70];
  byte local_f0 [220];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b1b2b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0044d8a0(local_208);
  local_209 = *(int *)((int)this + 0x50) != 0;
  local_c = 0;
  if (*(char *)((int)this + 0x6a) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  if (*(char *)((int)this + 0x6d) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  if (*(char *)((int)this + 0x5a) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  if (*(char *)((int)this + 0x6c) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  local_210 = *(uint *)((int)this + 0x6e);
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  if (*(char *)((int)this + 0x5b) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  local_210 = *(uint *)((int)this + 0x72);
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  if (*(char *)((int)this + 0x76) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  if (*(char *)((int)this + 0x77) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  if (*(char *)((int)this + 0x78) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  local_210 = *(uint *)((int)this + 0x86);
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  local_210 = param_1;
  FUN_0044df40(local_208,(byte *)&local_210,0x10,'\x01');
  if (*(char *)((int)this + 0x58) == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  local_210 = *(uint *)((int)this + 0x54);
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  local_214[0] = *(byte *)((int)this + 0x59);
  FUN_0044df40(local_208,local_214,8,'\x01');
  local_214[0] = *(byte *)((int)this + 0x5d);
  FUN_0044df40(local_208,local_214,8,'\x01');
  local_210 = *(uint *)((int)this + 0x62);
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  if (local_209 == '\0') {
    FUN_0044de70(local_208);
  }
  else {
    FUN_0044de90(local_208);
  }
  local_210 = *(uint *)((int)this + 0x66);
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  FUN_0044de70(local_208);
  local_210 = DAT_004ebcec;
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  local_210 = DAT_004ebcf0;
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  local_210 = DAT_004ebcf4;
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  local_210 = DAT_004ebcf8;
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  local_210 = DAT_004ebd1c;
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  pbVar2 = (byte *)FUN_00490ba0(DAT_004fc43c,"hostname");
  if (pbVar2 == (byte *)0x0) {
    local_214[0] = 0;
    FUN_0044df40(local_208,local_214,8,'\x01');
  }
  else {
    pbVar3 = pbVar2;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    local_210 = (int)pbVar3 - (int)(pbVar2 + 1);
    local_214[0] = (byte)local_210;
    FUN_0044df40(local_208,local_214,8,'\x01');
    FUN_0044dff0(local_208,pbVar2,local_210 & 0xff);
  }
  puVar5 = *(undefined4 **)((int)this + 0xc);
  pbVar2 = local_f0;
  for (iVar4 = 0x35; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2 = pbVar2 + 4;
  }
  if (puVar5 != (undefined4 *)0x0) {
    pbVar2 = local_f0;
    for (iVar4 = 0x35; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pbVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      pbVar2 = pbVar2 + 4;
    }
  }
  FUN_0044dff0(local_208,local_f0,0xd4);
  local_210 = *(uint *)((int)this + 0x7e);
  FUN_0044df40(local_208,(byte *)&local_210,0x20,'\x01');
  FUN_00493c10(this,&DAT_004bff30,local_208,(ushort)param_1,2);
  local_c = 0xffffffff;
  FUN_0044d9b0((int)local_208);
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x00495dc0 */
