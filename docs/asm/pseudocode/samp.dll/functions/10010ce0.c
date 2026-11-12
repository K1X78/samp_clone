/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10010ce0
 * Name: FUN_10010ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10010ce0(undefined4 *param_1)

{
  int iVar1;
  uint local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011310b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_124[0] = 0;
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_4 = 0;
  FUN_1001f470(local_124,0x10,1);
  if (iVar1 != 0) {
    if ((((ushort)local_124[0] < 0x3ed) &&
        (iVar1 = *(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x26 +
                         (local_124[0] & 0xffff) * 4), iVar1 != 0)) && (*(int *)(iVar1 + 8) != 0)) {
      FUN_10017040();
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10010ce0 */
