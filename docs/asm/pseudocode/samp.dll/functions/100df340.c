/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100df340
 * Name: FUN_100df340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100df340(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  iVar1 = *param_1;
  do {
    for (; (pbVar3 = param_2, iVar5 = _isspace((uint)*param_2), iVar5 != 0 || (*param_2 == 0x2c));
        param_2 = param_2 + 1) {
    }
    bVar4 = *param_2;
    iVar5 = 0;
    if (bVar4 != 0) {
      iVar10 = 1;
      do {
        if (bVar4 == 0x2c) break;
        iVar6 = _isspace((uint)bVar4);
        if (iVar6 == 0) {
          iVar5 = iVar10;
        }
        bVar4 = param_2[1];
        param_2 = param_2 + 1;
        iVar10 = iVar10 + 1;
      } while (bVar4 != 0);
    }
    if ((param_3 == 0) || (iVar5 != 7)) {
      if (iVar5 != 0) goto LAB_100df3ec;
    }
    else {
      iVar5 = FUN_100de8c0(pbVar3,"chunked",7);
      if (iVar5 == 0) {
LAB_100df3ec:
        puVar7 = (undefined *)FUN_100df2d0(pbVar3);
        if (*(int *)(iVar1 + 0xfc) == 0) {
          puVar8 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(8);
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
            puVar8[1] = 0;
            *puVar8 = &DAT_10125a68;
            puVar8[1] = 0;
            iVar5 = FUN_100df130(param_1,puVar8);
            if (iVar5 != 0) {
              (*(code *)PTR__free_101554bc)(puVar8);
              puVar8 = (undefined4 *)0x0;
            }
          }
          *(undefined4 **)(iVar1 + 0xfc) = puVar8;
          if (puVar8 == (undefined4 *)0x0) {
            return 0x1b;
          }
        }
        if (puVar7 == (undefined *)0x0) {
          puVar7 = &DAT_10125a80;
        }
        uVar2 = *(undefined4 *)(iVar1 + 0xfc);
        uVar11 = *(int *)(puVar7 + 0x14) + 8;
        puVar8 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(uVar11);
        if (puVar8 == (undefined4 *)0x0) {
          return 0x1b;
        }
        puVar12 = puVar8;
        for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar12 = 0;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        *puVar8 = puVar7;
        puVar8[1] = uVar2;
        iVar5 = (**(code **)(puVar7 + 8))(param_1,puVar8);
        if (iVar5 != 0) {
          (*(code *)PTR__free_101554bc)(puVar8);
          return 0x1b;
        }
        *(undefined4 **)(iVar1 + 0xfc) = puVar8;
      }
      else {
        *(undefined4 *)(iVar1 + 0x130) = 1;
        FUN_100f1570(param_1);
      }
    }
    if (*param_2 == 0) {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x100df340 */
