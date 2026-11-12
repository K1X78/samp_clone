/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0810
 * Name: FUN_100e0810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e0810(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *unaff_retaddr;
  undefined1 local_4 [4];
  
  *param_4 = 0;
  if (DAT_102acd10 == (code *)0x0) {
    DAT_102acd10 = (code *)FUN_100e0620(0);
  }
  iVar2 = (*DAT_102acd10)(param_1,param_2,param_3,local_4);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (unaff_EBP != (undefined4 *)0x0) {
    iVar2 = 0;
    puVar6 = (undefined4 *)0x0;
    puVar7 = unaff_EBP;
    do {
      puVar3 = puVar6;
      if ((((puVar7[1] == 2) && (puVar7[6] != 0)) && (puVar7[4] != 0)) && (0xf < (uint)puVar7[4])) {
        puVar3 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(0x20);
        if (puVar3 == (undefined4 *)0x0) {
          iVar2 = 8;
          break;
        }
        *puVar3 = *puVar7;
        puVar3[1] = puVar7[1];
        puVar3[2] = puVar7[2];
        puVar3[3] = puVar7[3];
        puVar3[4] = 0x10;
        puVar3[6] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        puVar4 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(0x10);
        puVar3[6] = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          iVar2 = 8;
          (*(code *)PTR__free_101554bc)(puVar3);
          break;
        }
        puVar1 = (undefined4 *)puVar7[6];
        *puVar4 = *puVar1;
        puVar4[1] = puVar1[1];
        puVar4[2] = puVar1[2];
        puVar4[3] = puVar1[3];
        if (puVar7[5] != 0) {
          iVar5 = (*(code *)PTR___strdup_101554c4)(puVar7[5]);
          puVar3[5] = iVar5;
          if (iVar5 == 0) {
            iVar2 = 8;
            (*(code *)PTR__free_101554bc)(puVar3[6]);
            (*(code *)PTR__free_101554bc)(puVar3);
            break;
          }
        }
        if (param_3 == (undefined4 *)0x0) {
          param_3 = puVar3;
        }
        if (puVar6 != (undefined4 *)0x0) {
          puVar6[7] = puVar3;
        }
      }
      puVar7 = (undefined4 *)puVar7[7];
      puVar6 = puVar3;
    } while (puVar7 != (undefined4 *)0x0);
    if (unaff_EBP != (undefined4 *)0x0) {
      if (DAT_102acd14 == (code *)0x0) {
        DAT_102acd14 = (code *)FUN_100e0620(2);
      }
      (*DAT_102acd14)(unaff_EBP);
    }
    if (iVar2 != 0) {
      FUN_100e07d0(param_3);
      *unaff_retaddr = 0;
      return iVar2;
    }
    iVar2 = 0;
    if (param_3 != (undefined4 *)0x0) goto LAB_100e09d3;
  }
  iVar2 = 0x2af9;
  WSASetLastError(0x2af9);
LAB_100e09d3:
  *unaff_retaddr = param_3;
  return iVar2;
}


/* END FUNCTION 0x100e0810 */
