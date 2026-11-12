/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00422a40
 * Name: FUN_00422a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00422a40(void *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  void *this;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint uVar14;
  void *this_00;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  int *piVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int local_34;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_8;
  uint local_4;
  
  piVar1 = (int *)*param_2;
  iVar13 = *piVar1;
  iVar9 = param_3 * 0x28;
  pbVar2 = *(byte **)(param_2[7] + iVar9);
  uVar17 = param_2[7] + iVar9;
  piVar20 = (int *)param_2[1];
  puVar10 = FUN_00417b70();
  *(undefined4 **)(uVar17 + 0xc) = puVar10;
  if (puVar10 != (undefined4 *)0x0) {
    *(byte *)(uVar17 + 0x12) = *(byte *)(uVar17 + 0x12) | 0x10;
    FUN_00410680(*param_2,piVar20);
    FUN_00417090(puVar10,pbVar2,0x44);
    FUN_00440ac0(param_1,param_1,puVar10);
    if (*(char *)(iVar13 + 0x1e) == '\0') {
      puVar18 = (undefined4 *)puVar10[7];
      local_8 = ~param_2[2];
      local_4 = ~param_2[3];
      iVar19 = puVar10[5];
      local_1c = 0xffffffff;
      local_18 = 0xffffffff;
      while ((iVar19 = iVar19 + -1, -1 < iVar19 && (local_1c != 0 || local_18 != 0))) {
        if (*(char *)(puVar18 + 4) == '\0') {
          local_8 = 0;
          local_4 = 0;
          puVar11 = FUN_00412930(0x160);
          if (puVar11 != (undefined4 *)0x0) {
            puVar18[3] = puVar11;
            *(byte *)((int)puVar18 + 0x12) = *(byte *)((int)puVar18 + 0x12) | 0x20;
            *(undefined2 *)(puVar18 + 4) = 0x200;
            uVar16 = 0;
            local_20 = 0;
            FUN_00410680(*param_2,piVar20);
            FUN_00417090(puVar11,(byte *)*puVar18,0x45);
            FUN_00440ac0(this,param_1,puVar11);
            if ((*(char *)(iVar13 + 0x1e) == '\0') && (local_34 = puVar11[5], 0 < local_34)) {
              do {
                iVar12 = FUN_00410770();
                if (iVar12 != 0) {
                  lVar21 = FUN_004106c0(extraout_ECX,piVar20);
                  uVar16 = uVar16 | (uint)lVar21;
                  local_20 = local_20 | (uint)((ulonglong)lVar21 >> 0x20);
                }
                local_34 = local_34 + -1;
              } while (local_34 != 0);
            }
LAB_00422c59:
            local_18 = local_18 & local_20;
            local_1c = local_1c & uVar16;
          }
        }
        else if ((*(byte *)((int)puVar18 + 0x12) & 8) == 0) {
          uVar22 = FUN_004106c0(local_1c,piVar20);
          uVar16 = (uint)uVar22;
          if ((*(byte *)((int)puVar18 + 0x12) & 2) != 0) {
            uVar23 = FUN_004106c0(puVar10,piVar20);
            uVar16 = (uint)(uVar23 | uVar22);
            uVar22 = (uVar23 | uVar22) & 0xffffffff00000000;
          }
          local_20 = (uint)(uVar22 >> 0x20);
          if (*(short *)(puVar18 + 4) == 2) {
            local_8 = local_8 & uVar16;
            local_4 = local_4 & local_20;
          }
          else {
            local_4 = 0;
            local_8 = 0;
          }
          goto LAB_00422c59;
        }
        puVar18 = puVar18 + 10;
      }
      puVar10[0x58] = local_1c;
      puVar10[0x59] = local_18;
      if (local_1c == 0 && local_18 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x100;
      }
      *(undefined2 *)(uVar17 + 0x10) = uVar8;
      if (local_8 != 0 || local_4 != 0) {
        bVar4 = false;
        uVar16 = 0xffffffff;
        local_24 = 0;
        uVar14 = uVar17;
        do {
          if (bVar4) goto LAB_00422db3;
          iVar19 = puVar10[7];
          iVar12 = puVar10[5] + -1;
          if (iVar12 < 0) {
            return;
          }
          while( true ) {
            uVar14 = CONCAT31((int3)(uVar14 >> 8),*(undefined1 *)(iVar19 + 0x12)) & 0xffffffbf;
            *(char *)(iVar19 + 0x12) = (char)uVar14;
            if ((*(uint *)(iVar19 + 8) != uVar16) &&
               (lVar21 = FUN_004106c0(uVar14,piVar20), uVar14 = local_8,
               ((uint)lVar21 & local_8) != 0 || ((uint)((ulonglong)lVar21 >> 0x20) & local_4) != 0))
            break;
            iVar12 = iVar12 + -1;
            iVar19 = iVar19 + 0x28;
            if (iVar12 < 0) {
              return;
            }
          }
          iVar3 = *(int *)(iVar19 + 0xc);
          uVar16 = *(uint *)(iVar19 + 8);
          if (iVar12 < 0) {
            return;
          }
          bVar4 = true;
          uVar14 = uVar16;
          do {
            if (!bVar4) break;
            if (*(uint *)(iVar19 + 8) == uVar16) {
              if (*(int *)(iVar19 + 0xc) == iVar3) {
                cVar6 = FUN_004157b0();
                uVar14 = extraout_ECX_00;
                if ((int)cVar6 != 0) {
                  cVar7 = FUN_004157b0();
                  uVar14 = (uint)cVar7;
                  if ((int)cVar6 != uVar14) {
                    bVar4 = false;
                    goto LAB_00422d8d;
                  }
                }
                bVar5 = *(byte *)(iVar19 + 0x12) | 0x40;
                goto LAB_00422d8a;
              }
              bVar4 = false;
            }
            else {
              bVar5 = *(byte *)(iVar19 + 0x12) & 0xbf;
LAB_00422d8a:
              *(byte *)(iVar19 + 0x12) = bVar5;
            }
LAB_00422d8d:
            iVar12 = iVar12 + -1;
            iVar19 = iVar19 + 0x28;
          } while (-1 < iVar12);
          local_24 = local_24 + 1;
        } while (local_24 < 2);
        if (bVar4) {
LAB_00422db3:
          iVar19 = puVar10[5];
          piVar20 = (int *)puVar10[7];
          piVar15 = (int *)0x0;
          puVar10 = (undefined4 *)0x0;
          if (-1 < iVar19 + -1) {
            do {
              if ((*(byte *)((int)piVar20 + 0x12) & 0x40) != 0) {
                FUN_00420310(iVar13,*(undefined4 **)(*piVar20 + 0xc),0);
                piVar15 = FUN_0041a560(piVar15);
                puVar10 = *(undefined4 **)(*piVar20 + 8);
              }
              piVar20 = piVar20 + 10;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
          }
          FUN_00420310(iVar13,puVar10,0);
          puVar10 = FUN_0041a0a0(piVar1);
          if (puVar10 != (undefined4 *)0x0) {
            iVar13 = FUN_00410800((int)pbVar2);
            *(int **)(iVar13 + 0x10) = piVar15;
            iVar19 = FUN_00416fc0(param_2,iVar13,3);
            FUN_004389f0(this_00,param_1,param_2,iVar19);
            iVar13 = param_2[7];
            *(int *)(iVar13 + 4 + iVar19 * 0x28) = param_3;
            iVar9 = iVar9 + iVar13;
            *(undefined1 *)(iVar9 + 0x13) = 1;
            *(undefined2 *)(iVar9 + 0x10) = 0;
            return;
          }
          FUN_0040e580();
          *(undefined2 *)(uVar17 + 0x10) = 0;
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x00422a40 */
