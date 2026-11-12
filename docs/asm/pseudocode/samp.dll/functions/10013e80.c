/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013e80
 * Name: FUN_10013e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 * __fastcall FUN_10013e80(undefined2 *param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10113346;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xd) = 0xf;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = 0;
  local_4 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x7eb);
  do {
    puVar4[-0x3ec] = 0;
    *puVar4 = 0;
    uVar1 = uVar1 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar1 < 0x3ec);
  pvVar2 = operator_new(0x328);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10004af0();
  }
  *(undefined4 *)(param_1 + 0xf) = uVar3;
  *(undefined4 *)(param_1 + 0x179d) = 0;
  *(undefined4 *)(param_1 + 0x179b) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10013e80 */
