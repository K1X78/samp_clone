/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10001d10
 * Name: FUN_10001d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10001d10(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011264b;
  local_c = ExceptionList;
  if (DAT_102aca24 != 0) {
    ExceptionList = &local_c;
    FUN_1001f1f0();
    local_4 = 0;
    switch(param_4) {
    case 1:
      uVar2 = FUN_100b37d0(param_1);
      uVar3 = FUN_1001e650(uVar2);
      if ((uVar3 & 0xffff) != 0xffff) {
        local_124 = uVar3 & 0xffff;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_2;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_3;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_4;
        FUN_1001faa0(&local_124,0x20,1);
        (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117690,local_120,1,10,0,0);
      }
      break;
    case 2:
      uVar2 = FUN_100b37d0(param_1);
      uVar3 = FUN_1001e650(uVar2);
      if ((uVar3 & 0xffff) != 0xffff) {
        local_124 = uVar3 & 0xffff;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_2;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_3;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_4;
        FUN_1001faa0(&local_124,0x20,1);
        (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117690,local_120,1,10,0,0);
      }
      break;
    case 3:
      uVar2 = FUN_100b37d0(param_1);
      uVar3 = FUN_1001e650(uVar2);
      uVar3 = uVar3 & 0xffff;
      if (uVar3 != 0xffff) {
        local_124 = uVar3;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_2;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_3;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_4;
        FUN_1001faa0(&local_124,0x20,1);
        (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117690,local_120,1,10,0,0);
        iVar4 = FUN_10001120(uVar3);
        if (iVar4 != 0) {
          FUN_100b6e20(param_2,param_3);
        }
      }
      break;
    case 4:
      uVar2 = FUN_100b37d0(param_1);
      uVar3 = FUN_1001e650(uVar2);
      uVar3 = uVar3 & 0xffff;
      iVar4 = FUN_10001120(uVar3);
      if (uVar3 != 0xffff) {
        local_124 = uVar3;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_2;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_3;
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = param_4;
        FUN_1001faa0(&local_124,0x20,1);
        (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117690,local_120,1,10,0,0);
        if ((iVar4 != 0) && (iVar1 = *(int *)(iVar4 + 0x4c), iVar1 != 0)) {
          if (param_2 == 0) {
            FUN_100b6e20(*(undefined1 *)(iVar1 + 0x434),*(undefined1 *)(iVar1 + 0x435));
            *(undefined4 *)(iVar4 + 0x71) = 0;
          }
          else {
            *(undefined4 *)(iVar4 + 0x71) = 1;
          }
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10001d10 */
