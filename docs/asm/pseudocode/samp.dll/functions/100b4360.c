/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4360
 * Name: FUN_100b4360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4360(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_50 [15];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116738;
  local_c = ExceptionList;
  puVar2 = local_50;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  iVar1 = *(int *)(_DAT_00b74498 + 4);
  iVar3 = 14000;
  ExceptionList = &local_c;
  do {
    if ((iVar1 != 0) && (param_1 == *(short *)(iVar1 + 0x22))) {
      local_14 = iVar1;
      FUN_1009f240();
      FUN_1009ed90(param_2);
    }
    iVar1 = iVar1 + 0x38;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100b4360 */
