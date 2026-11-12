/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004174c0
 * Name: FUN_004174c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004174c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int local_18;
  int local_10;
  int local_c;
  
  piVar1 = (int *)*param_1;
  iVar2 = param_1[2];
  iVar3 = *piVar1;
  piVar4 = (int *)piVar1[3];
  FUN_0040eb00();
  local_10 = param_1[6];
  if (-1 < local_10 + -1) {
    piVar9 = param_1 + (local_10 + -1) * 0x10 + 0x16;
    do {
      FUN_0040d4e0((int)piVar4,piVar9[-4]);
      if (*(char *)((int)piVar9 + -7) != -0x78) {
        FUN_00414e70(piVar9[-1],*(char *)((int)piVar9 + -7));
        FUN_0040d660(extraout_ECX,*(undefined1 *)((int)piVar9 + -6));
      }
      if (((piVar9[-0xc] & 0xf1000U) != 0) && (0 < piVar9[1])) {
        FUN_0040d4e0((int)piVar4,piVar9[-5]);
        iVar10 = piVar9[1];
        puVar12 = (undefined4 *)(piVar9[2] + -8 + iVar10 * 8);
        if (0 < iVar10) {
          do {
            FUN_0040d680(piVar4);
            FUN_00414e70(*puVar12,0x43);
            FUN_0040d680(piVar4);
            puVar12 = puVar12 + -2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        FUN_00408130(iVar3);
      }
      FUN_0040d4e0((int)piVar4,piVar9[-6]);
      if (piVar9[-9] != 0) {
        FUN_00414e50(0x71);
        if ((piVar9[-0xc] & 0x800000U) == 0) {
          FUN_00414e50(0x3e);
        }
        if (-1 < piVar9[-7]) {
          FUN_00414e50(0x3e);
        }
        if (*(char *)((int)piVar9 + -7) == '\x03') {
          iVar10 = piVar9[-1];
          uVar8 = 2;
        }
        else {
          iVar10 = 0;
          uVar8 = 1;
        }
        FUN_00414e70(iVar10,uVar8);
        FUN_0040d680(piVar4);
      }
      piVar9 = piVar9 + -0x10;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  FUN_0040d4e0((int)piVar4,param_1[5]);
  local_c = 0;
  puVar11 = (uint *)(param_1 + 10);
  if (0 < param_1[6]) {
    do {
      iVar10 = *(int *)((uint)(byte)puVar11[10] * 0x38 + 0x14 + iVar2);
      if ((((*(byte *)(iVar10 + 0x22) & 2) == 0) && (*(int *)(iVar10 + 0x1c) == 0)) &&
         ((*(byte *)(param_1 + 1) & 0x20) == 0)) {
        uVar5 = *puVar11;
        if ((*(char *)((int)param_1 + 6) == '\0') && ((uVar5 & 0x800000) == 0)) {
          FUN_00414e50(0x2b);
        }
        if (((uVar5 & 0xf0000) != 0) && ((uVar5 & 0x20000000) == 0)) {
          FUN_00414e50(0x2b);
        }
      }
      if (((*puVar11 & 0xf0000) != 0) && (*(char *)(iVar3 + 0x1e) == '\0')) {
        uVar5 = puVar11[2];
        iVar10 = param_1[3];
        FUN_0040d6f0(piVar4);
        local_18 = FUN_0040d5c0();
        if (iVar10 < local_18) {
          local_18 = local_18 - iVar10;
          pcVar7 = extraout_ECX_00;
          do {
            if (*(uint *)(pcVar7 + 4) == puVar11[4]) {
              if (*pcVar7 == '\x1c') {
                iVar10 = *(int *)(uVar5 + 4);
                iVar6 = 0;
                if (0 < iVar10) {
                  piVar9 = *(int **)(uVar5 + 8);
                  do {
                    if (*(int *)(pcVar7 + 8) == *piVar9) {
                      *(int *)(pcVar7 + 8) = iVar6;
                      *(uint *)(pcVar7 + 4) = puVar11[5];
                      break;
                    }
                    iVar6 = iVar6 + 1;
                    piVar9 = piVar9 + 1;
                  } while (iVar6 < iVar10);
                }
              }
              else if (*pcVar7 == '=') {
                *(uint *)(pcVar7 + 4) = puVar11[5];
                *pcVar7 = 'H';
              }
            }
            pcVar7 = pcVar7 + 0x14;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
      }
      local_c = local_c + 1;
      puVar11 = puVar11 + 0x10;
    } while (local_c < param_1[6]);
  }
  *(undefined8 *)(piVar1 + 0x70) = *(undefined8 *)(param_1 + 8);
  FUN_00417430(iVar3);
  return;
}


/* END FUNCTION 0x004174c0 */
