/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047d495
 * Name: FUN_0047d495
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0047d495(void)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  int unaff_EBP;
  byte *pbVar14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b169b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044d8a0((undefined4 *)(unaff_EBP + -0xd8));
  iVar5 = *(int *)((int)DAT_004fc438 + 8);
  *(undefined4 *)(unaff_EBP + 0x6c) = 0;
  *(int *)(unaff_EBP + 0x3c) = iVar5;
  if (iVar5 == 0) goto LAB_0047d769;
  iVar6 = *(int *)(unaff_EBP + 0x7c);
  if ((999 < *(ushort *)(iVar6 + 4)) ||
     (*(int *)(iVar5 + 0x24de4 + (uint)*(ushort *)(iVar6 + 4) * 4) == 0)) goto LAB_0047d769;
  piVar7 = *(int **)(unaff_EBP + 0x78);
  FUN_00403100(piVar7,*(int *)(iVar6 + 8),(int *)(unaff_EBP + 0x50));
  FUN_004031d0(*(uint **)(unaff_EBP + 0x50),(int *)(unaff_EBP + 0x44));
  iVar5 = *(int *)(unaff_EBP + 0x44);
  if (iVar5 < 1) {
LAB_0047d54e:
    *(undefined4 *)(unaff_EBP + 0x48) = 0;
  }
  else {
    iVar9 = -(iVar5 + 4U & 0xfffffffc);
    *(undefined1 **)(unaff_EBP + 0x48) = &stack0xfffffeac;
    if (&stack0x00000000 == (undefined1 *)0x154) goto LAB_0047d54e;
    uVar8 = *(undefined4 *)(unaff_EBP + 0x50);
    *(int *)(&stack0xfffffea8 + iVar9) = iVar5 + 1;
    *(undefined4 *)(&stack0xfffffea4 + iVar9) = 0;
    *(undefined4 *)(&stack0xfffffea0 + iVar9) = uVar8;
    *(undefined1 **)(&stack0xfffffe9c + iVar9) = &stack0xfffffeac;
    *(undefined4 *)(&stack0xfffffe98 + iVar9) = 0x47d549;
    FUN_00403350(*(int *)(&stack0xfffffe9c + iVar9),*(uint **)(&stack0xfffffea0 + iVar9),
                 *(int *)(&stack0xfffffea4 + iVar9),*(uint *)(&stack0xfffffea8 + iVar9));
  }
  FUN_00403100(piVar7,*(int *)(iVar6 + 0xc),(int *)(unaff_EBP + 0x4c));
  FUN_004031d0(*(uint **)(unaff_EBP + 0x4c),(int *)(unaff_EBP + 0x58));
  if (*(int *)(unaff_EBP + 0x58) < 1) {
LAB_0047d5a2:
    pbVar14 = (byte *)0x0;
  }
  else {
    pbVar14 = &stack0xfffffeac;
    if (&stack0x00000000 == (undefined1 *)0x154) goto LAB_0047d5a2;
    FUN_00403350((int)&stack0xfffffeac,*(uint **)(unaff_EBP + 0x4c),0,*(int *)(unaff_EBP + 0x58) + 1
                );
  }
  pcVar12 = *(char **)(unaff_EBP + 0x48);
  pcVar1 = pcVar12 + 1;
  do {
    cVar2 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar2 != '\0');
  *(int *)(unaff_EBP + 0x50) = (int)pcVar12 - (int)pcVar1;
  pbVar13 = pbVar14;
  do {
    bVar3 = *pbVar13;
    pbVar13 = pbVar13 + 1;
  } while (bVar3 != 0);
  iVar5 = *(int *)(iVar6 + 0x18);
  uVar8 = *(undefined4 *)(iVar6 + 0x10);
  iVar9 = *(int *)(iVar6 + 0x20);
  *(bool *)(unaff_EBP + 0x57) = *(int *)(iVar6 + 0x14) != 0;
  uVar10 = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(unaff_EBP + 0x44) = uVar8;
  iVar11 = *(int *)(iVar6 + 0x1c);
  *(bool *)(unaff_EBP + 0x5f) = iVar5 != 0;
  *(bool *)(unaff_EBP + 0x5e) = iVar11 != 0;
  uVar8 = *(undefined4 *)(iVar6 + 0x28);
  *(bool *)(unaff_EBP + 0x5d) = iVar9 != 0;
  uVar4 = *(ushort *)(iVar6 + 4);
  *(undefined4 *)(unaff_EBP + 0x4c) = uVar10;
  *(undefined4 *)(unaff_EBP + 0x40) = uVar8;
  *(uint *)(unaff_EBP + 0x58) = (uint)uVar4;
  FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x58),0x10,'\x01');
  *(undefined1 *)(unaff_EBP + 0x60) = *(undefined1 *)(unaff_EBP + 0x50);
  FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x60),8,'\x01');
  FUN_0044dff0((void *)(unaff_EBP + -0xd8),*(byte **)(unaff_EBP + 0x48),
               (uint)*(byte *)(unaff_EBP + 0x50));
  *(char *)(unaff_EBP + 0x60) = (char)((int)pbVar13 - (int)(pbVar14 + 1));
  FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x60),8,'\x01');
  FUN_0044dff0((void *)(unaff_EBP + -0xd8),pbVar14,(int)pbVar13 - (int)(pbVar14 + 1) & 0xff);
  *(undefined4 *)(unaff_EBP + 0x58) = *(undefined4 *)(unaff_EBP + 0x44);
  FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x58),0x20,'\x01');
  if (*(char *)(unaff_EBP + 0x57) == '\0') {
    FUN_0044de70((uint *)(unaff_EBP + -0xd8));
  }
  else {
    FUN_0044de90((uint *)(unaff_EBP + -0xd8));
  }
  if (*(char *)(unaff_EBP + 0x5f) == '\0') {
    FUN_0044de70((uint *)(unaff_EBP + -0xd8));
  }
  else {
    FUN_0044de90((uint *)(unaff_EBP + -0xd8));
  }
  if (*(char *)(unaff_EBP + 0x5e) == '\0') {
    FUN_0044de70((uint *)(unaff_EBP + -0xd8));
  }
  else {
    FUN_0044de90((uint *)(unaff_EBP + -0xd8));
  }
  if (*(char *)(unaff_EBP + 0x5d) == '\0') {
    FUN_0044de70((uint *)(unaff_EBP + -0xd8));
  }
  else {
    FUN_0044de90((uint *)(unaff_EBP + -0xd8));
  }
  *(undefined4 *)(unaff_EBP + 0x58) = *(undefined4 *)(unaff_EBP + 0x4c);
  FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x58),0x20,'\x01');
  iVar5 = *(int *)(unaff_EBP + 0x40);
  if ((iVar5 != 0) ||
     (*(int *)(*(int *)(unaff_EBP + 0x3c) + 0x2de6c + (uint)*(ushort *)(iVar6 + 4) * 4) != 0)) {
    FUN_00493a40(DAT_004fc438,&DAT_004be940,unaff_EBP + -0xd8,*(ushort *)(iVar6 + 4));
    if ((iVar5 != 0) && (iVar5 != 1)) goto LAB_0047d769;
  }
  FUN_00493c10(DAT_004fc438,&DAT_004be940,unaff_EBP + -0xd8,*(ushort *)(iVar6 + 4),2);
LAB_0047d769:
  *(undefined4 *)(unaff_EBP + 0x6c) = 0xffffffff;
  FUN_0044d9b0(unaff_EBP + -0xd8);
  ExceptionList = *(void **)(unaff_EBP + 100);
  return 1;
}


/* END FUNCTION 0x0047d495 */
