/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10068ec0
 * Name: FUN_10068ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10068ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0x14e0) == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      GetClientRect(_DAT_00c97c1c,&local_10);
      iVar3 = FUN_100f9324();
      if (800 < iVar3) {
        iVar3 = 800;
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x38))(1);
      (**(code **)(**(int **)(param_1 + 8) + 0x40))(1);
      iVar4 = *(int *)(DAT_102aca10 + 0x12e);
      piVar1 = *(int **)(param_1 + 8);
      piVar1[2] = 0x28;
      piVar1[3] = iVar4;
      (**(code **)(*piVar1 + 0x4c))();
      FUN_10086b40(0);
      iVar4 = FUN_100f9324();
      piVar1 = *(int **)(param_1 + 8);
      piVar1[4] = iVar3;
      piVar1[5] = 0xe - iVar4;
      (**(code **)(*piVar1 + 0x4c))();
      FUN_100844b0(*(undefined4 *)(param_1 + 8));
      (**(code **)(**(int **)(param_1 + 8) + 0x20))();
      iVar4 = *(int *)(DAT_102aca10 + 0x12e);
      iVar2 = *(int *)(param_1 + 4);
      *(int *)(iVar2 + 0x11e) = iVar3 + 100;
      *(int *)(iVar2 + 0x122) = iVar4 + 0x32;
    }
    *(undefined4 *)(param_1 + 0x14e0) = 1;
  }
  return;
}


/* END FUNCTION 0x10068ec0 */
