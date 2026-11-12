/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10090230
 * Name: FUN_10090230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10090230(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int local_10 [4];
  
  if ((char)param_1[1] != '\0') {
    if (param_1[0x60] == 0) {
      puVar2 = &DAT_10140c7c;
      do {
        local_10[0] = 0;
        local_10[1] = 0;
        local_10[2] = 0;
        local_10[3] = 0;
        FUN_10087260(puVar2,*(undefined4 *)(param_1[8] + 0x24),local_10,0xffffffff);
        iVar1 = local_10[2] - local_10[0];
        if (local_10[2] - local_10[0] < param_1[0x60]) {
          iVar1 = param_1[0x60];
        }
        puVar2 = puVar2 + 3;
        param_1[0x60] = iVar1;
      } while ((int)puVar2 < 0x10140c9a);
      (**(code **)(*param_1 + 0x4c))();
    }
    FUN_1008ee80(param_2,param_3);
    iVar1 = *(int *)(param_1[8] + 4);
    if (iVar1 != 0) {
      _DAT_10180635 = FUN_10086b40(*(undefined4 *)(iVar1 + 4));
      _DAT_10181a49 = FUN_10086b40(*(undefined4 *)(iVar1 + 4));
    }
    if (DAT_1017f6b0 != '\0') {
      (**(code **)(*param_1 + 0x58))(param_2,param_3);
      (**(code **)(*param_1 + 0x54))(param_2,param_3);
      if (DAT_1017f696 != '\0') {
        (**(code **)(*param_1 + 0x50))(param_2,param_3,1);
        return;
      }
      if (DAT_10181a6b != '\0') {
        (**(code **)(*param_1 + 0x50))(param_2,param_3,0);
      }
    }
  }
  return;
}


/* END FUNCTION 0x10090230 */
