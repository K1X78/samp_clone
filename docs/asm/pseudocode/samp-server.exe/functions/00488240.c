/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488240
 * Name: FUN_00488240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00488240(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte local_128 [4];
  undefined4 local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b187b;
  local_c = ExceptionList;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  local_128[0] = 6;
  FUN_0044df40(local_120,local_128,8,'\x01');
  local_128[0] = *(byte *)((int)this + 0x102d);
  FUN_0044df40(local_120,local_128,8,'\x01');
  local_124 = *(undefined4 *)((int)this + 0x1029);
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_128[0] = (byte)((int)pbVar2 - (int)(param_1 + 1));
  FUN_0044df40(local_120,local_128,8,'\x01');
  FUN_0044dff0(local_120,param_1,(int)pbVar2 - (int)(param_1 + 1) & 0xff);
  if (DAT_004fc438 != (void *)0x0) {
    FUN_00493c10(DAT_004fc438,&DAT_004bef9c,local_120,*(ushort *)((int)this + 0x11),5);
  }
  *(undefined1 *)((int)this + 0x1028) = 1;
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00488240 */
