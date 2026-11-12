/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004809f0
 * Name: FUN_004809f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004809f0(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  void *this;
  byte *pbVar8;
  ushort uVar9;
  undefined4 *puVar10;
  undefined4 auStack_14c [69];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  byte *pbStack_24;
  uint *puStack_20;
  uint uStack_1c;
  uint *puStack_18;
  byte abStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004b169b;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_0044d8a0(auStack_14c);
  uStack_8 = 0;
  if (*(int *)((int)DAT_004fc438 + 8) == 0) {
LAB_00480d40:
    uStack_8 = 0xffffffff;
    FUN_0044d9b0((int)auStack_14c);
    ExceptionList = pvStack_10;
    return 0;
  }
  uVar9 = *(ushort *)(param_2 + 4);
  uStack_38 = (uint)uVar9;
  if ((999 < uVar9) || (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)uVar9 * 4) == 0))
  goto LAB_00480d40;
  abStack_14[0] = *(byte *)(param_2 + 0xc);
  uStack_30 = CONCAT22(uStack_30._2_2_,*(undefined2 *)(param_2 + 8));
  FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&puStack_20);
  FUN_004031d0(puStack_20,(int *)&uStack_1c);
  if ((int)uStack_1c < 1) {
LAB_00480abe:
    pbStack_24 = &DAT_004fc400;
    pcVar5 = &DAT_004fc400;
  }
  else {
    iVar3 = -(uStack_1c + 4 & 0xfffffffc);
    pcVar5 = &stack0xfffffea8;
    pbStack_24 = &stack0xfffffea8;
    if (&stack0x00000000 == (undefined1 *)0x158) goto LAB_00480abe;
    *(uint *)((int)auStack_14c + iVar3 + -0x10) = uStack_1c + 1;
    *(undefined4 *)((int)auStack_14c + iVar3 + -0x14) = 0;
    *(uint **)((int)auStack_14c + iVar3 + -0x18) = puStack_20;
    *(undefined1 **)((int)auStack_14c + iVar3 + -0x1c) = &stack0xfffffea8;
    *(undefined4 *)((int)auStack_14c + iVar3 + -0x20) = 0x480ab9;
    FUN_00403350(*(int *)((int)auStack_14c + iVar3 + -0x1c),
                 *(uint **)((int)auStack_14c + iVar3 + -0x18),
                 *(int *)((int)auStack_14c + iVar3 + -0x14),
                 *(uint *)((int)auStack_14c + iVar3 + -0x10));
  }
  pcVar7 = pcVar5 + 1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uStack_34 = (int)pcVar5 - (int)pcVar7;
  FUN_00403100(param_1,*(int *)(param_2 + 0x18),(int *)&puStack_18);
  FUN_004031d0(puStack_18,(int *)&uStack_1c);
  if ((int)uStack_1c < 1) {
LAB_00480b2f:
    puStack_20 = (uint *)&DAT_004fc400;
    pcVar5 = &DAT_004fc400;
  }
  else {
    puStack_20 = (uint *)&stack0xfffffea8;
    pcVar5 = &stack0xfffffea8;
    if (&stack0x00000000 == (undefined1 *)0x158) goto LAB_00480b2f;
    FUN_00403350((int)&stack0xfffffea8,puStack_18,0,uStack_1c + 1);
  }
  pcVar7 = pcVar5 + 1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uStack_1c = (int)pcVar5 - (int)pcVar7;
  FUN_00403100(param_1,*(int *)(param_2 + 0x1c),(int *)&puStack_18);
  FUN_004031d0(puStack_18,&iStack_2c);
  if (iStack_2c < 1) {
LAB_00480b9a:
    pbVar8 = &DAT_004fc400;
  }
  else {
    pbVar8 = &stack0xfffffea8;
    if (&stack0x00000000 == (undefined1 *)0x158) goto LAB_00480b9a;
    FUN_00403350((int)&stack0xfffffea8,puStack_18,0,iStack_2c + 1);
  }
  pbVar6 = pbVar8;
  do {
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar2 != 0);
  FUN_00403100(param_1,*(int *)(param_2 + 0x14),(int *)&puStack_18);
  FUN_004031d0(puStack_18,&iStack_2c);
  if (0 < iStack_2c) {
    uStack_28 = iStack_2c + 1;
    pcVar5 = &stack0xfffffea8;
    if (&stack0x00000000 != (undefined1 *)0x158) {
      FUN_00403350((int)&stack0xfffffea8,puStack_18,0,uStack_28);
      goto LAB_00480c06;
    }
  }
  pcVar5 = &DAT_004fc400;
LAB_00480c06:
  uStack_28 = uStack_30;
  FUN_0044df40(auStack_14c,(byte *)&uStack_28,0x10,'\x01');
  FUN_0044df40(auStack_14c,abStack_14,8,'\x01');
  abStack_14[0] = (byte)uStack_34;
  FUN_0044df40(auStack_14c,abStack_14,8,'\x01');
  FUN_0044dff0(auStack_14c,pbStack_24,uStack_34 & 0xff);
  abStack_14[0] = (byte)uStack_1c;
  FUN_0044df40(auStack_14c,abStack_14,8,'\x01');
  FUN_0044dff0(auStack_14c,(byte *)puStack_20,uStack_1c & 0xff);
  abStack_14[0] = (byte)((int)pbVar6 - (int)(pbVar8 + 1));
  FUN_0044df40(auStack_14c,abStack_14,8,'\x01');
  FUN_0044dff0(auStack_14c,pbVar8,(int)pbVar6 - (int)(pbVar8 + 1) & 0xff);
  pcVar7 = pcVar5;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  puVar10 = auStack_14c;
  pcVar7 = pcVar7 + (1 - (int)(pcVar5 + 1));
  this = (void *)FUN_00462dd0();
  FUN_00463220(this,pcVar5,(int)pcVar7,puVar10);
  uVar4 = uStack_38;
  uVar9 = (ushort)uStack_38;
  FUN_00493c10(DAT_004fc438,&DAT_004be998,auStack_14c,uVar9,2);
  if ((uVar9 < 1000) &&
     (iVar3 = *(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 + (uVar4 & 0xffff) * 4), iVar3 != 0
     )) {
    *(undefined2 *)(iVar3 + 0x2d45) = (undefined2)uStack_30;
  }
  uStack_8 = 0xffffffff;
  FUN_0044d9b0((int)auStack_14c);
  ExceptionList = pvStack_10;
  return 1;
}


/* END FUNCTION 0x004809f0 */
