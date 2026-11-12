/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10018090
 * Name: FUN_10018090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10018090(undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort local_164 [2];
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011343b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_164,0x10,1);
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if (puVar1 != (ushort *)0x0) {
    if (local_164[0] == *puVar1) {
      iVar3 = **(int **)(puVar1 + 0xf);
    }
    else {
      if ((((0x3eb < local_164[0]) || (*(int *)(puVar1 + (uint)local_164[0] * 2 + 0x7eb) == 0)) ||
          (*(int *)(puVar1 + (uint)local_164[0] * 2 + 0x13) == 0)) ||
         (iVar2 = *(int *)(*(int *)(puVar1 + (uint)local_164[0] * 2 + 0x13) + 8), iVar2 == 0))
      goto LAB_1001816b;
      iVar3 = *(int *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 0x1cd) = 0;
    }
    if (iVar3 != 0) {
      FUN_1009e950(local_160);
      FUN_1009ee80(local_130,local_12c,local_128);
    }
  }
LAB_1001816b:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10018090 */
