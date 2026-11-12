/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dc120
 * Name: FUN_100dc120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dc120(undefined4 param_1,SOCKET *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *unaff_EBX;
  undefined8 uVar7;
  SOCKET local_c8;
  undefined1 local_c0 [48];
  int local_90;
  int local_8c;
  int iStack_84;
  sockaddr local_80 [8];
  
  iVar1 = *unaff_EBX;
  *param_2 = 0xffffffff;
  bVar3 = false;
  iVar4 = FUN_100dbfc0();
  if (iVar4 != 0) {
    return 0;
  }
  if ((local_80[0].sa_family != 2) ||
     (iVar4 = FUN_100e4690(2,local_80[0].sa_data + 2,local_c0,0x2e), iVar4 == 0)) {
    local_c0[0] = 0;
    puVar5 = (undefined4 *)FUN_100fdc77();
    *puVar5 = 0x273f;
    FUN_100fdc77();
    puVar5 = (undefined4 *)FUN_100fdc77();
    uVar6 = FUN_100c8180();
    FUN_100d8ba0(iVar1,"sa_addr inet_ntop() failed with errno %d: %s",*puVar5,uVar6);
    FUN_100dbf60();
    return 0;
  }
  ntohs(local_80[0].sa_data._0_2_);
  FUN_100d8ae0(iVar1,"  Trying %s...\n",local_c0);
  if ((local_90 == 2) && (local_8c == 1)) {
    bVar2 = true;
    if (*(int *)(iVar1 + 0x578) != 0) {
      FUN_100dbd70();
    }
  }
  else {
    bVar2 = false;
  }
  FUN_100dbdd0(local_c8);
  if ((bVar2) && (*(int *)(iVar1 + 0x6c0) != 0)) {
    FUN_100db510();
  }
  if (*(code **)(iVar1 + 0x1c8) != (code *)0x0) {
    iVar4 = (**(code **)(iVar1 + 0x1c8))(*(undefined4 *)(iVar1 + 0x1cc),local_c8,0);
    if (iVar4 == 2) {
      bVar3 = true;
    }
    else if (iVar4 != 0) {
      FUN_100dbf60();
      return 0x2a;
    }
  }
  if (local_90 == 2) {
    FUN_100ef010(local_80);
    iVar4 = FUN_100db6a0();
    if (iVar4 != 0) {
      FUN_100dbf60();
      if (iVar4 == 1) {
        return 7;
      }
      return iVar4;
    }
  }
  FUN_100ef040(local_c8,1);
  uVar7 = FUN_100d8500();
  *(undefined8 *)(unaff_EBX + 0xc4) = uVar7;
  if (1 < unaff_EBX[0xc6]) {
    FUN_100d66d0(iVar1,unaff_EBX[199],3);
  }
  if ((!bVar3) && (unaff_EBX[0x25] == 1)) {
    if ((unaff_EBX[0xbe] == 0) && (iVar4 = connect(local_c8,local_80,iStack_84), iVar4 != -1)) {
      *param_2 = local_c8;
      return 0;
    }
    iVar4 = WSAGetLastError();
    if ((iVar4 != 0xb) && ((iVar4 < 0x2733 || (0x2734 < iVar4)))) {
      uVar6 = FUN_100c8180();
      FUN_100d8ae0(iVar1,"Immediate connect fail for %s: %s\n",local_c0,uVar6);
      *(int *)(iVar1 + 0x48ac) = iVar4;
      FUN_100dbf60();
      return 7;
    }
    *param_2 = local_c8;
    return 0;
  }
  *param_2 = local_c8;
  return 0;
}


/* END FUNCTION 0x100dc120 */
