/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b0710
 * Name: FUN_100b0710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b0710(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_4c [48];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101166bb;
  local_c = ExceptionList;
  piVar7 = *(int **)(param_1 + 0x2a4);
  if ((((piVar7 != (int *)0x0) && (*piVar7 != 0x863c40)) && (piVar7[6] != 0)) &&
     ((-1 < param_2 && (param_2 < 10)))) {
    if ((0 < param_3[1]) && (param_3[1] < 0x13)) {
      ExceptionList = &local_c;
      iVar2 = FUN_100aeab0(param_2);
      if (iVar2 != 0) {
        FUN_100aea50(param_2);
      }
      FUN_1009e950(local_4c);
      iVar2 = param_2 * 0x34 + param_1;
      piVar6 = (int *)(iVar2 + 0x74);
      piVar7 = param_3;
      piVar8 = piVar6;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      if ((*piVar6 < 0) && (DAT_102aca28 != 0)) {
        cVar1 = FUN_1000ccc0(*piVar6);
        if (cVar1 != '\0') {
          cVar1 = FUN_1000cd00(*piVar6);
          if (cVar1 == '\0') {
            iVar5 = FUN_1000ce90(*piVar6);
            if (iVar5 == 0) {
              *piVar6 = 0x48c7;
            }
          }
        }
      }
      pvVar3 = operator_new(0x119c);
      local_4 = 0;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_100a8d00(*piVar6,local_1c,local_18,local_14,*(undefined4 *)(iVar2 + 0x88),
                             *(undefined4 *)(iVar2 + 0x8c),*(undefined4 *)(iVar2 + 0x90),0x43480000,
                             1,0,0);
      }
      *(undefined4 *)(param_1 + 0x27c + param_2 * 4) = uVar4;
      local_4 = 0xffffffff;
      if (param_3[0xb] != 0) {
        FUN_100a8120(0xffffffff,0,0,0,param_3[0xb]);
      }
      if (param_3[0xc] != 0) {
        FUN_100a8120(0xffffffff,1,0,0,param_3[0xc]);
      }
      FUN_1009f470(0);
      *(undefined4 *)(param_1 + 0x4c + param_2 * 4) = 1;
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100b0710 */
