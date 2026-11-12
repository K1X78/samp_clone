/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d82b0
 * Name: FUN_100d82b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d82b0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_ESI;
  int iVar5;
  undefined8 uVar6;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  local_8 = 0;
  uVar6 = FUN_100d8500();
  if (param_1 != 0) {
    iVar5 = FUN_100d81f0();
    if (iVar5 != 1) {
      for (puVar1 = *(undefined4 **)(unaff_ESI + 4); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        FUN_100d5ef0();
      }
    }
    return iVar5;
  }
  if (param_2 == -1) {
    *(undefined4 *)(unaff_ESI + 0xec) = 0;
    *(undefined4 *)(unaff_ESI + 0xf0) = 0;
  }
  else {
    param_1 = param_2;
    piVar3 = (int *)FUN_100e43c0(unaff_ESI + 0x60,&param_1,4);
    if (piVar3 != (int *)0x0) {
      iVar5 = *piVar3;
      if (*(int *)(iVar5 + 0x4c00) != -0x3f212453) {
        return 4;
      }
      iVar2 = *(int *)(iVar5 + 8);
      if (iVar2 != 0) {
        if (((param_3 & 2) == 0) || (*(int **)(iVar2 + 0x398) == (int *)0x0)) {
          if (((param_3 & 1) != 0) && (*(int **)(iVar2 + 0x3a8) != (int *)0x0)) {
            iVar5 = **(int **)(iVar2 + 0x3a8);
          }
        }
        else {
          iVar5 = **(int **)(iVar2 + 0x398);
        }
      }
      iVar2 = *(int *)(iVar5 + 8);
      if ((iVar2 != 0) && ((*(byte *)(*(int *)(iVar2 + 800) + 0x44) & 8) == 0)) {
        *(uint *)(iVar2 + 0x610) = param_3;
      }
      local_8 = FUN_100d6ff0();
      iVar5 = *(int *)(iVar5 + 8);
      if ((iVar5 != 0) && ((*(byte *)(*(int *)(iVar5 + 800) + 0x44) & 8) == 0)) {
        *(undefined4 *)(iVar5 + 0x610) = 0;
      }
      if (local_8 < 1) {
        FUN_100d5ef0();
      }
      iVar5 = 0;
      uVar6 = FUN_100d8500();
    }
  }
  do {
    if ((iVar5 != 0) && (local_8 = FUN_100d6ff0(), local_8 < 1)) {
      FUN_100d5ef0();
    }
    uVar4 = FUN_100ee5f0(uVar6,*(undefined4 *)(unaff_ESI + 0x5c),&local_4);
    *(undefined4 *)(unaff_ESI + 0x5c) = uVar4;
    if (local_4 == 0) break;
    iVar5 = *(int *)(local_4 + 0x18);
    FUN_100d6260(uVar6);
  } while (local_4 != 0);
  *param_4 = *(undefined4 *)(unaff_ESI + 0x10);
  return local_8;
}


/* END FUNCTION 0x100d82b0 */
