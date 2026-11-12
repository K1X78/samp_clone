/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070f20
 * Name: FUN_10070f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10070f20(int param_1)

{
  uint local_124;
  undefined1 local_120 [252];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101161eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_124 = (uint)*(ushort *)(param_1 + 8);
  local_4 = 0;
  FUN_1001faa0(&local_124,0x10,1);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_101182f8,local_120,1,9,0,0);
  uStack_1c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_24;
  return;
}


/* END FUNCTION 0x10070f20 */
