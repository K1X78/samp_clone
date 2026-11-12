/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047ef25
 * Name: FUN_0047ef25
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0047ef25(void)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 uVar13;
  int unaff_EBP;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b169b;
  pvStack_c = ExceptionList;
  iVar5 = *(int *)(unaff_EBP + 0x7c);
  if (((*(ushort *)(iVar5 + 4) < 1000) &&
      (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(iVar5 + 4) * 4) != 0))
     && (iVar6 = *(int *)((int)DAT_004fc438 + 0x14), ExceptionList = &pvStack_c,
        *(int *)(unaff_EBP + 0x7c) = iVar6, iVar6 != 0)) {
    uVar1 = *(undefined1 *)(iVar5 + 0xc);
    uVar4 = *(undefined2 *)(iVar5 + 0x10);
    piVar7 = *(int **)(unaff_EBP + 0x78);
    *(undefined2 *)(unaff_EBP + 0x50) = *(undefined2 *)(iVar5 + 8);
    *(undefined1 *)(unaff_EBP + 99) = uVar1;
    iVar6 = *(int *)(iVar5 + 0x14);
    *(undefined2 *)(unaff_EBP + 0x40) = uVar4;
    FUN_00403100(piVar7,iVar6,(int *)(unaff_EBP + 0x48));
    FUN_004031d0(*(uint **)(unaff_EBP + 0x48),(int *)(unaff_EBP + 0x3c));
    iVar6 = *(int *)(unaff_EBP + 0x3c);
    if (iVar6 < 1) {
LAB_0047efe6:
      *(undefined1 **)(unaff_EBP + 0x5c) = &DAT_004fc400;
    }
    else {
      iVar9 = -(iVar6 + 4U & 0xfffffffc);
      *(undefined1 **)(unaff_EBP + 0x5c) = &stack0xfffffeac;
      if (&stack0x00000000 == (undefined1 *)0x154) goto LAB_0047efe6;
      uVar13 = *(undefined4 *)(unaff_EBP + 0x48);
      *(int *)(&stack0xfffffea8 + iVar9) = iVar6 + 1;
      *(undefined4 *)(&stack0xfffffea4 + iVar9) = 0;
      *(undefined4 *)(&stack0xfffffea0 + iVar9) = uVar13;
      *(undefined1 **)(&stack0xfffffe9c + iVar9) = &stack0xfffffeac;
      *(undefined4 *)(&stack0xfffffe98 + iVar9) = 0x47efe1;
      FUN_00403350(*(int *)(&stack0xfffffe9c + iVar9),*(uint **)(&stack0xfffffea0 + iVar9),
                   *(int *)(&stack0xfffffea4 + iVar9),*(uint *)(&stack0xfffffea8 + iVar9));
    }
    FUN_00403100(piVar7,*(int *)(iVar5 + 0x18),(int *)(unaff_EBP + 0x4c));
    FUN_004031d0(*(uint **)(unaff_EBP + 0x4c),(int *)(unaff_EBP + 0x44));
    if (*(int *)(unaff_EBP + 0x44) < 1) {
LAB_0047f03d:
      *(undefined1 **)(unaff_EBP + 0x58) = &DAT_004fc400;
      pcVar12 = *(char **)(unaff_EBP + 0x58);
    }
    else {
      pcVar12 = &stack0xfffffeac;
      *(undefined1 **)(unaff_EBP + 0x58) = &stack0xfffffeac;
      if (&stack0x00000000 == (undefined1 *)0x154) goto LAB_0047f03d;
      FUN_00403350((int)&stack0xfffffeac,*(uint **)(unaff_EBP + 0x4c),0,
                   *(int *)(unaff_EBP + 0x44) + 1);
    }
    if (((ushort)*(uint *)(unaff_EBP + 0x50) < 2000) && (*(ushort *)(iVar5 + 4) < 1000)) {
      *(undefined4 *)(unaff_EBP + 0x7c) =
           *(undefined4 *)
            (*(int *)(unaff_EBP + 0x7c) +
            ((*(ushort *)(iVar5 + 4) + 0x3e9) * 2000 + (*(uint *)(unaff_EBP + 0x50) & 0xffff)) * 4);
    }
    else {
      *(undefined4 *)(unaff_EBP + 0x7c) = 0;
    }
    pcVar11 = *(char **)(unaff_EBP + 0x5c);
    if (pcVar11 != (char *)0x0) {
      pcVar10 = pcVar11;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      *(int *)(unaff_EBP + 0x54) = (int)pcVar10 - (int)(pcVar11 + 1);
      if ((int)pcVar10 - (int)(pcVar11 + 1) != 0) {
        pcVar10 = pcVar11 + 1;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        if (((uint)((int)pcVar11 - (int)pcVar10) < 0x21) && (pcVar12 != (char *)0x0)) {
          pcVar11 = pcVar12;
          do {
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          *(int *)(unaff_EBP + 0x54) = (int)pcVar11 - (int)(pcVar12 + 1);
          if ((int)pcVar11 - (int)(pcVar12 + 1) != 0) {
            pcVar11 = pcVar12 + 1;
            do {
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            if ((uint)((int)pcVar12 - (int)pcVar11) < 0x21) {
              uVar8 = *(uint *)(iVar5 + 0x1c);
              *(uint *)(unaff_EBP + 0x54) = uVar8;
              bVar3 = *(byte *)(unaff_EBP + 0x56);
              if (*(int *)(unaff_EBP + 0x7c) != 0) {
                FUN_0044d8a0((undefined4 *)(unaff_EBP + -0xd8));
                *(undefined4 *)(unaff_EBP + 0x6c) = 0;
                *(undefined4 *)(unaff_EBP + 0x7c) = *(undefined4 *)(unaff_EBP + 0x50);
                FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x7c),0x10,'\x01');
                *(undefined1 *)(unaff_EBP + 0x7f) = 1;
                FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x7f),8,'\x01');
                *(undefined1 *)(unaff_EBP + 0x7f) = *(undefined1 *)(unaff_EBP + 99);
                FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x7f),8,'\x01');
                *(undefined4 *)(unaff_EBP + 0x7c) = *(undefined4 *)(unaff_EBP + 0x40);
                FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x7c),0x10,'\x01');
                pcVar11 = *(char **)(unaff_EBP + 0x5c);
                pcVar12 = pcVar11 + 1;
                do {
                  cVar2 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                } while (cVar2 != '\0');
                *(char *)(unaff_EBP + 0x7f) = (char)((int)pcVar11 - (int)pcVar12);
                FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x7f),8,'\x01');
                FUN_0044dff0((void *)(unaff_EBP + -0xd8),*(byte **)(unaff_EBP + 0x5c),
                             (int)pcVar11 - (int)pcVar12 & 0xff);
                pcVar11 = *(char **)(unaff_EBP + 0x58);
                pcVar12 = pcVar11 + 1;
                do {
                  cVar2 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                } while (cVar2 != '\0');
                *(char *)(unaff_EBP + 0x7f) = (char)((int)pcVar11 - (int)pcVar12);
                FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x7f),8,'\x01');
                FUN_0044dff0((void *)(unaff_EBP + -0xd8),*(byte **)(unaff_EBP + 0x58),
                             (int)pcVar11 - (int)pcVar12 & 0xff);
                *(uint *)(unaff_EBP + 0x7c) =
                     (uint)bVar3 | (uVar8 & 0xff) << 0x10 | uVar8 & 0xff00ff00;
                FUN_0044df40((void *)(unaff_EBP + -0xd8),(byte *)(unaff_EBP + 0x7c),0x20,'\x01');
                FUN_00493c10(DAT_004fc438,&DAT_004be96c,unaff_EBP + -0xd8,*(ushort *)(iVar5 + 4),2);
                *(undefined4 *)(unaff_EBP + 0x6c) = 0xffffffff;
                FUN_0044d9b0(unaff_EBP + -0xd8);
                uVar13 = 1;
                goto LAB_0047f255;
              }
            }
          }
        }
      }
    }
  }
  uVar13 = 0;
LAB_0047f255:
  ExceptionList = *(void **)(unaff_EBP + 100);
  return uVar13;
}


/* END FUNCTION 0x0047ef25 */
