/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004802d5
 * Name: FUN_004802d5
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004802d5(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte bVar9;
  int unaff_EBP;
  byte *pbVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b16db;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)((int)DAT_004fc438 + 8);
  if (iVar3 != 0) {
    iVar4 = *(int *)(unaff_EBP + 0x7c);
    uVar2 = *(ushort *)(iVar4 + 4);
    if ((((uVar2 < 1000) && (*(int *)(iVar3 + 0x24de4 + (uint)uVar2 * 4) != 0)) && (uVar2 < 1000))
       && (((iVar3 = *(int *)(iVar3 + 0x25d84 + (uint)uVar2 * 4), iVar3 != 0 &&
            (cVar1 = *(char *)(iVar3 + 0x2f95), cVar1 != '\0')) && (cVar1 != '\t')))) {
      ExceptionList = &pvStack_c;
      FUN_00403100(*(int **)(unaff_EBP + 0x78),*(int *)(iVar4 + 8),(int *)(unaff_EBP + 0x4c));
      FUN_004031d0(*(uint **)(unaff_EBP + 0x4c),(int *)(unaff_EBP + 0x54));
      iVar3 = *(int *)(unaff_EBP + 0x54);
      if (iVar3 < 1) {
LAB_004803a6:
        pbVar10 = &DAT_004fc400;
      }
      else {
        iVar6 = -(iVar3 + 4U & 0xfffffffc);
        pbVar10 = &stack0xfffffebc;
        if (&stack0x00000000 == (undefined1 *)0x144) goto LAB_004803a6;
        uVar8 = *(undefined4 *)(unaff_EBP + 0x4c);
        *(int *)(&stack0xfffffeb8 + iVar6) = iVar3 + 1;
        *(undefined4 *)(&stack0xfffffeb4 + iVar6) = 0;
        *(undefined4 *)(&stack0xfffffeb0 + iVar6) = uVar8;
        *(undefined1 **)(&stack0xfffffeac + iVar6) = &stack0xfffffebc;
        *(undefined4 *)(&stack0xfffffea8 + iVar6) = 0x4803a1;
        FUN_00403350(*(int *)(&stack0xfffffeac + iVar6),*(uint **)(&stack0xfffffeb0 + iVar6),
                     *(int *)(&stack0xfffffeb4 + iVar6),*(uint *)(&stack0xfffffeb8 + iVar6));
      }
      uVar8 = *(undefined4 *)(iVar4 + 0x10);
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(iVar4 + 0x14);
      *(undefined4 *)(unaff_EBP + 0x58) = uVar8;
      *(undefined4 *)(unaff_EBP + 0x5c) = uVar5;
      pbVar7 = pbVar10;
      do {
        bVar9 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar9 != 0);
      bVar9 = (byte)((int)pbVar7 - (int)(pbVar10 + 1));
      if (bVar9 < 0x91) {
        FUN_0044d8a0((undefined4 *)(unaff_EBP + -200));
        uVar2 = *(ushort *)(iVar4 + 4);
        *(undefined4 *)(unaff_EBP + 0x6c) = 0;
        *(uint *)(unaff_EBP + 0x54) = (uint)uVar2;
        FUN_0044df40((void *)(unaff_EBP + -200),(byte *)(unaff_EBP + 0x54),0x10,'\x01');
        *(undefined4 *)(unaff_EBP + 0x5c) = *(undefined4 *)(unaff_EBP + 0x5c);
        FUN_0044df40((void *)(unaff_EBP + -200),(byte *)(unaff_EBP + 0x5c),0x20,'\x01');
        *(undefined4 *)(unaff_EBP + 0x58) = *(undefined4 *)(unaff_EBP + 0x58);
        FUN_0044df40((void *)(unaff_EBP + -200),(byte *)(unaff_EBP + 0x58),0x20,'\x01');
        *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(unaff_EBP + 0x50);
        FUN_0044df40((void *)(unaff_EBP + -200),(byte *)(unaff_EBP + 0x50),0x20,'\x01');
        *(byte *)(unaff_EBP + 0x60) = bVar9;
        FUN_0044df40((void *)(unaff_EBP + -200),(byte *)(unaff_EBP + 0x60),8,'\x01');
        FUN_0044dff0((void *)(unaff_EBP + -200),pbVar10,(int)pbVar7 - (int)(pbVar10 + 1) & 0xff);
        FUN_00493a40(DAT_004fc438,&DAT_004be990,unaff_EBP + -200,*(ushort *)(iVar4 + 4));
        *(undefined4 *)(unaff_EBP + 0x6c) = 0xffffffff;
        FUN_0044d9b0(unaff_EBP + -200);
        uVar8 = 1;
        goto LAB_004804b0;
      }
    }
  }
  uVar8 = 0;
LAB_004804b0:
  ExceptionList = *(void **)(unaff_EBP + 100);
  return uVar8;
}


/* END FUNCTION 0x004802d5 */
