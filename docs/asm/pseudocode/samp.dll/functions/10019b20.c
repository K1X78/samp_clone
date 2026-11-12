/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10019b20
 * Name: FUN_10019b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10019b20(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort local_124 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101137bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_124,0x10,1);
  if ((local_124[0] < 0x835) &&
     (*(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14) + 4 + (uint)local_124[0] * 4) != 0))
  {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e) + 0x318) = 1;
    iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
    if ((local_124[0] < 0x835) && (*(int *)(iVar1 + 4 + (uint)local_124[0] * 4) != 0)) {
      uVar2 = *(undefined4 *)(iVar1 + 0x20d4 + (uint)local_124[0] * 4);
    }
    else {
      uVar2 = 0;
    }
    FUN_1009d4a0(uVar2);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10019b20 */
