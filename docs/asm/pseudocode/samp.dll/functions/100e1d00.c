/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e1d00
 * Name: FUN_100e1d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 *
FUN_100e1d00(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *puVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  param_2 = param_2 + 0x1e;
  if ((*(int *)(param_1[param_2 * 4 + 3] + 0x10) == 0) &&
     (iVar1 = (**(code **)(DAT_102acadc + 0x2c))(), iVar1 != 0)) {
    *param_5 = 0x37;
    return (undefined4 *)0xffffffff;
  }
  if (*(undefined4 **)(param_1[param_2 * 4 + 3] + 0x10) < param_4) {
    param_4 = *(undefined4 **)(param_1[param_2 * 4 + 3] + 0x10);
  }
  iVar1 = (*(code *)PTR__malloc_101554b8)
                    (*(int *)(param_1[param_2 * 4 + 3] + 0xc) +
                     *(int *)(param_1[param_2 * 4 + 3] + 8) + (int)param_4);
  if (iVar1 == 0) {
    *param_5 = 0x1b;
    return (undefined4 *)0xffffffff;
  }
  uStack_30 = *(undefined4 *)(param_1[param_2 * 4 + 3] + 8);
  uStack_2c = 7;
  iStack_28 = iVar1;
  uStack_24 = FUN_100d9a10(param_4);
  iVar2 = param_1[param_2 * 4 + 3];
  puStack_1c = (undefined4 *)(*(int *)(iVar2 + 8) + iVar1);
  uStack_20 = 1;
  uStack_18 = *(undefined4 *)(iVar2 + 0xc);
  iStack_10 = *(int *)(iVar2 + 8) + iVar1 + (int)param_4;
  puStack_c = (undefined4 *)0x0;
  iStack_8 = 0;
  uStack_4 = 0;
  uStack_3c = 0;
  uStack_14 = 6;
  puStack_34 = &uStack_30;
  uStack_38 = 4;
  puVar4 = puStack_1c;
  for (uVar3 = (uint)param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = (uint)param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar2 = (**(code **)(DAT_102acadc + 100))
                    (*(undefined4 *)(param_1[param_2 * 4 + 3] + 4),0,&uStack_3c,0);
  if (iVar2 == 0) {
    unaff_EDI = (undefined4 *)0x0;
    param_4 = (undefined4 *)((int)puStack_34 + iVar1 + iStack_28);
    puVar4 = puStack_c;
    do {
      puStack_c = puVar4;
      if (param_4 == (undefined4 *)0x0) goto LAB_100e1f75;
      iVar2 = FUN_100db5d0(*puVar4,0,0);
      iVar1 = iStack_8;
      if (iVar2 < 0) {
        FUN_100d8ba0(*puVar4,"schannel: timed out sending data (bytes sent: %zd)",0);
        *param_1 = 0x1c;
        unaff_EDI = (undefined4 *)0xffffffff;
        goto LAB_100e1f75;
      }
      iVar2 = FUN_100cd750(0xffffffff,0xffffffff,puVar4[iStack_8 + 0x66],iVar2);
      if (iVar2 < 0) {
        iVar1 = WSAGetLastError();
        FUN_100d8ba0(*puVar4,"select/poll on SSL socket, errno: %d",iVar1);
        *param_1 = 0x37;
        unaff_EDI = (undefined4 *)0xffffffff;
        goto LAB_100e1f75;
      }
      if (iVar2 == 0) {
        FUN_100d8ba0(*puVar4,"schannel: timed out sending data (bytes sent: %zd)",0);
        *param_1 = 0x1c;
        unaff_EDI = (undefined4 *)0xffffffff;
        goto LAB_100e1f75;
      }
      iVar1 = FUN_100d9150(puVar4,puVar4[iVar1 + 0x66],unaff_ESI,param_4,&stack0xffffffac);
      puVar4 = puStack_c;
    } while ((iVar1 == 0x51) || (iVar1 == 0));
    *param_1 = iVar1;
    unaff_EDI = (undefined4 *)0xffffffff;
  }
  else {
    *param_1 = ((iVar2 != -0x7ff6fd00) - 1 & 0xffffffe4) + 0x37;
  }
LAB_100e1f75:
  (*(code *)PTR__free_101554bc)(unaff_ESI);
  if (param_4 == unaff_EDI) {
    unaff_EDI = puStack_34;
  }
  return unaff_EDI;
}


/* END FUNCTION 0x100e1d00 */
