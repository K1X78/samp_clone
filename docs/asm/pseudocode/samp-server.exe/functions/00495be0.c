/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00495be0
 * Name: FUN_00495be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00495be0(void *this,ushort param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  local_124 = param_2;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_124 = (int)pbVar2 - (int)(param_3 + 1);
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  FUN_0044dff0(local_120,param_3,(int)pbVar2 - (int)(param_3 + 1));
  FUN_00493c10(this,&DAT_004bff2c,local_120,param_1,3);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00495be0 */
