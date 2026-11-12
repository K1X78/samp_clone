/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10082e20
 * Name: FUN_10082e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10082e20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  if (0 < (int)param_2[6]) {
    do {
      uVar1 = *(undefined4 *)(param_2[5] + local_18 * 4);
      iVar4 = 0;
      if (0 < (int)param_2[9]) {
        do {
          uVar2 = *(undefined4 *)(param_2[8] + iVar4 * 4);
          iVar3 = (**(code **)(*(int *)*param_1 + 0x2c))
                            ((int *)*param_1,*param_2,param_2[1],uVar1,param_2[4],uVar2,0);
          if (iVar3 < 0) {
            uStack_10 = uVar1;
            uStack_c = uVar2;
            FUN_10082ce0(&uStack_10);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)param_2[9]);
      }
      local_18 = local_18 + 1;
    } while (local_18 < (int)param_2[6]);
  }
  return;
}


/* END FUNCTION 0x10082e20 */
