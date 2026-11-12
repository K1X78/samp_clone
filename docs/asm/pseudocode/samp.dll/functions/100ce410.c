/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce410
 * Name: FUN_100ce410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100ce410(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = param_4;
  *param_4 = 0;
  iVar1 = FUN_100e0e40(2,param_2,&param_4);
  if (0 < iVar1) {
    uVar2 = FUN_100e0b20(2,&param_4,param_2,param_3);
    return uVar2;
  }
  local_20 = 0;
  local_18 = param_1[0x25];
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_1c = 2;
  FUN_100cc780(local_2c,0xc,&DAT_1011c6d4,param_3);
  iVar1 = FUN_100ce0d0(param_2,&local_20);
  if (iVar1 != 0) {
    *puVar3 = 1;
    return 0;
  }
  puVar3 = (undefined4 *)FUN_100fdc77();
  uVar2 = FUN_100c8180(param_1,*puVar3);
  FUN_100d8ae0(*param_1,"init_resolve_thread() failed for %s; %s\n",param_2,uVar2);
  iVar1 = FUN_100e0810(param_2,local_2c,&local_20,&local_30);
  if (iVar1 != 0) {
    iVar1 = WSAGetLastError();
    uVar2 = FUN_100c8180(param_1,iVar1);
    FUN_100d8ae0(*param_1,"getaddrinfo() failed for %s:%d; %s\n",param_2,param_3,uVar2);
    return 0;
  }
  return local_30;
}


/* END FUNCTION 0x100ce410 */
