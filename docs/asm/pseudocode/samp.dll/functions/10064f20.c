/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064f20
 * Name: FUN_10064f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10064f20(int *param_1,undefined4 param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1011600b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(char *)((int)param_1 + 0x13) != '\0') {
    ExceptionList = &pvStack_c;
    (**(code **)(*param_1 + 8))();
  }
  pvVar1 = operator_new(8);
  piVar2 = (int *)0x0;
  uStack_4 = 0;
  if (pvVar1 != (void *)0x0) {
    piVar2 = (int *)FUN_10064bf0(param_2,1,0);
  }
  param_1[5] = (int)piVar2;
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar2 + 8))((int)param_1 + 0x19,*(int *)((int)param_1 + 0x119) * 2 + 8);
  (**(code **)(*piVar2 + 8))((int)param_1 + 0x111,8);
  *(uint *)((int)param_1 + 0x111) =
       *(uint *)((int)param_1 + 0x111) ^ *(uint *)((int)param_1 + 0x115);
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  if (((*(uint *)((int)param_1 + 0x111) & 0xfffff) == 0x83433) &&
     ((*(uint *)((int)param_1 + 0x111) & 0x700000) == 0x200000)) {
    ExceptionList = unaff_EDI;
    return 1;
  }
  (**(code **)(*param_1 + 8))();
  ExceptionList = unaff_EDI;
  return 0;
}


/* END FUNCTION 0x10064f20 */
