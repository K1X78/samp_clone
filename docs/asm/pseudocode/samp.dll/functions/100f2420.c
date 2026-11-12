/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2420
 * Name: FUN_100f2420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100f2420(int param_1,uint param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  undefined1 local_50 [4];
  char *local_4c;
  char *local_48;
  undefined1 local_43;
  int local_40;
  undefined1 local_3c [4];
  byte *pbStack_38;
  byte *pbStack_34;
  undefined1 uStack_2f;
  int iStack_2c;
  undefined1 local_28 [4];
  uint local_24;
  uint local_20;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  
  uVar12 = *(uint *)(param_3 + 4);
  uVar5 = *(uint *)(param_3 + 8);
  uVar13 = 0;
  if (uVar12 < uVar5) {
    do {
      local_54 = FUN_100f1a40(local_28,uVar12,uVar5);
      uVar12 = local_24;
      if (local_24 < local_20) {
        do {
          local_58 = FUN_100f1a40(local_14,uVar12,local_20);
          uVar4 = local_c;
          uVar6 = FUN_100f1a40(local_50,local_10,local_c);
          FUN_100f1a40(local_3c,uVar6,uVar4);
          if (local_40 != 0) {
            return 0xffffffff;
          }
          switch(local_43) {
          case 1:
            if ((int)local_48 - (int)local_4c == 1) {
              pcVar11 = "TRUE";
              if (*local_4c == '\0') {
                pcVar11 = "FALSE";
              }
              pcVar11 = (char *)(*(code *)PTR___strdup_101554c4)(pcVar11);
            }
            else {
              pcVar11 = (char *)0x0;
            }
            break;
          case 2:
          case 10:
            pcVar11 = (char *)FUN_100f1c90();
            break;
          case 3:
            if (local_4c + 1 <= local_48) goto LAB_100f252f;
            pcVar11 = (char *)0x0;
            break;
          case 4:
LAB_100f252f:
            pcVar11 = (char *)FUN_100f1c10();
            break;
          case 5:
            pcVar11 = (char *)(*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
            break;
          case 6:
            pcVar11 = (char *)FUN_100f20e0(local_4c,1);
            break;
          default:
            return 0xffffffff;
          case 0xc:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x16:
          case 0x1a:
          case 0x1c:
          case 0x1e:
            iVar7 = FUN_100f1cf0(&local_64,local_48);
            pcVar11 = (char *)((iVar7 < 0) - 1 & local_64);
            break;
          case 0x17:
            pcVar11 = (char *)FUN_100f2250();
            break;
          case 0x18:
            pcVar11 = (char *)FUN_100f2160(local_48);
          }
          if (pcVar11 == (char *)0x0) {
            return 0xffffffff;
          }
          if (uVar13 == 0) {
            uVar13 = 0;
          }
          else {
            iVar7 = _isupper((int)*pcVar11);
            pcVar14 = pcVar11;
            while (iVar7 != 0) {
              pcVar1 = pcVar14 + 1;
              pcVar14 = pcVar14 + 1;
              iVar7 = _isupper((int)*pcVar1);
            }
            if ((*pcVar14 != '\0') ||
               (puVar8 = (undefined2 *)&DAT_101185d4, 2 < (int)pcVar14 - (int)pcVar11)) {
              puVar8 = &DAT_10117694;
            }
            do {
              if (uVar13 < param_2) {
                *(undefined1 *)(param_1 + uVar13) = *(undefined1 *)puVar8;
              }
              pcVar14 = (char *)((int)puVar8 + 1);
              uVar13 = uVar13 + 1;
              puVar8 = (undefined2 *)((int)puVar8 + 1);
            } while (*pcVar14 != '\0');
          }
          cVar2 = *pcVar11;
          pcVar14 = pcVar11;
          while (cVar2 != '\0') {
            if (uVar13 < param_2) {
              *(char *)(param_1 + uVar13) = *pcVar14;
            }
            pcVar1 = pcVar14 + 1;
            uVar13 = uVar13 + 1;
            pcVar14 = pcVar14 + 1;
            cVar2 = *pcVar1;
          }
          (*(code *)PTR__free_101554bc)(pcVar11);
          pbVar3 = pbStack_34;
          pbVar9 = pbStack_38;
          if (uVar13 < param_2) {
            *(undefined1 *)(param_1 + uVar13) = 0x3d;
          }
          uVar13 = uVar13 + 1;
          if (iStack_2c != 0) {
            return 0xffffffff;
          }
          uStack_60 = uVar13;
          switch(uStack_2f) {
          case 1:
            if ((int)pbStack_34 - (int)pbStack_38 == 1) {
              pcVar11 = "TRUE";
              if (*pbStack_38 == 0) {
                pcVar11 = "FALSE";
              }
              pcVar11 = (char *)(*(code *)PTR___strdup_101554c4)(pcVar11);
            }
            else {
              pcVar11 = (char *)0x0;
            }
            break;
          case 2:
          case 10:
            uVar12 = 0;
            if (pbStack_34 == pbStack_38) {
              pcVar11 = (char *)0x0;
            }
            else {
              if (4 < (uint)((int)pbStack_34 - (int)pbStack_38)) goto LAB_100f26c7;
              if ((char)*pbStack_38 < '\0') {
                uVar12 = 0xffffffff;
              }
              do {
                uVar12 = uVar12 << 8 | (uint)*pbVar9;
                pbVar9 = pbVar9 + 1;
              } while (pbVar9 < pbStack_34);
              if (((int)uVar12 < 0) || (puVar10 = &DAT_10117a39, 9 < (int)uVar12)) {
                puVar10 = &DAT_1012a538;
              }
              pcVar11 = (char *)FUN_100cd220("%s%lx",puVar10,uVar12);
            }
            break;
          case 3:
            if (pbStack_34 < pbStack_38 + 1) {
              pcVar11 = (char *)0x0;
            }
            else {
LAB_100f26c7:
              pcVar11 = (char *)FUN_100f1c10();
            }
            break;
          case 4:
            pcVar11 = (char *)FUN_100f1c10();
            break;
          case 5:
            pcVar11 = (char *)(*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
            break;
          case 6:
            pcVar11 = (char *)0x0;
            if (((pbStack_38 < pbStack_34) &&
                (iVar7 = FUN_100f1f20(0,0xffffffff,pbStack_38,pbStack_34), uVar13 = uStack_60,
                -1 < iVar7)) &&
               (pcVar11 = (char *)(*(code *)PTR__malloc_101554b8)(iVar7 + 1), uVar13 = uStack_60,
               pcVar11 != (char *)0x0)) {
              FUN_100f1f20(pcVar11,iVar7,pbVar9,pbVar3);
              pcVar11[iVar7] = '\0';
              iVar7 = FUN_100f1b60(pcVar11);
              uVar13 = uStack_60;
              if (iVar7 != 0) {
                (*(code *)PTR__free_101554bc)(pcVar11);
                pcVar11 = (char *)(*(code *)PTR___strdup_101554c4)(*(undefined4 *)(iVar7 + 4));
                uVar13 = uStack_60;
              }
            }
            break;
          default:
            goto switchD_100f24be_caseD_7;
          case 0xc:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x16:
          case 0x1a:
          case 0x1c:
          case 0x1e:
            iVar7 = FUN_100f1cf0(&uStack_5c,pbStack_34);
            pcVar11 = (char *)(uStack_5c & (iVar7 < 0) - 1);
            break;
          case 0x17:
            pcVar11 = (char *)FUN_100f2250();
            break;
          case 0x18:
            pcVar11 = (char *)FUN_100f2160(pbStack_34);
          }
          if (pcVar11 == (char *)0x0) {
switchD_100f24be_caseD_7:
            return 0xffffffff;
          }
          cVar2 = *pcVar11;
          pcVar14 = pcVar11;
          while (cVar2 != '\0') {
            if (uVar13 < param_2) {
              *(char *)(param_1 + uVar13) = *pcVar14;
            }
            pcVar1 = pcVar14 + 1;
            uVar13 = uVar13 + 1;
            pcVar14 = pcVar14 + 1;
            cVar2 = *pcVar1;
          }
          (*(code *)PTR__free_101554bc)(pcVar11);
          uVar12 = local_58;
        } while (local_58 < local_20);
      }
      uVar5 = *(uint *)(param_3 + 8);
      uVar12 = local_54;
    } while (local_54 < uVar5);
  }
  return uVar13;
}


/* END FUNCTION 0x100f2420 */
