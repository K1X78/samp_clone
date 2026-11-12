/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004802d0
 * Name: FUN_004802d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004802d0(int *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  undefined4 auStack_13c [69];
  uint *puStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  byte abStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004b16db;
  pvStack_10 = ExceptionList;
  iVar3 = *(int *)((int)DAT_004fc438 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = *(ushort *)(param_2 + 4);
  if (999 < uVar2) {
    return 0;
  }
  if (*(int *)(iVar3 + 0x24de4 + (uint)uVar2 * 4) == 0) {
    return 0;
  }
  if (999 < uVar2) {
    return 0;
  }
  iVar3 = *(int *)(iVar3 + 0x25d84 + (uint)uVar2 * 4);
  if (iVar3 == 0) {
    return 0;
  }
  cVar1 = *(char *)(iVar3 + 0x2f95);
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar1 == '\t') {
    return 0;
  }
  ExceptionList = &pvStack_10;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&puStack_28);
  FUN_004031d0(puStack_28,(int *)&uStack_20);
  if (0 < (int)uStack_20) {
    iVar3 = -(uStack_20 + 4 & 0xfffffffc);
    pbVar6 = &stack0xfffffeb8;
    if (&stack0x00000000 != (undefined1 *)0x148) {
      *(uint *)((int)auStack_13c + iVar3 + -0x10) = uStack_20 + 1;
      *(undefined4 *)((int)auStack_13c + iVar3 + -0x14) = 0;
      *(uint **)((int)auStack_13c + iVar3 + -0x18) = puStack_28;
      *(undefined1 **)((int)auStack_13c + iVar3 + -0x1c) = &stack0xfffffeb8;
      *(undefined4 *)((int)auStack_13c + iVar3 + -0x20) = 0x4803a1;
      FUN_00403350(*(int *)((int)auStack_13c + iVar3 + -0x1c),
                   *(uint **)((int)auStack_13c + iVar3 + -0x18),
                   *(int *)((int)auStack_13c + iVar3 + -0x14),
                   *(uint *)((int)auStack_13c + iVar3 + -0x10));
      goto LAB_004803ab;
    }
  }
  pbVar6 = &DAT_004fc400;
LAB_004803ab:
  uStack_24 = *(undefined4 *)(param_2 + 0x14);
  uStack_1c = *(undefined4 *)(param_2 + 0x10);
  uStack_18 = *(undefined4 *)(param_2 + 0xc);
  pbVar4 = pbVar6;
  do {
    bVar5 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar5 != 0);
  bVar5 = (byte)((int)pbVar4 - (int)(pbVar6 + 1));
  if (0x90 < bVar5) {
    ExceptionList = pvStack_10;
    return 0;
  }
  FUN_0044d8a0(auStack_13c);
  uStack_20 = (uint)*(ushort *)(param_2 + 4);
  uStack_8 = 0;
  FUN_0044df40(auStack_13c,(byte *)&uStack_20,0x10,'\x01');
  FUN_0044df40(auStack_13c,(byte *)&uStack_18,0x20,'\x01');
  FUN_0044df40(auStack_13c,(byte *)&uStack_1c,0x20,'\x01');
  FUN_0044df40(auStack_13c,(byte *)&uStack_24,0x20,'\x01');
  abStack_14[0] = bVar5;
  FUN_0044df40(auStack_13c,abStack_14,8,'\x01');
  FUN_0044dff0(auStack_13c,pbVar6,(int)pbVar4 - (int)(pbVar6 + 1) & 0xff);
  FUN_00493a40(DAT_004fc438,&DAT_004be990,auStack_13c,*(ushort *)(param_2 + 4));
  uStack_8 = 0xffffffff;
  FUN_0044d9b0((int)auStack_13c);
  ExceptionList = pvStack_10;
  return 1;
}


/* END FUNCTION 0x004802d0 */
