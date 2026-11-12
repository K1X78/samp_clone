/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001b950
 * Name: FUN_1001b950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001b950(undefined4 *param_1)

{
  int iVar1;
  char local_125;
  ushort local_124 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113abb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f470(&local_125,8,1);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if ((local_124[0] < 0x3ec) && (*(int *)((uint)local_124[0] * 4 + 0xfd6 + iVar1) != 0)) {
    iVar1 = *(int *)((uint)local_124[0] * 4 + 0x26 + iVar1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    *(uint *)(iVar1 + 0x10) = (uint)(local_125 != '\0');
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001b950 */
