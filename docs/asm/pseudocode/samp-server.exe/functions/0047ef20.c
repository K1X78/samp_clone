/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047ef20
 * Name: FUN_0047ef20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0047ef20(int *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 auStack_14c [69];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  uint uStack_24;
  uint uStack_20;
  byte *pbStack_1c;
  byte *pbStack_18;
  undefined1 uStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar6 = param_2;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004b169b;
  pvStack_10 = ExceptionList;
  if (999 < *(ushort *)(param_2 + 4)) {
    return 0;
  }
  if (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) == 0)
  {
    return 0;
  }
  if (*(int *)((int)DAT_004fc438 + 0x14) == 0) {
    return 0;
  }
  uStack_11 = *(undefined1 *)(param_2 + 0xc);
  uStack_24 = CONCAT22(uStack_24._2_2_,*(undefined2 *)(param_2 + 8));
  piVar1 = (int *)(param_2 + 0x14);
  iStack_34 = CONCAT22(iStack_34._2_2_,*(undefined2 *)(param_2 + 0x10));
  ExceptionList = &pvStack_10;
  param_2 = *(int *)((int)DAT_004fc438 + 0x14);
  FUN_00403100(param_1,*piVar1,(int *)&puStack_2c);
  FUN_004031d0(puStack_2c,&iStack_38);
  if (iStack_38 < 1) {
LAB_0047efe6:
    pbStack_18 = &DAT_004fc400;
  }
  else {
    iVar4 = -(iStack_38 + 4U & 0xfffffffc);
    pbStack_18 = &stack0xfffffea8;
    if (&stack0x00000000 == (undefined1 *)0x158) goto LAB_0047efe6;
    *(int *)((int)auStack_14c + iVar4 + -0x10) = iStack_38 + 1;
    *(undefined4 *)((int)auStack_14c + iVar4 + -0x14) = 0;
    *(uint **)((int)auStack_14c + iVar4 + -0x18) = puStack_2c;
    *(undefined1 **)((int)auStack_14c + iVar4 + -0x1c) = &stack0xfffffea8;
    *(undefined4 *)((int)auStack_14c + iVar4 + -0x20) = 0x47efe1;
    FUN_00403350(*(int *)((int)auStack_14c + iVar4 + -0x1c),
                 *(uint **)((int)auStack_14c + iVar4 + -0x18),
                 *(int *)((int)auStack_14c + iVar4 + -0x14),
                 *(uint *)((int)auStack_14c + iVar4 + -0x10));
  }
  FUN_00403100(param_1,*(int *)(iVar6 + 0x18),(int *)&puStack_28);
  FUN_004031d0(puStack_28,&iStack_30);
  if (0 < iStack_30) {
    pbStack_1c = &stack0xfffffea8;
    pcVar9 = &stack0xfffffea8;
    if (&stack0x00000000 != (undefined1 *)0x158) {
      FUN_00403350((int)&stack0xfffffea8,puStack_28,0,iStack_30 + 1);
      goto LAB_0047f047;
    }
  }
  pbStack_1c = &DAT_004fc400;
  pcVar9 = &DAT_004fc400;
LAB_0047f047:
  if (((ushort)uStack_24 < 2000) && (*(ushort *)(iVar6 + 4) < 1000)) {
    param_2 = *(int *)(param_2 +
                      ((*(ushort *)(iVar6 + 4) + 0x3e9) * 2000 + (uStack_24 & 0xffff)) * 4);
  }
  else {
    param_2 = 0;
  }
  if (pbStack_18 != (byte *)0x0) {
    pbVar7 = pbStack_18;
    do {
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
    uStack_20 = (int)pbVar7 - (int)(pbStack_18 + 1);
    if ((int)pbVar7 - (int)(pbStack_18 + 1) != 0) {
      pbVar7 = pbStack_18;
      do {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
      if (((uint)((int)pbVar7 - (int)(pbStack_18 + 1)) < 0x21) && (pcVar9 != (char *)0x0)) {
        pcVar8 = pcVar9;
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        uStack_20 = (int)pcVar8 - (int)(pcVar9 + 1);
        if ((int)pcVar8 - (int)(pcVar9 + 1) != 0) {
          pcVar8 = pcVar9 + 1;
          do {
            cVar3 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar3 != '\0');
          if ((uint)((int)pcVar9 - (int)pcVar8) < 0x21) {
            uStack_20 = *(uint *)(iVar6 + 0x1c);
            uVar5 = uStack_20 >> 0x10;
            uVar12 = uStack_20 & 0xff;
            uVar10 = uStack_20 & 0xff00ff00;
            if (param_2 != 0) {
              FUN_0044d8a0(auStack_14c);
              uStack_8 = 0;
              param_2 = uStack_24;
              FUN_0044df40(auStack_14c,(byte *)&param_2,0x10,'\x01');
              param_2 = CONCAT13(1,(undefined3)param_2);
              FUN_0044df40(auStack_14c,(byte *)((int)&param_2 + 3),8,'\x01');
              param_2 = CONCAT13(uStack_11,(undefined3)param_2);
              FUN_0044df40(auStack_14c,(byte *)((int)&param_2 + 3),8,'\x01');
              param_2 = iStack_34;
              FUN_0044df40(auStack_14c,(byte *)&param_2,0x10,'\x01');
              pbVar7 = pbStack_18 + 1;
              pbVar11 = pbStack_18;
              do {
                bVar2 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar2 != 0);
              param_2 = CONCAT13((char)((int)pbVar11 - (int)pbVar7),(undefined3)param_2);
              FUN_0044df40(auStack_14c,(byte *)((int)&param_2 + 3),8,'\x01');
              FUN_0044dff0(auStack_14c,pbStack_18,(int)pbVar11 - (int)pbVar7 & 0xff);
              pbVar7 = pbStack_1c + 1;
              pbVar11 = pbStack_1c;
              do {
                bVar2 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar2 != 0);
              param_2 = CONCAT13((char)((int)pbVar11 - (int)pbVar7),(undefined3)param_2);
              FUN_0044df40(auStack_14c,(byte *)((int)&param_2 + 3),8,'\x01');
              FUN_0044dff0(auStack_14c,pbStack_1c,(int)pbVar11 - (int)pbVar7 & 0xff);
              param_2 = uVar5 & 0xff | uVar12 << 0x10 | uVar10;
              FUN_0044df40(auStack_14c,(byte *)&param_2,0x20,'\x01');
              FUN_00493c10(DAT_004fc438,&DAT_004be96c,auStack_14c,*(ushort *)(iVar6 + 4),2);
              uStack_8 = 0xffffffff;
              FUN_0044d9b0((int)auStack_14c);
              ExceptionList = pvStack_10;
              return 1;
            }
          }
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


/* END FUNCTION 0x0047ef20 */
