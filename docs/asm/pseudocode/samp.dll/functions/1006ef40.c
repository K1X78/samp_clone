/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006ef40
 * Name: FUN_1006ef40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006ef40(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  tagRECT local_10;
  
  iVar6 = *(int *)(param_1 + 0x14) * 2 + 0x1e;
  if (*(int *)(param_1 + 0xc) < iVar6) {
    *(int *)(param_1 + 0xc) = iVar6;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar6 + 0x11e) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar6 + 0x122) = uVar1;
  GetClientRect(_DAT_00c97c1c,&local_10);
  iVar5 = local_10.right / 2 - *(int *)(param_1 + 0xc) / 2;
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar3 = local_10.bottom / 2 - *(int *)(param_1 + 0x10) / 2;
  *(int *)(param_1 + 4) = iVar5;
  *(int *)(param_1 + 8) = iVar3;
  *(int *)(iVar6 + 0x116) = iVar5;
  *(int *)(iVar6 + 0x11a) = iVar3;
  iVar6 = *(int *)(param_1 + 0x10) - *(int *)(*(int *)(param_1 + 0x1c) + 0x126);
  piVar4 = (int *)FUN_10086cf0(0x15,0);
  cVar2 = (**(code **)(*piVar4 + 0x44))();
  if (cVar2 == '\0') {
    piVar4 = (int *)FUN_10086cf0(0x14,0);
    iVar3 = *(int *)(param_1 + 0x18);
    piVar4[2] = *(int *)(param_1 + 0xc) / 2 - *(int *)(param_1 + 0x14) / 2;
    piVar4[3] = (iVar6 - iVar3) + -5;
    (**(code **)(*piVar4 + 0x4c))();
  }
  else {
    piVar4 = (int *)FUN_10086cf0(0x14,0);
    iVar3 = *(int *)(param_1 + 0x18);
    piVar4[2] = (*(int *)(param_1 + 0xc) / 2 - *(int *)(param_1 + 0x14)) + -10;
    piVar4[3] = (iVar6 - iVar3) + -5;
    (**(code **)(*piVar4 + 0x4c))();
    piVar4 = (int *)FUN_10086cf0(0x15,0);
    iVar3 = *(int *)(param_1 + 0x18);
    piVar4[2] = *(int *)(param_1 + 0xc) / 2 + 10;
    piVar4[3] = (iVar6 - iVar3) + -5;
    (**(code **)(*piVar4 + 0x4c))();
  }
  FUN_10086b40(0);
  iVar5 = FUN_100f9324();
  piVar4 = *(int **)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0xc);
  piVar4[5] = 0xe - iVar5;
  piVar4[4] = iVar3 + -10;
  (**(code **)(*piVar4 + 0x4c))();
  FUN_10086b40(0);
  iVar5 = FUN_100f9324();
  iVar3 = *(int *)(param_1 + 0x18);
  piVar4 = *(int **)(param_1 + 0x24);
  piVar4[2] = 5;
  piVar4[3] = ((iVar6 - iVar5) - iVar3) + -0x18;
  (**(code **)(*piVar4 + 0x4c))();
  return;
}


/* END FUNCTION 0x1006ef40 */
