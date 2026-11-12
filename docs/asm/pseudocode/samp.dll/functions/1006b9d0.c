/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006b9d0
 * Name: FUN_1006b9d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006b9d0(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStackY_b0 [3];
  undefined4 auStack_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101160cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_100a0770();
  if ((iVar1 != 0) && (*param_1 != 0)) {
    FUN_100b1840();
    FUN_100b14f0();
    FUN_100b1520();
    FUN_100b17c0();
    FUN_100c54f0();
    FUN_100c54f0();
    FUN_100c54f0();
    auStackY_b0[2] = 0x1006ba79;
    pvVar2 = operator_new(0x119c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_100a8d00();
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar3 + 4))();
    FUN_1009ee80();
    FUN_1009e950();
    FUN_100b52d0();
    FUN_100b52d0();
    puVar4 = auStack_4c;
    puVar5 = auStackY_b0;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_1009fb40();
    FUN_1009ed90();
    FUN_1009f960();
    (**(code **)*piVar3)();
    FUN_100b1550();
    FUN_100b1800();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1006b9d0 */
