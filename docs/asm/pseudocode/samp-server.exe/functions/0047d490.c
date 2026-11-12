/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047d490
 * Name: FUN_0047d490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0047d490(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint auStack_14c [69];
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  byte *pbStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  char cStack_1d;
  uint *puStack_1c;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  byte abStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004b169b;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_0044d8a0(auStack_14c);
  iStack_38 = *(int *)((int)DAT_004fc438 + 8);
  uStack_8 = 0;
  if (iStack_38 == 0) goto LAB_0047d769;
  if ((999 < *(ushort *)(param_2 + 4)) ||
     (*(int *)(iStack_38 + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) == 0)) goto LAB_0047d769;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&puStack_24);
  FUN_004031d0(puStack_24,(int *)&puStack_30);
  if ((int)puStack_30 < 1) {
LAB_0047d54e:
    pbStack_2c = (byte *)0x0;
  }
  else {
    iVar2 = -((uint)(puStack_30 + 1) & 0xfffffffc);
    pbStack_2c = &stack0xfffffea8;
    if (&stack0x00000000 == (undefined1 *)0x158) goto LAB_0047d54e;
    *(int *)((int)auStack_14c + iVar2 + -0x10) = (int)puStack_30 + 1;
    *(undefined4 *)((int)auStack_14c + iVar2 + -0x14) = 0;
    *(uint **)((int)auStack_14c + iVar2 + -0x18) = puStack_24;
    *(undefined1 **)((int)auStack_14c + iVar2 + -0x1c) = &stack0xfffffea8;
    *(undefined4 *)((int)auStack_14c + iVar2 + -0x20) = 0x47d549;
    FUN_00403350(*(int *)((int)auStack_14c + iVar2 + -0x1c),
                 *(uint **)((int)auStack_14c + iVar2 + -0x18),
                 *(int *)((int)auStack_14c + iVar2 + -0x14),
                 *(uint *)((int)auStack_14c + iVar2 + -0x10));
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&puStack_28);
  FUN_004031d0(puStack_28,(int *)&puStack_1c);
  if ((int)puStack_1c < 1) {
LAB_0047d5a2:
    pbVar4 = (byte *)0x0;
  }
  else {
    pbVar4 = &stack0xfffffea8;
    if (&stack0x00000000 == (undefined1 *)0x158) goto LAB_0047d5a2;
    FUN_00403350((int)&stack0xfffffea8,puStack_28,0,(int)puStack_1c + 1);
  }
  pbVar3 = pbStack_2c;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  puStack_24 = (uint *)(pbVar3 + -(int)(pbStack_2c + 1));
  pbVar3 = pbVar4;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  puStack_30 = *(uint **)(param_2 + 0x10);
  cStack_1d = *(int *)(param_2 + 0x14) != 0;
  cStack_15 = *(int *)(param_2 + 0x18) != 0;
  puStack_28 = *(uint **)(param_2 + 0x24);
  cStack_16 = *(int *)(param_2 + 0x1c) != 0;
  cStack_17 = *(int *)(param_2 + 0x20) != 0;
  iStack_34 = *(int *)(param_2 + 0x28);
  puStack_1c = (uint *)(uint)*(ushort *)(param_2 + 4);
  FUN_0044df40(auStack_14c,(byte *)&puStack_1c,0x10,'\x01');
  abStack_14[0] = (byte)puStack_24;
  FUN_0044df40(auStack_14c,abStack_14,8,'\x01');
  FUN_0044dff0(auStack_14c,pbStack_2c,(uint)puStack_24 & 0xff);
  abStack_14[0] = (byte)((int)pbVar3 - (int)(pbVar4 + 1));
  FUN_0044df40(auStack_14c,abStack_14,8,'\x01');
  FUN_0044dff0(auStack_14c,pbVar4,(int)pbVar3 - (int)(pbVar4 + 1) & 0xff);
  puStack_1c = puStack_30;
  FUN_0044df40(auStack_14c,(byte *)&puStack_1c,0x20,'\x01');
  if (cStack_1d == '\0') {
    FUN_0044de70(auStack_14c);
  }
  else {
    FUN_0044de90(auStack_14c);
  }
  if (cStack_15 == '\0') {
    FUN_0044de70(auStack_14c);
  }
  else {
    FUN_0044de90(auStack_14c);
  }
  if (cStack_16 == '\0') {
    FUN_0044de70(auStack_14c);
  }
  else {
    FUN_0044de90(auStack_14c);
  }
  if (cStack_17 == '\0') {
    FUN_0044de70(auStack_14c);
  }
  else {
    FUN_0044de90(auStack_14c);
  }
  puStack_1c = puStack_28;
  FUN_0044df40(auStack_14c,(byte *)&puStack_1c,0x20,'\x01');
  iVar2 = iStack_34;
  if ((iStack_34 != 0) || (*(int *)(iStack_38 + 0x2de6c + (uint)*(ushort *)(param_2 + 4) * 4) != 0))
  {
    FUN_00493a40(DAT_004fc438,&DAT_004be940,auStack_14c,*(ushort *)(param_2 + 4));
    if ((iVar2 != 0) && (iVar2 != 1)) goto LAB_0047d769;
  }
  FUN_00493c10(DAT_004fc438,&DAT_004be940,auStack_14c,*(ushort *)(param_2 + 4),2);
LAB_0047d769:
  uStack_8 = 0xffffffff;
  FUN_0044d9b0((int)auStack_14c);
  ExceptionList = pvStack_10;
  return 1;
}


/* END FUNCTION 0x0047d490 */
