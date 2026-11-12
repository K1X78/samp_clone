/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048f420
 * Name: FUN_0048f420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0048f420(void *this,ushort param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte local_12c [4];
  uint local_128;
  uint local_124;
  uint local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b18fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  local_124 = (int)pbVar2 - (int)(param_2 + 1);
  pbVar2 = param_2 + 0x41;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  local_128 = (uint)*(ushort *)((int)this + 0xd5);
  FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
  local_12c[0] = (byte)local_124;
  FUN_0044df40(local_120,local_12c,8,'\x01');
  FUN_0044dff0(local_120,param_2,local_124 & 0xff);
  local_12c[0] = (byte)((int)pbVar2 - (int)(param_2 + 0x42));
  FUN_0044df40(local_120,local_12c,8,'\x01');
  FUN_0044dff0(local_120,param_2 + 0x41,(int)pbVar2 - (int)(param_2 + 0x42) & 0xff);
  local_128 = *(uint *)(param_2 + 0x82);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  if (param_2[0x86] == 0) {
    FUN_0044de70(local_120);
  }
  else {
    FUN_0044de90(local_120);
  }
  if (param_2[0x87] == 0) {
    FUN_0044de70(local_120);
  }
  else {
    FUN_0044de90(local_120);
  }
  if (param_2[0x88] == 0) {
    FUN_0044de70(local_120);
  }
  else {
    FUN_0044de90(local_120);
  }
  if (param_2[0x89] == 0) {
    FUN_0044de70(local_120);
  }
  else {
    FUN_0044de90(local_120);
  }
  local_128 = *(uint *)(param_2 + 0x8a);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  if (((*(int *)((int)DAT_004fc438 + 8) != 0) && (param_1 < 1000)) &&
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 + (uint)param_1 * 4) != 0)) {
    FUN_00493c10(DAT_004fc438,&DAT_004bf20c,local_120,param_1,2);
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0048f420 */
