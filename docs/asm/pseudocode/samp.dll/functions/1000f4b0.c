/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000f4b0
 * Name: FUN_1000f4b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000f4b0(undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  ushort local_12c [2];
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112eeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_12c,0x10,1);
  FUN_1001f470(local_124,0x20,1);
  FUN_1001f470(&local_128,0x10,1);
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if (puVar1 != (ushort *)0x0) {
    if (local_12c[0] == *puVar1) {
      iVar2 = FUN_10001010();
      if (iVar2 == 0) goto LAB_1000f5ad;
    }
    else if ((((0x3eb < local_12c[0]) || (*(int *)(puVar1 + (uint)local_12c[0] * 2 + 0x7eb) == 0))
             || (*(int *)(puVar1 + (uint)local_12c[0] * 2 + 0x13) == 0)) ||
            (((iVar2 = *(int *)(*(int *)(puVar1 + (uint)local_12c[0] * 2 + 0x13) + 8), iVar2 == 0 ||
              (*(int *)(iVar2 + 4) == 0)) || (*(char *)(iVar2 + 0x1a) == '\0')))) goto LAB_1000f5ad;
    FUN_100ae050(local_124[0],local_128);
  }
LAB_1000f5ad:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000f4b0 */
