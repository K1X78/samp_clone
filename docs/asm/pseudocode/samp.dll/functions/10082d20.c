/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10082d20
 * Name: FUN_10082d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10082d20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = param_2;
  iVar4 = 0;
  if (0 < *(int *)((int)param_1 + 0x11)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 0xd) + iVar4 * 4);
      param_2 = (undefined4 *)uVar1;
      iVar3 = (**(code **)(*(int *)*param_1 + 0x28))
                        ((int *)*param_1,*puVar2,puVar2[1],puVar2[2],2,1,uVar1);
      if ((-1 < iVar3) &&
         (iVar3 = (**(code **)(*(int *)*param_1 + 0x30))
                            ((int *)*param_1,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar1),
         -1 < iVar3)) {
        FUN_10082ad0(&param_2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)param_1 + 0x11));
  }
  return;
}


/* END FUNCTION 0x10082d20 */
