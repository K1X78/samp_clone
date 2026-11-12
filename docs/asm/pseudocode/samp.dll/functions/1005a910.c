/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005a910
 * Name: FUN_1005a910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1005a910(int param_1,undefined4 param_2)

{
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115ea8;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_1005a020(local_28,param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1000b3a0(local_28,0,0xffffffff);
  if (0xf < local_10) {
    _free(local_24);
  }
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x1005a910 */
