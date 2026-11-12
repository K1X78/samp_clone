/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001c850
 * Name: FUN_1001c850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001c850(undefined4 *param_1)

{
  uint local_488;
  undefined4 local_484;
  undefined1 local_480 [340];
  undefined1 local_32c [800];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113c7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_488 = 0;
  local_4 = 0;
  if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x20) != 0) {
    FUN_1001f470(&local_484,0x10,1);
    FUN_1001f960(local_480,0x3f);
    FUN_1001f470(&local_488,0x10,1);
    if ((ushort)local_488 < 800) {
      FUN_1001f960(local_32c,local_488 & 0xffff);
      local_32c[local_488 & 0xffff] = 0;
      FUN_1001e3d0(local_484,local_480,local_32c);
    }
    else if (DAT_102aca10 != 0) {
      FUN_10067ae0(DAT_102aca10,"Warning: ignoring large TextDraw size=%u",local_488 & 0xffff);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001c850 */
