/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dbbc0
 * Name: FUN_100dbbc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dbbc0(undefined4 *param_1,SOCKET param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  sockaddr *psVar6;
  int local_110;
  undefined4 *local_10c;
  sockaddr local_108 [8];
  sockaddr local_88 [8];
  
  uVar1 = *param_1;
  if (param_1[0x25] != 2) {
    if ((param_1[0xa2] == 0) && (param_1[0xbe] == 0)) {
      local_110 = 0x80;
      iVar2 = getpeername(param_2,local_88,&local_110);
      if (iVar2 != 0) {
        iVar2 = WSAGetLastError();
        uVar3 = FUN_100c8180(param_1,iVar2);
        FUN_100d8ba0(uVar1,"getpeername() failed with errno %d: %s",iVar2,uVar3);
        return;
      }
      local_110 = 0x80;
      psVar6 = local_108;
      for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
        psVar6->sa_family = 0;
        psVar6->sa_data[0] = '\0';
        psVar6->sa_data[1] = '\0';
        psVar6 = (sockaddr *)(psVar6->sa_data + 2);
      }
      iVar2 = getsockname(param_2,local_108,&local_110);
      if (iVar2 != 0) {
        iVar2 = WSAGetLastError();
        uVar3 = FUN_100c8180(param_1,iVar2);
        FUN_100d8ba0(uVar1,"getsockname() failed with errno %d: %s",iVar2,uVar3);
        return;
      }
      local_10c = (undefined4 *)((int)param_1 + 0x10a);
      iVar2 = FUN_100dbb70();
      if (iVar2 == 0) {
        puVar4 = (undefined4 *)FUN_100fdc77();
        puVar5 = (undefined4 *)FUN_100fdc77();
        uVar3 = FUN_100c8180(param_1,*puVar4);
        FUN_100d8ba0(uVar1,"ssrem inet_ntop() failed with errno %d: %s",*puVar5,uVar3);
        return;
      }
      puVar4 = local_10c;
      puVar5 = param_1 + 0x18;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
      iVar2 = FUN_100dbb70();
      if (iVar2 == 0) {
        puVar4 = (undefined4 *)FUN_100fdc77();
        puVar5 = (undefined4 *)FUN_100fdc77();
        uVar3 = FUN_100c8180(param_1,*puVar4);
        FUN_100d8ba0(uVar1,"ssloc inet_ntop() failed with errno %d: %s",*puVar5,uVar3);
        return;
      }
    }
    FUN_100dbaf0(param_1);
  }
  return;
}


/* END FUNCTION 0x100dbbc0 */
