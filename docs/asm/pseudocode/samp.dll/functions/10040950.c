/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040950
 * Name: FUN_10040950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10040950(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10115243;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1011ae80;
  local_4 = 0xe;
  FUN_1003a420();
  FUN_100400e0(0,0);
  FUN_100541e0();
  FUN_10054880();
  local_4._0_1_ = 0xd;
  FUN_10039200();
  local_4._0_1_ = 0xc;
  FUN_10039080();
  FUN_1003ab90();
  local_4._0_1_ = 10;
  FUN_100511a0();
  local_4._0_1_ = 9;
  FUN_10038ec0();
  local_4._0_1_ = 8;
  FUN_10038cc0();
  local_4._0_1_ = 7;
  FUN_10038b50();
  local_4._0_1_ = 6;
  FUN_10038a50();
  local_4._0_1_ = 5;
  FUN_100532b0();
  local_4._0_1_ = 4;
  FUN_100532b0();
  local_4._0_1_ = 3;
  _eh_vector_destructor_iterator_(param_1 + 0xd1,0x18,1,FUN_100532b0);
  local_4._0_1_ = 2;
  FUN_1003c740();
  local_4._0_1_ = 1;
  FUN_1001f390();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1001f390();
  *param_1 = &PTR_LAB_1011ad58;
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10040950 */
