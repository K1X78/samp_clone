/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10018250
 * Name: FUN_10018250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10018250(undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined1 local_125;
  ushort local_124 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011347b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_125 = 0;
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f470(&local_125,8,1);
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if (puVar1 != (ushort *)0x0) {
    if (local_124[0] == *puVar1) {
      iVar2 = **(int **)(puVar1 + 0xf);
    }
    else {
      if ((0x3eb < local_124[0]) || (*(int *)(puVar1 + (uint)local_124[0] * 2 + 0x7eb) == 0))
      goto LAB_10018320;
      if (*(int *)(puVar1 + (uint)local_124[0] * 2 + 0x13) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(puVar1 + (uint)local_124[0] * 2 + 0x13) + 8);
      }
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (iVar2 != 0) {
      FUN_100adcd0(local_125);
    }
  }
LAB_10018320:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10018250 */
