/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10007d50
 * Name: FUN_10007d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10007d50(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((*(byte *)(param_1 + 0x400) == 0x80) ||
     (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x400) * 4) == 0)) {
    return 0;
  }
  iVar4 = 4;
  bVar7 = true;
  pbVar6 = param_2;
  pbVar3 = &DAT_101179bc;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *pbVar6 == *pbVar3;
    pbVar6 = pbVar6 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar2 = FUN_100a72a0();
    return uVar2;
  }
  iVar4 = 4;
  bVar7 = true;
  pbVar6 = param_2;
  pbVar3 = &DAT_101179b8;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *pbVar6 == *pbVar3;
    pbVar6 = pbVar6 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar2 = FUN_100a72b0();
    return uVar2;
  }
  iVar4 = 4;
  bVar7 = true;
  pbVar6 = param_2;
  pbVar3 = &DAT_101179b4;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *pbVar6 == *pbVar3;
    pbVar6 = pbVar6 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar2 = FUN_100a72b0();
    return uVar2;
  }
  bVar5 = 0;
  do {
    pbVar6 = &DAT_1013c0cc + (uint)bVar5 * 0x40;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10007e24:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10007e29;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10007e24;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10007e29:
    if (iVar4 == 0) {
      uVar2 = FUN_100a7280(0,bVar5);
      return uVar2;
    }
    pbVar6 = &DAT_1013c0ec + (uint)bVar5 * 0x40;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10007e59:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10007e5e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10007e59;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10007e5e:
    if (iVar4 == 0) {
      uVar2 = FUN_100a7280(1,bVar5);
      return uVar2;
    }
    bVar5 = bVar5 + 1;
    if (0xb < bVar5) {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x10007d50 */
