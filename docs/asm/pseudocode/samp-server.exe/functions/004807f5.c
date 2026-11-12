/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004807f5
 * Name: FUN_004807f5
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004807f5(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int unaff_EBP;
  byte *pbVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b16fb;
  pvStack_c = ExceptionList;
  if ((DAT_004fc438 != (void *)0x0) && (*(int *)((int)DAT_004fc438 + 8) != 0)) {
    iVar3 = *(int *)(unaff_EBP + 0x7c);
    if ((*(ushort *)(iVar3 + 4) < 1000) &&
       (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(iVar3 + 4) * 4) != 0)
       ) {
      ExceptionList = &pvStack_c;
      FUN_0044d8a0((undefined4 *)(unaff_EBP + -0xcc));
      iVar4 = *(int *)(iVar3 + 8);
      *(undefined4 *)(unaff_EBP + 0x6c) = 0;
      FUN_00403100(*(int **)(unaff_EBP + 0x78),iVar4,(int *)(unaff_EBP + 0x54));
      FUN_004031d0(*(uint **)(unaff_EBP + 0x54),(int *)(unaff_EBP + 0x5c));
      iVar4 = *(int *)(unaff_EBP + 0x5c);
      if (iVar4 < 1) {
LAB_004808b1:
        pbVar9 = &DAT_004fc400;
      }
      else {
        iVar6 = -(iVar4 + 4U & 0xfffffffc);
        pbVar9 = &stack0xfffffeb8;
        if (&stack0x00000000 == (undefined1 *)0x148) goto LAB_004808b1;
        uVar8 = *(undefined4 *)(unaff_EBP + 0x54);
        *(int *)(&stack0xfffffeb4 + iVar6) = iVar4 + 1;
        *(undefined4 *)(&stack0xfffffeb0 + iVar6) = 0;
        *(undefined4 *)(&stack0xfffffeac + iVar6) = uVar8;
        *(undefined1 **)(&stack0xfffffea8 + iVar6) = &stack0xfffffeb8;
        *(undefined4 *)(&stack0xfffffea4 + iVar6) = 0x4808ac;
        FUN_00403350(*(int *)(&stack0xfffffea8 + iVar6),*(uint **)(&stack0xfffffeac + iVar6),
                     *(int *)(&stack0xfffffeb0 + iVar6),*(uint *)(&stack0xfffffeb4 + iVar6));
      }
      pbVar7 = pbVar9;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      uVar5 = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(unaff_EBP + 0x48) = uVar8;
      uVar8 = *(undefined4 *)(iVar3 + 0x18);
      *(undefined4 *)(unaff_EBP + 0x4c) = uVar5;
      uVar2 = *(undefined1 *)(iVar3 + 0x1c);
      *(undefined4 *)(unaff_EBP + 0x54) = uVar8;
      *(undefined1 *)(unaff_EBP + 0x60) = uVar2;
      *(char *)(unaff_EBP + 0x58) = (char)((int)pbVar7 - (int)(pbVar9 + 1));
      FUN_0044df40((void *)(unaff_EBP + -0xcc),(byte *)(unaff_EBP + 0x58),8,'\x01');
      FUN_0044dff0((void *)(unaff_EBP + -0xcc),pbVar9,(int)pbVar7 - (int)(pbVar9 + 1) & 0xff);
      *(undefined4 *)(unaff_EBP + 0x5c) = *(undefined4 *)(unaff_EBP + 0x48);
      FUN_0044df40((void *)(unaff_EBP + -0xcc),(byte *)(unaff_EBP + 0x5c),0x20,'\x01');
      *(undefined4 *)(unaff_EBP + 0x5c) = *(undefined4 *)(unaff_EBP + 0x4c);
      FUN_0044df40((void *)(unaff_EBP + -0xcc),(byte *)(unaff_EBP + 0x5c),0x20,'\x01');
      *(undefined4 *)(unaff_EBP + 0x5c) = *(undefined4 *)(unaff_EBP + 0x50);
      FUN_0044df40((void *)(unaff_EBP + -0xcc),(byte *)(unaff_EBP + 0x5c),0x20,'\x01');
      *(undefined4 *)(unaff_EBP + 0x5c) = *(undefined4 *)(unaff_EBP + 0x54);
      FUN_0044df40((void *)(unaff_EBP + -0xcc),(byte *)(unaff_EBP + 0x5c),0x20,'\x01');
      *(undefined1 *)(unaff_EBP + 0x60) = *(undefined1 *)(unaff_EBP + 0x60);
      FUN_0044df40((void *)(unaff_EBP + -0xcc),(byte *)(unaff_EBP + 0x60),8,'\x01');
      FUN_00493c10(DAT_004fc438,&DAT_004b704c,unaff_EBP + -0xcc,*(ushort *)(iVar3 + 4),2);
      *(undefined4 *)(unaff_EBP + 0x6c) = 0xffffffff;
      FUN_0044d9b0(unaff_EBP + -0xcc);
      uVar8 = 1;
      goto LAB_004809c7;
    }
  }
  uVar8 = 0;
LAB_004809c7:
  ExceptionList = *(void **)(unaff_EBP + 100);
  return uVar8;
}


/* END FUNCTION 0x004807f5 */
