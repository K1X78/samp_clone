/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10019240
 * Name: FUN_10019240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10019240(undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined1 local_125;
  ushort local_124 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011367b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_4 = 0;
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f470(&local_125,8,1);
  if (local_124[0] == *puVar1) {
    *(undefined1 *)(*(int *)(puVar1 + 0xf) + 0x130) = local_125;
  }
  else if (((local_124[0] < 0x3ed) && (*(int *)(puVar1 + (uint)local_124[0] * 2 + 0x13) != 0)) &&
          (iVar2 = *(int *)(*(int *)(puVar1 + (uint)local_124[0] * 2 + 0x13) + 8), iVar2 != 0)) {
    *(undefined1 *)(iVar2 + 0x19) = local_125;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10019240 */
