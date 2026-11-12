/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100647b0
 * Name: FUN_100647b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100647b0(int *param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(char *)((int)param_1 + 0x13) != '\0') {
    (**(code **)(*param_1 + 8))();
  }
  piVar1 = operator_new(0x11);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_FUN_1011ba94;
    *(undefined1 *)(piVar1 + 4) = 1;
    piVar1[2] = 0;
    piVar1[3] = param_3;
    puVar2 = _malloc(param_3);
    uVar3 = param_3 >> 2;
    piVar1[1] = (int)puVar2;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  param_1[5] = (int)piVar1;
  (**(code **)(*piVar1 + 8))((int)param_1 + 0x19,*(int *)((int)param_1 + 0x119) * 2 + 8);
  (**(code **)(*piVar1 + 8))((int)param_1 + 0x111,8);
  *(uint *)((int)param_1 + 0x111) =
       *(uint *)((int)param_1 + 0x111) ^ *(uint *)((int)param_1 + 0x115);
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  if (((*(uint *)((int)param_1 + 0x111) & 0xfffff) == 0x83433) &&
     ((*(uint *)((int)param_1 + 0x111) & 0x700000) == 0x200000)) {
    return 0x83401;
  }
  uVar3 = (**(code **)(*param_1 + 8))();
  return uVar3 & 0xffffff00;
}


/* END FUNCTION 0x100647b0 */
