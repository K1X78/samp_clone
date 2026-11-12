/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006f2d0
 * Name: FUN_1006f2d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006f2d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(DAT_102aca14 + 0x14e0) == 0)) &&
     (*DAT_102ac9dc == 0)) {
    FUN_100a0530(2,0);
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_10090360(0x41200000);
      FUN_1006f0f0(&local_10);
      if ((*(int *)(param_1 + 0x34) != 0) &&
         (((iVar2 = *(int *)(param_1 + 0x2c), iVar2 == 1 || (iVar2 == 0)) || (iVar2 == 3)))) {
        FUN_1006af20(0,*(int *)(param_1 + 0x34),local_10 + 0x14,
                     local_c + 5 + *(int *)(*(int *)(param_1 + 0x1c) + 0x126),local_8,local_4,0x140,
                     0xffa9c4e4,1);
        return;
      }
      if (*(int *)(param_1 + 0x2c) == 5) {
        local_c = local_c + 3 + *(int *)(*(int *)(param_1 + 0x1c) + 0x126);
        iVar4 = local_10 + 0x10;
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x85)) {
          local_14 = (int *)(param_1 + 0x28d);
          iVar3 = param_1 + 0x89;
          do {
            FUN_1006af20(0,iVar3,iVar4,local_c,local_8,local_4,0x120,0xffa9c4e4,1);
            iVar1 = *local_14;
            local_14 = local_14 + 1;
            iVar4 = iVar4 + iVar1;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x81;
          } while (iVar2 < *(int *)(param_1 + 0x85));
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x1006f2d0 */
