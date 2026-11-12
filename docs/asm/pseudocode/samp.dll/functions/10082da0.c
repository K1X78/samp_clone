/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10082da0
 * Name: FUN_10082da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10082da0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_4;
  
  puVar1 = param_2;
  iVar4 = 0;
  if (0 < *(int *)((int)param_1 + 0x1d)) {
    do {
      local_4 = *(undefined4 *)(*(int *)((int)param_1 + 0x19) + iVar4 * 4);
      iVar2 = (**(code **)(*(int *)*param_1 + 0x2c))
                        ((int *)*param_1,*puVar1,puVar1[1],puVar1[3],puVar1[4],local_4,&param_2);
      if (-1 < iVar2) {
        FUN_10082b10(&local_4);
        puVar3 = (undefined4 *)(*(int *)((int)param_1 + 0x4d) + 1);
        if (puVar3 < param_2) {
          param_2 = puVar3;
        }
        FUN_10082ca0(&param_2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)param_1 + 0x1d));
  }
  return;
}


/* END FUNCTION 0x10082da0 */
