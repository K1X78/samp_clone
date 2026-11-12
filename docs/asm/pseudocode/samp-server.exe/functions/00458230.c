/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00458230
 * Name: FUN_00458230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00458230(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b0f93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004baaa8;
  local_4 = 0xe;
  FUN_00451b50((int)param_1);
  FUN_00457a30(param_1,0,0);
  FUN_004635f0();
  FUN_00463790();
  local_4._0_1_ = 0xd;
  FUN_0045bc40(param_1 + 0x37a);
  local_4._0_1_ = 0xc;
  FUN_00450dc0((int)(param_1 + 0x374));
  FUN_004522a0((int)(param_1 + 0x30f));
  local_4._0_1_ = 10;
  FUN_00460b00((int)(param_1 + 0x203));
  local_4._0_1_ = 9;
  FUN_00450c00((int)(param_1 + 0x1fd));
  local_4._0_1_ = 8;
  FUN_00450a10((int)(param_1 + 0xf1));
  local_4._0_1_ = 7;
  FUN_0045b9a0(param_1 + 0xee);
  local_4._0_1_ = 6;
  FUN_0045b9a0(param_1 + 0xeb);
  local_4._0_1_ = 5;
  FUN_00462990((LPCRITICAL_SECTION)(param_1 + 0xe5));
  local_4._0_1_ = 4;
  FUN_00462990((LPCRITICAL_SECTION)(param_1 + 0xdf));
  local_4._0_1_ = 3;
  _eh_vector_destructor_iterator_(param_1 + 0xd3,0x18,1,FUN_00462990);
  local_4._0_1_ = 2;
  FUN_00453de0(param_1 + 0xd0);
  local_4._0_1_ = 1;
  FUN_0044d9b0((int)(param_1 + 0x48));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0044d9b0((int)(param_1 + 3));
  *param_1 = &PTR_LAB_004ba988;
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x00458230 */
