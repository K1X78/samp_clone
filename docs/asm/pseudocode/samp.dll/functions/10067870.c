/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067870
 * Name: FUN_10067870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10067870(int *param_1)

{
  if (*(int *)((int)param_1 + 0x11e) != 0) {
    if ((param_1[2] == 0) ||
       ((*(int *)(*(int *)((int)param_1 + 0x11e) + 0x8e) == 100 - *param_1 &&
        (*(int *)(DAT_102aca14 + 0x14e0) == 0)))) {
      (**(code **)(**(int **)((int)param_1 + 0x11e) + 0x40))(0);
    }
    else {
      (**(code **)(**(int **)((int)param_1 + 0x11e) + 0x40))(1);
    }
    if (param_1[2] != 0) {
      if ((*(int *)((int)param_1 + 0x63b2) != 0) && (*(int *)((int)param_1 + 0x63d6) != 0)) {
        (**(code **)(**(int **)((int)param_1 + 0x63aa) + 0x20))
                  (*(int **)((int)param_1 + 0x63aa),0x10);
        (**(code **)(**(int **)((int)param_1 + 0x63aa) + 0x24))
                  (*(int **)((int)param_1 + 0x63aa),*(undefined4 *)((int)param_1 + 0x63ba),0,0,0,
                   0xffffffff);
        (**(code **)(**(int **)((int)param_1 + 0x63aa) + 0x2c))(*(int **)((int)param_1 + 0x63aa));
        return;
      }
      (**(code **)(**(int **)((int)param_1 + 0x63a6) + 0x20))(*(int **)((int)param_1 + 0x63a6),0x10)
      ;
      FUN_100673b0();
      (**(code **)(**(int **)((int)param_1 + 0x63a6) + 0x2c))(*(int **)((int)param_1 + 0x63a6));
    }
  }
  return;
}


/* END FUNCTION 0x10067870 */
