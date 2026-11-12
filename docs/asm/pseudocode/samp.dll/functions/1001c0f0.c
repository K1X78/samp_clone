/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001c0f0
 * Name: FUN_1001c0f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001c0f0(undefined4 *param_1)

{
  int iVar1;
  ushort local_128 [2];
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113bbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_1001f470(local_128,0x10,1);
    FUN_1001f470(local_124,0x10,1);
    if ((local_128[0] < 2000) && (*(int *)(iVar1 + 0x3074 + (uint)local_128[0] * 4) != 0)) {
      FUN_100b7be0(local_124[0]);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001c0f0 */
