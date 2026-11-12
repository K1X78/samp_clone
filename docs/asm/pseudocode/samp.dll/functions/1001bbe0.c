/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001bbe0
 * Name: FUN_1001bbe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001bbe0(undefined4 *param_1)

{
  int iVar1;
  ushort local_124 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113afb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_124,0x10,1);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
  if (((local_124[0] < 0x835) && (*(int *)(iVar1 + 4 + (uint)local_124[0] * 4) != 0)) &&
     (*(int *)(iVar1 + 0x20d4 + (uint)local_124[0] * 4) != 0)) {
    FUN_100a7c20();
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001bbe0 */
