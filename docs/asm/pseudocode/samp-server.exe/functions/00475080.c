/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475080
 * Name: FUN_00475080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00475080(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *this;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;
  undefined4 uStackY_58;
  undefined4 uStackY_54;
  undefined4 uStackY_50;
  undefined4 uStackY_4c;
  undefined4 uStackY_48;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  int local_c;
  uint *local_8;
  
  pvVar14 = *(void **)(DAT_004fc438 + 0x14);
  if (pvVar14 != (void *)0x0) {
    local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)(param_2 + 4));
    FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
    uStackY_48 = 0x4750c5;
    FUN_004031d0(local_8,&local_c);
    puVar10 = local_8;
    if (0 < local_c) {
      puVar11 = (undefined1 *)(local_c + 4U & 0xfffffffc);
      iVar8 = -(int)puVar11;
      pcVar12 = &stack0xffffffd0 + iVar8;
      pcVar13 = &stack0xffffffd0 + iVar8;
      if (&stack0xffffffd0 != puVar11) {
        *(int *)(&stack0xffffffcc + iVar8) = local_c + 1;
        *(undefined4 *)(&stack0xffffffc8 + iVar8) = 0;
        *(uint **)(&stack0xffffffc4 + iVar8) = puVar10;
        *(undefined1 **)(&stack0xffffffc0 + iVar8) = &stack0xffffffd0 + iVar8;
        *(undefined4 *)(&stack0xffffffbc + iVar8) = 0x4750fb;
        FUN_00403350(*(int *)(&stack0xffffffc0 + iVar8),*(uint **)(&stack0xffffffc4 + iVar8),
                     *(int *)(&stack0xffffffc8 + iVar8),*(uint *)(&stack0xffffffcc + iVar8));
        do {
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        if ((int)pcVar12 - (int)(&stack0xffffffd1 + iVar8) != 0) {
          do {
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          if ((uint)((int)pcVar13 - (int)(&stack0xffffffd1 + iVar8)) < 0x801) {
            uVar2 = *(undefined1 *)(param_2 + 0x10);
            local_20 = CONCAT31((int3)((uint)((int)pcVar12 - (int)(&stack0xffffffd1 + iVar8)) >> 8),
                                *(undefined1 *)(param_2 + 0xc));
            uVar5 = *(undefined4 *)(param_2 + 0x14);
            *(uint ***)(&stack0xffffffcc + iVar8) = &local_8;
            local_18 = CONCAT31(local_18._1_3_,uVar2);
            *(undefined4 *)(&stack0xffffffc8 + iVar8) = uVar5;
            *(int **)(&stack0xffffffc4 + iVar8) = param_1;
            *(undefined4 *)(&stack0xffffffc0 + iVar8) = 0x475151;
            FUN_00403100(*(int **)(&stack0xffffffc4 + iVar8),*(int *)(&stack0xffffffc8 + iVar8),
                         *(int **)(&stack0xffffffcc + iVar8));
            puVar10 = local_8;
            *(int **)(&stack0xffffffc0 + iVar8) = &local_c;
            *(uint **)(&stack0xffffffbc + iVar8) = puVar10;
            *(undefined4 *)((int)&uStackY_48 + iVar8) = 0x47515e;
            FUN_004031d0(*(uint **)(&stack0xffffffbc + iVar8),*(int **)(&stack0xffffffc0 + iVar8));
            if (0 < local_c) {
              puVar11 = (undefined1 *)(local_c + 4U & 0xfffffffc);
              *(undefined4 *)(&stack0xffffffcc + iVar8) = 0x47517a;
              iVar9 = -(int)puVar11;
              pcVar12 = &stack0xffffffd0 + iVar9 + iVar8;
              pcVar13 = &stack0xffffffd0 + iVar9 + iVar8;
              if (&stack0xffffffd0 + iVar8 != puVar11) {
                *(int *)(&stack0xffffffcc + iVar9 + iVar8) = local_c + 1;
                *(undefined4 *)(&stack0xffffffc8 + iVar9 + iVar8) = 0;
                *(uint **)(&stack0xffffffc4 + iVar9 + iVar8) = local_8;
                *(undefined1 **)(&stack0xffffffc0 + iVar9 + iVar8) =
                     &stack0xffffffd0 + iVar9 + iVar8;
                *(undefined4 *)(&stack0xffffffbc + iVar9 + iVar8) = 0x475191;
                FUN_00403350(*(int *)(&stack0xffffffc0 + iVar9 + iVar8),
                             *(uint **)(&stack0xffffffc4 + iVar9 + iVar8),
                             *(int *)(&stack0xffffffc8 + iVar9 + iVar8),
                             *(uint *)(&stack0xffffffcc + iVar9 + iVar8));
                do {
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                } while (cVar1 != '\0');
                if (pcVar12 != &stack0xffffffd1 + iVar9 + iVar8) {
                  do {
                    cVar1 = *pcVar13;
                    pcVar13 = pcVar13 + 1;
                  } while (cVar1 != '\0');
                  if ((uint)((int)pcVar13 - (int)(&stack0xffffffd1 + iVar9 + iVar8)) < 0x21) {
                    *(undefined4 *)(&stack0xffffffcc + iVar9 + iVar8) = local_10;
                    *(undefined4 *)(&stack0xffffffc8 + iVar9 + iVar8) = 0x4751d5;
                    pvVar14 = (void *)FUN_004652e0(pvVar14,*(ushort *)
                                                            (&stack0xffffffcc + iVar9 + iVar8));
                    if (pvVar14 != (void *)0x0) {
                      uVar5 = *(undefined4 *)(param_2 + 0x24);
                      uVar6 = *(undefined4 *)(param_2 + 0x20);
                      *(uint *)(&stack0xffffffcc + iVar9 + iVar8) = (uint)*(byte *)(param_2 + 0x28);
                      *(undefined4 *)(&stack0xffffffc8 + iVar9 + iVar8) = uVar5;
                      bVar3 = *(byte *)(param_2 + 0x1c);
                      *(undefined4 *)(&stack0xffffffc4 + iVar9 + iVar8) = uVar6;
                      bVar4 = *(byte *)(param_2 + 0x18);
                      *(uint *)(&stack0xffffffc0 + iVar9 + iVar8) = (uint)bVar3;
                      *(uint *)(&stack0xffffffbc + iVar9 + iVar8) = (uint)bVar4;
                      *(undefined1 **)((int)&uStackY_48 + iVar9 + iVar8) =
                           &stack0xffffffd0 + iVar9 + iVar8;
                      *(undefined4 *)((int)&uStackY_4c + iVar9 + iVar8) = local_18;
                      *(undefined1 **)((int)&uStackY_50 + iVar9 + iVar8) = &stack0xffffffd0 + iVar8;
                      *(undefined4 *)((int)&uStackY_54 + iVar9 + iVar8) = local_20;
                      *(undefined4 *)((int)&uStackY_58 + iVar9 + iVar8) = 0x475209;
                      FUN_0049dbb0(pvVar14,*(undefined1 *)((int)&uStackY_54 + iVar9 + iVar8),
                                   *(char **)((int)&uStackY_50 + iVar9 + iVar8),
                                   *(undefined1 *)((int)&uStackY_4c + iVar9 + iVar8),
                                   *(char **)((int)&uStackY_48 + iVar9 + iVar8),
                                   (&stack0xffffffbc)[iVar9 + iVar8],
                                   (&stack0xffffffc0)[iVar9 + iVar8],
                                   *(undefined4 *)(&stack0xffffffc4 + iVar9 + iVar8),
                                   *(undefined4 *)(&stack0xffffffc8 + iVar9 + iVar8),
                                   (&stack0xffffffcc)[iVar9 + iVar8]);
                      this = *(void **)(DAT_004fc438 + 8);
                      if (this != (void *)0x0) {
                        iVar7 = *(int *)((int)this + 0x30d50);
                        iVar16 = 0;
                        if (-1 < iVar7) {
                          do {
                            *(int *)(&stack0xffffffcc + iVar9 + iVar8) = iVar16;
                            *(undefined4 *)(&stack0xffffffc8 + iVar9 + iVar8) = 0x47522d;
                            iVar15 = FUN_00463da0(this,*(ushort *)(&stack0xffffffcc + iVar9 + iVar8)
                                                 );
                            if (iVar15 != 0) {
                              *(int *)(&stack0xffffffcc + iVar9 + iVar8) = iVar16;
                              *(undefined4 *)(&stack0xffffffc8 + iVar9 + iVar8) = 0x475239;
                              FUN_0049dfc0(pvVar14,*(ushort *)(&stack0xffffffcc + iVar9 + iVar8));
                            }
                            iVar16 = iVar16 + 1;
                          } while (iVar16 <= iVar7);
                        }
                        return 1;
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
  }
  return 0;
}


/* END FUNCTION 0x00475080 */
