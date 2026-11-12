/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004809f5
 * Name: FUN_004809f5
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004809f5(void)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  void *this;
  undefined4 uVar11;
  int unaff_EBP;
  byte *pbVar12;
  ushort uVar13;
  void *pvVar14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b169b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044d8a0((undefined4 *)(unaff_EBP + -0xd8));
  iVar4 = *(int *)((int)DAT_004fc438 + 8);
  *(undefined4 *)(unaff_EBP + 0x6c) = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(unaff_EBP + 0x7c);
    uVar13 = *(ushort *)(iVar5 + 4);
    *(uint *)(unaff_EBP + 0x3c) = (uint)uVar13;
    if ((uVar13 < 1000) && (*(int *)(iVar4 + 0x24de4 + (uint)uVar13 * 4) != 0)) {
      uVar1 = *(undefined1 *)(iVar5 + 0xc);
      *(undefined2 *)(unaff_EBP + 0x44) = *(undefined2 *)(iVar5 + 8);
      iVar4 = *(int *)(iVar5 + 0x10);
      *(undefined1 *)(unaff_EBP + 0x60) = uVar1;
      FUN_00403100(*(int **)(unaff_EBP + 0x78),iVar4,(int *)(unaff_EBP + 0x54));
      FUN_004031d0(*(uint **)(unaff_EBP + 0x54),(int *)(unaff_EBP + 0x58));
      iVar4 = *(int *)(unaff_EBP + 0x58);
      if (iVar4 < 1) {
LAB_00480abe:
        *(undefined1 **)(unaff_EBP + 0x50) = &DAT_004fc400;
        pcVar8 = *(char **)(unaff_EBP + 0x50);
      }
      else {
        iVar7 = -(iVar4 + 4U & 0xfffffffc);
        pcVar8 = &stack0xfffffeac;
        *(undefined1 **)(unaff_EBP + 0x50) = &stack0xfffffeac;
        if (&stack0x00000000 == (undefined1 *)0x154) goto LAB_00480abe;
        uVar11 = *(undefined4 *)(unaff_EBP + 0x54);
        *(int *)(&stack0xfffffea8 + iVar7) = iVar4 + 1;
        *(undefined4 *)(&stack0xfffffea4 + iVar7) = 0;
        *(undefined4 *)(&stack0xfffffea0 + iVar7) = uVar11;
        *(undefined1 **)(&stack0xfffffe9c + iVar7) = &stack0xfffffeac;
        *(undefined4 *)(&stack0xfffffe98 + iVar7) = 0x480ab9;
        FUN_00403350(*(int *)(&stack0xfffffe9c + iVar7),*(uint **)(&stack0xfffffea0 + iVar7),
                     *(int *)(&stack0xfffffea4 + iVar7),*(uint *)(&stack0xfffffea8 + iVar7));
      }
      pcVar10 = pcVar8 + 1;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      *(int *)(unaff_EBP + 0x40) = (int)pcVar8 - (int)pcVar10;
      FUN_00403100(*(int **)(unaff_EBP + 0x78),*(int *)(iVar5 + 0x18),(int *)(unaff_EBP + 0x5c));
      FUN_004031d0(*(uint **)(unaff_EBP + 0x5c),(int *)(unaff_EBP + 0x58));
      if (*(int *)(unaff_EBP + 0x58) < 1) {
LAB_00480b2f:
        *(undefined1 **)(unaff_EBP + 0x54) = &DAT_004fc400;
        pcVar8 = *(char **)(unaff_EBP + 0x54);
      }
      else {
        pcVar8 = &stack0xfffffeac;
        *(undefined1 **)(unaff_EBP + 0x54) = &stack0xfffffeac;
        if (&stack0x00000000 == (undefined1 *)0x154) goto LAB_00480b2f;
        FUN_00403350((int)&stack0xfffffeac,*(uint **)(unaff_EBP + 0x5c),0,
                     *(int *)(unaff_EBP + 0x58) + 1);
      }
      pcVar10 = pcVar8 + 1;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      *(int *)(unaff_EBP + 0x58) = (int)pcVar8 - (int)pcVar10;
      FUN_00403100(*(int **)(unaff_EBP + 0x78),*(int *)(iVar5 + 0x1c),(int *)(unaff_EBP + 0x5c));
      FUN_004031d0(*(uint **)(unaff_EBP + 0x5c),(int *)(unaff_EBP + 0x48));
      if (*(int *)(unaff_EBP + 0x48) < 1) {
LAB_00480b9a:
        pbVar12 = &DAT_004fc400;
      }
      else {
        pbVar12 = &stack0xfffffeac;
        if (&stack0x00000000 == (undefined1 *)0x154) goto LAB_00480b9a;
        FUN_00403350((int)&stack0xfffffeac,*(uint **)(unaff_EBP + 0x5c),0,
                     *(int *)(unaff_EBP + 0x48) + 1);
      }
      pbVar9 = pbVar12;
      do {
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
      FUN_00403100(*(int **)(unaff_EBP + 0x78),*(int *)(iVar5 + 0x14),(int *)(unaff_EBP + 0x5c));
      FUN_004031d0(*(uint **)(unaff_EBP + 0x5c),(int *)(unaff_EBP + 0x48));
      if (*(int *)(unaff_EBP + 0x48) < 1) {
LAB_00480c01:
        pcVar8 = &DAT_004fc400;
      }
      else {
        *(int *)(unaff_EBP + 0x4c) = *(int *)(unaff_EBP + 0x48) + 1;
        pcVar8 = &stack0xfffffeac;
        if (&stack0x00000000 == (undefined1 *)0x154) goto LAB_00480c01;
        FUN_00403350((int)&stack0xfffffeac,*(uint **)(unaff_EBP + 0x5c),0,
                     *(uint *)(unaff_EBP + 0x4c));
      }
      *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(unaff_EBP + 0x44);
      FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x4c),0x10,'\x01');
      *(undefined1 *)(unaff_EBP + 0x60) = *(undefined1 *)(unaff_EBP + 0x60);
      FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x60),8,'\x01');
      *(undefined1 *)(unaff_EBP + 0x60) = *(undefined1 *)(unaff_EBP + 0x40);
      FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x60),8,'\x01');
      FUN_0044dff0((void *)(unaff_EBP + -0xd8),*(byte **)(unaff_EBP + 0x50),
                   (uint)*(byte *)(unaff_EBP + 0x40));
      *(undefined1 *)(unaff_EBP + 0x60) = *(undefined1 *)(unaff_EBP + 0x58);
      FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x60),8,'\x01');
      FUN_0044dff0((void *)(unaff_EBP + -0xd8),*(byte **)(unaff_EBP + 0x54),
                   (uint)*(byte *)(unaff_EBP + 0x58));
      *(char *)(unaff_EBP + 0x60) = (char)((int)pbVar9 - (int)(pbVar12 + 1));
      FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x60),8,'\x01');
      FUN_0044dff0((void *)(unaff_EBP + -0xd8),pbVar12,(int)pbVar9 - (int)(pbVar12 + 1) & 0xff);
      pcVar10 = pcVar8;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      pvVar14 = (void *)(unaff_EBP + -0xd8);
      pcVar10 = pcVar10 + (1 - (int)(pcVar8 + 1));
      this = (void *)FUN_00462dd0();
      FUN_00463220(this,pcVar8,(int)pcVar10,pvVar14);
      uVar6 = *(uint *)(unaff_EBP + 0x3c);
      uVar13 = (ushort)uVar6;
      FUN_00493c10(DAT_004fc438,&DAT_004be998,unaff_EBP + -0xd8,uVar13,2);
      if ((uVar13 < 1000) &&
         (iVar4 = *(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 + (uVar6 & 0xffff) * 4),
         iVar4 != 0)) {
        *(undefined2 *)(iVar4 + 0x2d45) = *(undefined2 *)(unaff_EBP + 0x44);
      }
      *(undefined4 *)(unaff_EBP + 0x6c) = 0xffffffff;
      FUN_0044d9b0(unaff_EBP + -0xd8);
      uVar11 = 1;
      goto LAB_00480d54;
    }
  }
  *(undefined4 *)(unaff_EBP + 0x6c) = 0xffffffff;
  FUN_0044d9b0(unaff_EBP + -0xd8);
  uVar11 = 0;
LAB_00480d54:
  ExceptionList = *(void **)(unaff_EBP + 100);
  return uVar11;
}


/* END FUNCTION 0x004809f5 */
