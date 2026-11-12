/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10001900
 * Name: FUN_10001900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10001900(int param_1,ushort *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011262b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 4 + (uint)*param_2 * 4) != 0) {
    ExceptionList = &local_c;
    FUN_10067b60(DAT_102aca10,"Warning: actor %u was not deleted",(uint)*param_2);
    FUN_100016f0(*param_2);
  }
  pvVar1 = operator_new(0x56);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1009bd30(*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 5),
                         *(undefined4 *)(param_2 + 7),*(undefined4 *)(param_2 + 9),
                         *(undefined4 *)(param_2 + 0xb));
  }
  *(undefined4 *)(param_1 + 4 + (uint)*param_2 * 4) = uVar2;
  iVar3 = *(int *)(param_1 + 4 + (uint)*param_2 * 4);
  local_4 = 0xffffffff;
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1f44 + (uint)*param_2 * 4) = *(undefined4 *)(iVar3 + 0x48);
  *(undefined4 *)(param_1 + 0xfa4 + (uint)*param_2 * 4) = 1;
  FUN_1009c050(*(undefined4 *)(param_2 + 0xd));
  FUN_1009c180((char)param_2[0xf] != '\0');
  *(undefined4 *)(param_1 + 0x2ee4 + (uint)*param_2 * 4) = 1;
  *(undefined4 *)(param_1 + 0x3e84 + (uint)*param_2 * 4) = 0;
  FUN_10001660();
  if (((DAT_102aca28 != 0) && (20000 < *(int *)(param_2 + 3))) &&
     ((iVar3 = FUN_100b39d0(*(int *)(param_2 + 3)), iVar3 != 0 ||
      (iVar3 = FUN_1000ce30(*(undefined4 *)(param_2 + 3)), iVar3 != 0)))) {
    FUN_1009ed90(*(undefined4 *)(param_2 + 3));
  }
  ExceptionList = local_c;
  return 1;
}


/* END FUNCTION 0x10001900 */
