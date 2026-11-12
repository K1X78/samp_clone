/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004807f0
 * Name: FUN_004807f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004807f0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 auStack_140 [69];
  uint *puStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  uint *puStack_20;
  byte abStack_1c [4];
  uint *puStack_18;
  byte abStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004b16fb;
  pvStack_10 = ExceptionList;
  if ((((DAT_004fc438 == (void *)0x0) || (*(int *)((int)DAT_004fc438 + 8) == 0)) ||
      (999 < *(ushort *)(param_2 + 4))) ||
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) == 0)
     ) {
    return 0;
  }
  ExceptionList = &pvStack_10;
  FUN_0044d8a0(auStack_140);
  uStack_8 = 0;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&puStack_20);
  FUN_004031d0(puStack_20,(int *)&puStack_18);
  if (0 < (int)puStack_18) {
    iVar2 = -((uint)(puStack_18 + 1) & 0xfffffffc);
    pbVar4 = &stack0xfffffeb4;
    if (&stack0x00000000 != (undefined1 *)0x14c) {
      *(int *)((int)auStack_140 + iVar2 + -0x10) = (int)puStack_18 + 1;
      *(undefined4 *)((int)auStack_140 + iVar2 + -0x14) = 0;
      *(uint **)((int)auStack_140 + iVar2 + -0x18) = puStack_20;
      *(undefined1 **)((int)auStack_140 + iVar2 + -0x1c) = &stack0xfffffeb4;
      *(undefined4 *)((int)auStack_140 + iVar2 + -0x20) = 0x4808ac;
      FUN_00403350(*(int *)((int)auStack_140 + iVar2 + -0x1c),
                   *(uint **)((int)auStack_140 + iVar2 + -0x18),
                   *(int *)((int)auStack_140 + iVar2 + -0x14),
                   *(uint *)((int)auStack_140 + iVar2 + -0x10));
      goto LAB_004808b6;
    }
  }
  pbVar4 = &DAT_004fc400;
LAB_004808b6:
  pbVar3 = pbVar4;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  puStack_24 = *(uint **)(param_2 + 0x14);
  puStack_2c = *(uint **)(param_2 + 0xc);
  puStack_28 = *(uint **)(param_2 + 0x10);
  puStack_20 = *(uint **)(param_2 + 0x18);
  abStack_14[0] = *(byte *)(param_2 + 0x1c);
  abStack_1c[0] = (byte)((int)pbVar3 - (int)(pbVar4 + 1));
  FUN_0044df40(auStack_140,abStack_1c,8,'\x01');
  FUN_0044dff0(auStack_140,pbVar4,(int)pbVar3 - (int)(pbVar4 + 1) & 0xff);
  puStack_18 = puStack_2c;
  FUN_0044df40(auStack_140,(byte *)&puStack_18,0x20,'\x01');
  puStack_18 = puStack_28;
  FUN_0044df40(auStack_140,(byte *)&puStack_18,0x20,'\x01');
  puStack_18 = puStack_24;
  FUN_0044df40(auStack_140,(byte *)&puStack_18,0x20,'\x01');
  puStack_18 = puStack_20;
  FUN_0044df40(auStack_140,(byte *)&puStack_18,0x20,'\x01');
  FUN_0044df40(auStack_140,abStack_14,8,'\x01');
  FUN_00493c10(DAT_004fc438,&DAT_004b704c,auStack_140,*(ushort *)(param_2 + 4),2);
  uStack_8 = 0xffffffff;
  FUN_0044d9b0((int)auStack_140);
  ExceptionList = pvStack_10;
  return 1;
}


/* END FUNCTION 0x004807f0 */
