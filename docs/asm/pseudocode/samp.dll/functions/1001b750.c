/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001b750
 * Name: FUN_1001b750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001b750(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113a7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_124,0x10,1);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e);
  if ((((ushort)local_124[0] < 0x835) && (*(int *)(iVar1 + 4 + (local_124[0] & 0xffff) * 4) != 0))
     && (iVar1 = *(int *)(iVar1 + 0x20d4 + (local_124[0] & 0xffff) * 4), iVar1 != 0)) {
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2de) == iVar1)) {
      *(undefined4 *)(iVar2 + 0x2de) = 0;
      *(undefined4 *)(iVar2 + 0x2e6) = 0;
    }
    FUN_10012750(local_124[0]);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001b750 */
