/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005660
 * Name: FUN_10005660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10005660(void)

{
  undefined1 local_12c [4];
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [252];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011276b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  local_12c[0] = FUN_100ac470(&local_128);
  FUN_1001faa0(local_12c,8,1);
  local_124 = local_128;
  FUN_1001faa0(&local_124,0x10,1);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117950,local_120,1,9,0,0);
  uStack_1c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_24;
  return;
}


/* END FUNCTION 0x10005660 */
