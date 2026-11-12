/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00495ae0
 * Name: FUN_00495ae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00495ae0(void *param_1,ushort param_2,uint param_3,char *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint local_534;
  undefined4 local_530 [70];
  byte local_418 [1028];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b1b0b;
  local_14 = ExceptionList;
  pbVar2 = local_418;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2 = pbVar2 + 4;
  }
  ExceptionList = &local_14;
  _vsprintf((char *)local_418,param_4,&stack0x00000014);
  FUN_0044d8a0(local_530);
  pbVar2 = local_418;
  local_c = 0;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  local_534 = param_3;
  FUN_0044df40(local_530,(byte *)&local_534,0x20,'\x01');
  local_534 = (int)pbVar2 - (int)(local_418 + 1);
  FUN_0044df40(local_530,(byte *)&local_534,0x20,'\x01');
  FUN_0044dff0(local_530,local_418,(int)pbVar2 - (int)(local_418 + 1));
  FUN_00493c10(param_1,&DAT_004bff2c,local_530,param_2,3);
  local_c = 0xffffffff;
  FUN_0044d9b0((int)local_530);
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x00495ae0 */
