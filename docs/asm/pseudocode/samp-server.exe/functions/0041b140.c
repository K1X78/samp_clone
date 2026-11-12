/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b140
 * Name: FUN_0041b140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_0041b140(int *param_1,int *param_2,undefined4 *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  byte *extraout_ECX;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  int local_1c;
  int local_14;
  int *local_10;
  int local_c;
  
  iVar1 = param_1[0x80];
  iVar2 = *param_1;
  if ((iVar1 == 0) || ((char)param_1[0x85] != '\0')) goto LAB_0041b42f;
  if (param_2 == (int *)0x0) {
    if (*(int *)(iVar1 + 0xc) + -1 < 0) goto LAB_0041b42f;
    if ((param_4 != (int *)0x0) && (*param_4 != 1)) {
      FUN_00418b00((undefined **)"foreign key on %s should reference only one column of table %T");
      goto LAB_0041b42f;
    }
    local_1c = 1;
  }
  else {
    if ((param_4 != (int *)0x0) && (*param_4 != *param_2)) {
      FUN_00418b00((undefined **)
                   "number of columns in foreign key does not match the number of columns in the referenced table"
                  );
      goto LAB_0041b42f;
    }
    local_1c = *param_2;
  }
  if ((param_4 != (int *)0x0) && (local_c = *param_4, 0 < local_c)) {
    puVar9 = (undefined4 *)(param_4[3] + 4);
    do {
      FUN_00408380((char *)*puVar9);
      puVar9 = puVar9 + 5;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  piVar4 = FUN_00417b70();
  if (piVar4 != (int *)0x0) {
    *piVar4 = iVar1;
    piVar6 = piVar4 + local_1c * 2 + 9;
    piVar4[1] = *(int *)(iVar1 + 0x24);
    piVar4[2] = (int)piVar6;
    uVar8 = param_3[1];
    piVar10 = (int *)*param_3;
    piVar13 = piVar6;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *piVar13 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar13 = piVar13 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)piVar13 = (char)*piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      piVar13 = (int *)((int)piVar13 + 1);
    }
    *(undefined1 *)(param_3[1] + (int)piVar6) = 0;
    FUN_004083a0();
    puVar9 = (undefined4 *)(param_3[1] + 1 + (int)piVar6);
    piVar4[5] = local_1c;
    if (param_2 == (int *)0x0) {
      piVar4[9] = *(int *)(iVar1 + 0xc) + -1;
    }
    else {
      local_c = 0;
      if (0 < local_1c) {
        local_10 = piVar4 + 9;
        local_14 = 0;
        do {
          iVar11 = 0;
          if (0 < *(int *)(iVar1 + 0xc)) {
            pbVar3 = *(byte **)(param_2[3] + 4 + local_14);
            puVar12 = *(undefined4 **)(iVar1 + 0x10);
            do {
              iVar5 = FUN_00408450((byte *)*puVar12,pbVar3);
              if (iVar5 == 0) {
                *local_10 = iVar11;
                break;
              }
              iVar11 = iVar11 + 1;
              puVar12 = puVar12 + 6;
            } while (iVar11 < *(int *)(iVar1 + 0xc));
          }
          if (*(int *)(iVar1 + 0xc) <= iVar11) {
            FUN_00418b00((undefined **)"unknown column \"%s\" in foreign key definition");
            goto LAB_0041b42f;
          }
          local_c = local_c + 1;
          local_14 = local_14 + 0x14;
          local_10 = local_10 + 2;
        } while (local_c < local_1c);
      }
    }
    if ((param_4 != (int *)0x0) && (0 < local_1c)) {
      param_1 = piVar4 + 10;
      local_c = 0;
      local_10 = (int *)local_1c;
      do {
        uVar8 = FUN_00408380(*(char **)(local_c + 4 + param_4[3]));
        *param_1 = (int)puVar9;
        puVar12 = *(undefined4 **)(local_c + 4 + param_4[3]);
        puVar14 = puVar9;
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        *(undefined1 *)(uVar8 + (int)puVar9) = 0;
        puVar9 = (undefined4 *)(uVar8 + 1 + (int)puVar9);
        param_1 = param_1 + 2;
        local_c = local_c + 0x14;
        local_10 = (int *)((int)local_10 + -1);
      } while (local_10 != (int *)0x0);
    }
    *(char *)((int)piVar4 + 0x19) = (char)param_5;
    *(undefined1 *)(piVar4 + 6) = 0;
    *(char *)((int)piVar4 + 0x1a) = (char)((uint)param_5 >> 8);
    piVar6 = piVar4;
    FUN_00408380((char *)piVar4[2]);
    piVar6 = (int *)FUN_00412f40((void *)(*(int *)(iVar1 + 0x44) + 0x34),extraout_ECX,(int)piVar6);
    if (piVar6 == piVar4) {
      *(undefined1 *)(iVar2 + 0x1e) = 1;
    }
    else {
      if (piVar6 != (int *)0x0) {
        piVar4[3] = (int)piVar6;
        piVar6[4] = (int)piVar4;
      }
      *(int **)(iVar1 + 0x24) = piVar4;
    }
  }
LAB_0041b42f:
  FUN_00408130(iVar2);
  FUN_0040e580();
  FUN_0040e580();
  return;
}


/* END FUNCTION 0x0041b140 */
