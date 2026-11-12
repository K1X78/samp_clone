/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032920
 * Name: FUN_10032920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_10032920(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    pvVar5 = operator_new(0xc);
    *(void **)(param_1 + 4) = pvVar5;
    pvVar5 = operator_new(0xc);
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_10032490();
    }
    **(undefined4 **)(param_1 + 4) = uVar6;
    iVar1 = **(int **)(param_1 + 4);
    FUN_10033300(param_2);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = 0;
    return *(int **)(param_1 + 4);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  do {
    while (puVar7 = puVar3, cVar4 = FUN_10032470(*puVar7), cVar4 != '\0') {
      puVar3 = (undefined4 *)puVar7[1];
      if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
        pvVar5 = operator_new(0xc);
        puVar7[1] = pvVar5;
        pvVar5 = operator_new(0xc);
        if (pvVar5 == (void *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_10032490();
        }
        *(undefined4 *)puVar7[1] = uVar6;
        piVar2 = (int *)puVar7[1];
        piVar2[1] = 0;
        piVar2[2] = 0;
        iVar1 = *piVar2;
        FUN_10033300(param_2);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 8);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        return piVar2;
      }
    }
    cVar4 = FUN_10032450(*puVar7);
    if (cVar4 == '\0') {
      return (int *)0x0;
    }
    puVar3 = (undefined4 *)puVar7[2];
  } while ((undefined4 *)puVar7[2] != (undefined4 *)0x0);
  pvVar5 = operator_new(0xc);
  puVar7[2] = pvVar5;
  pvVar5 = operator_new(0xc);
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_10032490();
  }
  *(undefined4 *)puVar7[2] = uVar6;
  piVar2 = (int *)puVar7[2];
  piVar2[1] = 0;
  piVar2[2] = 0;
  iVar1 = *piVar2;
  FUN_10033300(param_2);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return piVar2;
}


/* END FUNCTION 0x10032920 */
