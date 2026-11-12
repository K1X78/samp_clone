/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bb820
 * Name: FUN_100bb820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bb820(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_2c [4];
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  char local_17;
  undefined4 local_16;
  undefined4 local_12;
  undefined1 local_e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101168a8;
  local_c = ExceptionList;
  local_24 = (void *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_17 = '\0';
  local_e = 0;
  local_12 = 0;
  local_16 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 0;
  }
  local_28 = 0x504d4153;
  ExceptionList = &local_c;
  FUN_100bc150(&local_28,4);
  local_2c[0] = 1;
  FUN_100bc150(local_2c,1);
  local_28 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14);
  FUN_100bc150(&local_28,4);
  FUN_100bc250();
  local_28 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14);
  FUN_100bc150(&local_28,4);
  FUN_100bc150(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc),
               *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14));
  uVar1 = FUN_100bc0c0(param_2);
  if ((local_17 != '\0') && (local_24 != (void *)0x0)) {
    _free(local_24);
  }
  ExceptionList = local_c;
  return uVar1;
}


/* END FUNCTION 0x100bb820 */
