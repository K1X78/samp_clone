/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00443760
 * Name: FUN_00443760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00443760(int param_1,int *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  short *psVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  byte *this;
  int iVar14;
  byte *this_00;
  short *psVar15;
  int *piVar16;
  int local_50;
  int *local_44;
  byte *local_38;
  int local_28;
  int local_24;
  int local_1c;
  
  puVar2 = *(uint **)(param_1 + 8);
  uVar3 = *puVar2;
  if (*(char *)(uVar3 + 0x1e) == '\0') {
    psVar4 = (short *)param_2[2];
    if ((psVar4 == (short *)0x0) || ((*(ushort *)((int)param_2 + 6) & 0x10) != 0)) {
      return 1;
    }
    piVar5 = (int *)*param_2;
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 0x10;
    FUN_0040f1e0((int)puVar2,psVar4);
    psVar15 = psVar4 + 4;
    local_50 = 0;
    if (0 < *psVar4) {
      do {
        if (*(int *)(psVar15 + 6) != 0) {
          return 1;
        }
        if (*(int *)(psVar15 + 2) == 0) {
          puVar12 = *(undefined4 **)(psVar15 + 8);
          FUN_00415750(param_1,(int)puVar12);
          puVar10 = FUN_00417b70();
          *(uint **)(psVar15 + 6) = puVar10;
          if (puVar10 == (uint *)0x0) {
            return 2;
          }
          cVar1 = *(char *)(uVar3 + 0xea);
          *(undefined2 *)(puVar10 + 8) = 1;
          *puVar10 = -(uint)(cVar1 != '\0') & uVar3;
          uVar11 = FUN_00418920((undefined **)"sqlite_subquery_%p_");
          puVar10[1] = uVar11;
          for (puVar8 = (undefined4 *)puVar12[7]; puVar8 != (undefined4 *)0x0;
              puVar8 = (undefined4 *)puVar8[7]) {
            puVar12 = puVar8;
          }
          FUN_0041c530((int *)*puVar12,(int *)(puVar10 + 3),puVar10 + 4);
          puVar10[2] = 0xffffffff;
          *(byte *)((int)puVar10 + 0x22) = *(byte *)((int)puVar10 + 0x22) | 2;
        }
        else {
          iVar13 = FUN_00442730();
          *(int *)(psVar15 + 6) = iVar13;
          if (iVar13 == 0) {
            return 2;
          }
          *(short *)(iVar13 + 0x20) = *(short *)(iVar13 + 0x20) + 1;
          if ((*(int *)(iVar13 + 0x1c) != 0) || ((*(byte *)(iVar13 + 0x22) & 0x10) != 0)) {
            iVar14 = FUN_00446950((int *)puVar2,iVar13);
            if (iVar14 != 0) {
              return 2;
            }
            puVar12 = FUN_0041a470(uVar3,*(undefined4 **)(iVar13 + 0x1c),0);
            *(undefined4 **)(psVar15 + 8) = puVar12;
            FUN_00415750(param_1,(int)puVar12);
          }
        }
        iVar13 = FUN_0041cb60((int)psVar15);
        if (iVar13 != 0) {
          return 2;
        }
        local_50 = local_50 + 1;
        psVar15 = psVar15 + 0x1c;
      } while (local_50 < *psVar4);
    }
    if ((*(char *)(uVar3 + 0x1e) == '\0') &&
       (iVar13 = FUN_00421b70(puVar2,(int)param_2), iVar13 == 0)) {
      iVar13 = *piVar5;
      iVar14 = 0;
      if (0 < iVar13) {
        puVar12 = (undefined4 *)piVar5[3];
        do {
          cVar1 = *(char *)*puVar12;
          if ((cVar1 == 'q') || ((cVar1 == 'v' && (**(char **)((char *)*puVar12 + 0xc) == 'q'))))
          break;
          iVar14 = iVar14 + 1;
          puVar12 = puVar12 + 5;
        } while (iVar14 < iVar13);
      }
      if (iVar14 < iVar13) {
        local_44 = (int *)0x0;
        if (((*(uint *)(*puVar2 + 0xc) & 0x400) == 0) ||
           (bVar7 = true, (*(uint *)(*puVar2 + 0xc) & 0x800) != 0)) {
          bVar7 = false;
        }
        local_1c = 0;
        if (0 < iVar13) {
          puVar12 = (undefined4 *)(piVar5[3] + 8);
          do {
            pcVar6 = (char *)puVar12[-2];
            cVar1 = *pcVar6;
            if ((cVar1 == 'q') || ((cVar1 == 'v' && (**(char **)(pcVar6 + 0xc) == 'q')))) {
              bVar9 = false;
              if (cVar1 == 'v') {
                local_38 = *(byte **)(*(int *)(pcVar6 + 8) + 4);
              }
              else {
                local_38 = (byte *)0x0;
              }
              local_50 = 0;
              if (0 < *psVar4) {
                piVar16 = (int *)(psVar4 + 8);
                do {
                  this_00 = (byte *)*piVar16;
                  iVar13 = piVar16[1];
                  if (this_00 == (byte *)0x0) {
                    this_00 = *(byte **)(iVar13 + 4);
                  }
                  if (*(char *)(uVar3 + 0x1e) != '\0') break;
                  if ((local_38 == (byte *)0x0) ||
                     (iVar14 = FUN_00408450(local_38,this_00), iVar14 == 0)) {
                    bVar9 = true;
                    local_28 = 0;
                    if (0 < *(int *)(iVar13 + 0xc)) {
                      local_24 = 0;
                      do {
                        this = *(byte **)(local_24 + *(int *)(iVar13 + 0x10));
                        if ((*(char *)(local_24 + *(int *)(iVar13 + 0x10) + 0x17) == '\0') &&
                           (((local_50 < 1 || (local_38 != (byte *)0x0)) ||
                            ((((*(byte *)((int)piVar16 + 0xd) & 4) == 0 ||
                              (iVar14 = FUN_0040fd50(this,(int *)0x0,(int *)0x0), iVar14 == 0)) &&
                             (iVar14 = FUN_0040f190(this), iVar14 < 0)))))) {
                          FUN_0041a000(this,uVar3,0x1a);
                          if ((bVar7) || (1 < *psVar4)) {
                            FUN_0041a000(this_00,uVar3,0x1a);
                            FUN_0041a0a0(puVar2);
                            if (bVar7) {
                              this = (byte *)FUN_00418920((undefined **)"%s.%s");
                            }
                          }
                          local_44 = FUN_0041a560(local_44);
                          FUN_00408380((char *)this);
                          FUN_00415af0(local_44,puVar2,0);
                          FUN_00408130(uVar3);
                        }
                        local_28 = local_28 + 1;
                        local_24 = local_24 + 0x18;
                      } while (local_28 < *(int *)(iVar13 + 0xc));
                    }
                  }
                  local_50 = local_50 + 1;
                  piVar16 = piVar16 + 0xe;
                } while (local_50 < *psVar4);
                if (bVar9) goto LAB_00443c48;
              }
              if (local_38 == (byte *)0x0) {
                FUN_00418b00((undefined **)"no tables specified");
              }
              else {
                FUN_00418b00((undefined **)"no such table: %s");
              }
            }
            else {
              local_44 = FUN_0041a560(local_44);
              if (local_44 != (int *)0x0) {
                *(undefined4 *)(local_44[3] + -0x10 + *local_44 * 0x14) = puVar12[-1];
                *(undefined4 *)(local_44[3] + -0xc + *local_44 * 0x14) = *puVar12;
                puVar12[-1] = 0;
                *puVar12 = 0;
              }
              puVar12[-2] = 0;
            }
LAB_00443c48:
            local_1c = local_1c + 1;
            puVar12 = puVar12 + 5;
          } while (local_1c < *piVar5);
        }
        FUN_0040e580();
        *param_2 = (int)local_44;
      }
      if (((int *)*param_2 != (int *)0x0) && (*(int *)(uVar3 + 0x50) < *(int *)*param_2)) {
        FUN_00418b00((undefined **)"too many columns in result set");
      }
      return 0;
    }
  }
  return 2;
}


/* END FUNCTION 0x00443760 */
