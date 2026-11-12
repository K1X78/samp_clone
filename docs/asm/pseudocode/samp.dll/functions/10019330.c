/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10019330
 * Name: FUN_10019330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10019330(undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  ushort local_128 [2];
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011369b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_4 = 0;
  FUN_1001f470(local_128,0x10,1);
  FUN_1001f470(local_124,0x20,1);
  if (local_128[0] == *puVar1) {
    FUN_10003de0(local_124[0]);
  }
  else if (((local_128[0] < 0x3ed) &&
           (iVar2 = *(int *)(puVar1 + (uint)local_128[0] * 2 + 0x13), iVar2 != 0)) &&
          (*(int *)(iVar2 + 8) != 0)) {
    FUN_10015e00(local_124[0]);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10019330 */
