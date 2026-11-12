/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047f275
 * Name: FUN_0047f275
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0047f275(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  void *pvVar14;
  undefined4 uVar15;
  int unaff_EBP;
  undefined4 uStackY_16c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b169b;
  pvStack_c = ExceptionList;
  iVar5 = *(int *)(unaff_EBP + 0x7c);
  if (((*(ushort *)(iVar5 + 4) < 1000) &&
      (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(iVar5 + 4) * 4) != 0))
     && (iVar12 = *(int *)((int)DAT_004fc438 + 0x14), ExceptionList = &pvStack_c,
        *(int *)(unaff_EBP + 0x44) = iVar12, iVar12 != 0)) {
    iVar12 = *(int *)(iVar5 + 0xc);
    *(undefined2 *)(unaff_EBP + 0x7c) = *(undefined2 *)(iVar5 + 8);
    FUN_00403100(*(int **)(unaff_EBP + 0x78),iVar12,(int *)(unaff_EBP + 0x50));
    uStackY_16c = 0x47f2f3;
    FUN_004031d0(*(uint **)(unaff_EBP + 0x50),(int *)(unaff_EBP + 0x3c));
    iVar12 = *(int *)(unaff_EBP + 0x3c);
    if (0 < iVar12) {
      puVar9 = (undefined1 *)(iVar12 + 4U & 0xfffffffc);
      iVar7 = -(int)puVar9;
      pcVar10 = &stack0xfffffeac + iVar7;
      pcVar11 = &stack0xfffffeac + iVar7;
      *(undefined1 **)(unaff_EBP + 0x40) = &stack0xfffffeac + iVar7;
      if (&stack0xfffffeac != puVar9) {
        uVar15 = *(undefined4 *)(unaff_EBP + 0x50);
        *(int *)(&stack0xfffffea8 + iVar7) = iVar12 + 1;
        *(undefined4 *)(&stack0xfffffea4 + iVar7) = 0;
        *(undefined4 *)(&stack0xfffffea0 + iVar7) = uVar15;
        *(undefined1 **)(&stack0xfffffe9c + iVar7) = &stack0xfffffeac + iVar7;
        *(undefined4 *)(&stack0xfffffe98 + iVar7) = 0x47f329;
        FUN_00403350(*(int *)(&stack0xfffffe9c + iVar7),*(uint **)(&stack0xfffffea0 + iVar7),
                     *(int *)(&stack0xfffffea4 + iVar7),*(uint *)(&stack0xfffffea8 + iVar7));
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        *(int *)(unaff_EBP + 0x58) = (int)pcVar10 - (int)(&stack0xfffffead + iVar7);
        if ((int)pcVar10 - (int)(&stack0xfffffead + iVar7) != 0) {
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          if ((uint)((int)pcVar11 - (int)(&stack0xfffffead + iVar7)) < 0x801) {
            uVar2 = *(undefined1 *)(iVar5 + 0x14);
            *(undefined1 *)(unaff_EBP + 0x5f) = *(undefined1 *)(iVar5 + 0x10);
            uVar15 = *(undefined4 *)(iVar5 + 0x18);
            *(int *)(&stack0xfffffea8 + iVar7) = unaff_EBP + 0x54;
            *(undefined1 *)(unaff_EBP + 0x61) = uVar2;
            uVar6 = *(undefined4 *)(unaff_EBP + 0x78);
            *(undefined4 *)(&stack0xfffffea4 + iVar7) = uVar15;
            *(undefined4 *)(&stack0xfffffea0 + iVar7) = uVar6;
            *(undefined4 *)(&stack0xfffffe9c + iVar7) = 0x47f379;
            FUN_00403100(*(int **)(&stack0xfffffea0 + iVar7),*(int *)(&stack0xfffffea4 + iVar7),
                         *(int **)(&stack0xfffffea8 + iVar7));
            uVar15 = *(undefined4 *)(unaff_EBP + 0x54);
            *(int *)(&stack0xfffffe9c + iVar7) = unaff_EBP + 0x48;
            *(undefined4 *)(&stack0xfffffe98 + iVar7) = uVar15;
            *(undefined4 *)((int)&uStackY_16c + iVar7) = 0x47f386;
            FUN_004031d0(*(uint **)(&stack0xfffffe98 + iVar7),*(int **)(&stack0xfffffe9c + iVar7));
            iVar12 = *(int *)(unaff_EBP + 0x48);
            if (0 < iVar12) {
              puVar9 = (undefined1 *)(iVar12 + 4U & 0xfffffffc);
              *(undefined4 *)(&stack0xfffffea8 + iVar7) = 0x47f3a2;
              iVar8 = -(int)puVar9;
              pcVar10 = &stack0xfffffeac + iVar8 + iVar7;
              pcVar11 = &stack0xfffffeac + iVar8 + iVar7;
              pcVar13 = &stack0xfffffeac + iVar8 + iVar7;
              if (&stack0xfffffeac + iVar7 != puVar9) {
                uVar15 = *(undefined4 *)(unaff_EBP + 0x54);
                *(int *)(&stack0xfffffea8 + iVar8 + iVar7) = iVar12 + 1;
                *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 0;
                *(undefined4 *)(&stack0xfffffea0 + iVar8 + iVar7) = uVar15;
                *(undefined1 **)(&stack0xfffffe9c + iVar8 + iVar7) =
                     &stack0xfffffeac + iVar8 + iVar7;
                *(undefined4 *)(&stack0xfffffe98 + iVar8 + iVar7) = 0x47f3b9;
                FUN_00403350(*(int *)(&stack0xfffffe9c + iVar8 + iVar7),
                             *(uint **)(&stack0xfffffea0 + iVar8 + iVar7),
                             *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                             *(uint *)(&stack0xfffffea8 + iVar8 + iVar7));
                do {
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                *(int *)(unaff_EBP + 0x58) = (int)pcVar10 - (int)(&stack0xfffffead + iVar8 + iVar7);
                if ((int)pcVar10 - (int)(&stack0xfffffead + iVar8 + iVar7) != 0) {
                  do {
                    cVar1 = *pcVar11;
                    pcVar11 = pcVar11 + 1;
                  } while (cVar1 != '\0');
                  if ((uint)((int)pcVar11 - (int)(&stack0xfffffead + iVar8 + iVar7)) < 0x21) {
                    uVar2 = *(undefined1 *)(iVar5 + 0x1c);
                    uVar3 = *(undefined1 *)(iVar5 + 0x20);
                    uVar15 = *(undefined4 *)(unaff_EBP + 0x7c);
                    *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(iVar5 + 0x24);
                    uVar4 = *(ushort *)(iVar5 + 4);
                    *(undefined1 *)(unaff_EBP + 99) = uVar2;
                    uVar6 = *(undefined4 *)(iVar5 + 0x28);
                    *(undefined1 *)(unaff_EBP + 0x62) = uVar3;
                    uVar2 = *(undefined1 *)(iVar5 + 0x2c);
                    *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = uVar15;
                    *(undefined4 *)(unaff_EBP + 0x58) = uVar6;
                    pvVar14 = *(void **)(unaff_EBP + 0x44);
                    *(uint *)(&stack0xfffffea4 + iVar8 + iVar7) = (uint)uVar4;
                    *(undefined1 *)(unaff_EBP + 0x60) = uVar2;
                    *(undefined4 *)(&stack0xfffffea0 + iVar8 + iVar7) = 0x47f41b;
                    iVar12 = FUN_0046fe30(pvVar14,*(ushort *)(&stack0xfffffea4 + iVar8 + iVar7),
                                          *(ushort *)(&stack0xfffffea8 + iVar8 + iVar7));
                    if (iVar12 != 0) {
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 0x47f42e;
                      FUN_0044d8a0((undefined4 *)(unaff_EBP + -0xd8));
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 0x10;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7c;
                      *(undefined4 *)(unaff_EBP + 0x6c) = 0;
                      *(undefined4 *)(unaff_EBP + 0x7c) = uVar15;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f44b;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 8;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7f;
                      *(undefined1 *)(unaff_EBP + 0x7f) = 2;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f462;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      uVar2 = *(undefined1 *)(unaff_EBP + 0x5f);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 8;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7f;
                      *(undefined1 *)(unaff_EBP + 0x7f) = uVar2;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f47b;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      uVar2 = *(undefined1 *)(unaff_EBP + 0x61);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 8;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7f;
                      *(undefined1 *)(unaff_EBP + 0x7f) = uVar2;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f494;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      do {
                        cVar1 = *pcVar13;
                        pcVar13 = pcVar13 + 1;
                      } while (cVar1 != '\0');
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 8;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7f;
                      *(char *)(unaff_EBP + 0x7f) =
                           (char)((int)pcVar13 - (int)(&stack0xfffffead + iVar8 + iVar7));
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f4c1;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      *(uint *)(&stack0xfffffea8 + iVar8 + iVar7) =
                           (int)pcVar13 - (int)(&stack0xfffffead + iVar8 + iVar7) & 0xff;
                      *(undefined1 **)(&stack0xfffffea4 + iVar8 + iVar7) =
                           &stack0xfffffeac + iVar8 + iVar7;
                      *(undefined4 *)(&stack0xfffffea0 + iVar8 + iVar7) = 0x47f4d1;
                      FUN_0044dff0((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea4 + iVar8 + iVar7),
                                   *(uint *)(&stack0xfffffea8 + iVar8 + iVar7));
                      uVar2 = *(undefined1 *)(unaff_EBP + 99);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 8;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7f;
                      *(undefined1 *)(unaff_EBP + 0x7f) = uVar2;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f4ea;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      uVar2 = *(undefined1 *)(unaff_EBP + 0x62);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 8;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7f;
                      *(undefined1 *)(unaff_EBP + 0x7f) = uVar2;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f503;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      uVar15 = *(undefined4 *)(unaff_EBP + 0x4c);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 0x20;
                      *(undefined4 *)(unaff_EBP + 0x7c) = uVar15;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7c;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f51c;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      uVar15 = *(undefined4 *)(unaff_EBP + 0x58);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 0x20;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7c;
                      *(undefined4 *)(unaff_EBP + 0x7c) = uVar15;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f535;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      uVar2 = *(undefined1 *)(unaff_EBP + 0x60);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 1;
                      *(undefined4 *)(&stack0xfffffea4 + iVar8 + iVar7) = 8;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + 0x7f;
                      *(undefined1 *)(unaff_EBP + 0x7f) = uVar2;
                      *(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7) = 0x47f54e;
                      FUN_0044df40((void *)(unaff_EBP + -0xd8),
                                   *(byte **)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   (&stack0xfffffea8)[iVar8 + iVar7]);
                      pcVar10 = *(char **)(unaff_EBP + 0x40);
                      pcVar11 = pcVar10;
                      do {
                        cVar1 = *pcVar11;
                        pcVar11 = pcVar11 + 1;
                      } while (cVar1 != '\0');
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 0;
                      *(int *)(&stack0xfffffea4 + iVar8 + iVar7) = unaff_EBP + -0xd8;
                      *(char **)(&stack0xfffffea0 + iVar8 + iVar7) =
                           pcVar11 + (1 - (int)(pcVar10 + 1));
                      *(char **)(&stack0xfffffe9c + iVar8 + iVar7) = pcVar10;
                      *(undefined4 *)(&stack0xfffffe98 + iVar8 + iVar7) = 0x47f570;
                      pvVar14 = (void *)FUN_00462dd0();
                      *(undefined4 *)(&stack0xfffffe98 + iVar8 + iVar7) = 0x47f577;
                      FUN_00463220(pvVar14,*(char **)(&stack0xfffffe9c + iVar8 + iVar7),
                                   *(int *)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(void **)(&stack0xfffffea4 + iVar8 + iVar7));
                      uVar4 = *(ushort *)(iVar5 + 4);
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 2;
                      *(uint *)(&stack0xfffffea4 + iVar8 + iVar7) = (uint)uVar4;
                      *(int *)(&stack0xfffffea0 + iVar8 + iVar7) = unaff_EBP + -0xd8;
                      *(undefined **)(&stack0xfffffe9c + iVar8 + iVar7) = &DAT_004be96c;
                      *(undefined4 *)(&stack0xfffffe98 + iVar8 + iVar7) = 0x47f597;
                      FUN_00493c10(DAT_004fc438,*(undefined4 *)(&stack0xfffffe9c + iVar8 + iVar7),
                                   *(undefined4 *)(&stack0xfffffea0 + iVar8 + iVar7),
                                   *(ushort *)(&stack0xfffffea4 + iVar8 + iVar7),
                                   *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7));
                      *(undefined4 *)(unaff_EBP + 0x6c) = 0xffffffff;
                      *(undefined4 *)(&stack0xfffffea8 + iVar8 + iVar7) = 0x47f5a9;
                      FUN_0044d9b0(unaff_EBP + -0xd8);
                      uVar15 = 1;
                      goto LAB_0047f5b2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar15 = 0;
LAB_0047f5b2:
  ExceptionList = *(void **)(unaff_EBP + 100);
  return uVar15;
}


/* END FUNCTION 0x0047f275 */
