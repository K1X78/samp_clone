/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00460940
 * Name: FUN_00460940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00460940(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b124e;
  pvStack_c = ExceptionList;
  local_4 = 0xb;
  ExceptionList = &pvStack_c;
  FUN_00460910(param_1,'\x01');
  local_4._0_1_ = 10;
  FUN_0044eb80(param_1 + 0x1ca);
  local_4._0_1_ = 9;
  FUN_0045b9a0(param_1 + 0x1c3);
  local_4._0_1_ = 8;
  FUN_00463800();
  local_4._0_1_ = 7;
  FUN_0045bc40(param_1 + 0x109);
  local_4._0_1_ = 6;
  FUN_0044d9b0((int)(param_1 + 0x30));
  local_4._0_1_ = 5;
  FUN_0045d510(param_1 + 0x2a);
  local_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(param_1 + 0x1a,0x10,4,FUN_0045bc40);
  local_4._0_1_ = 3;
  FUN_0045bc40(param_1 + 0x16);
  local_4._0_1_ = 2;
  FUN_0045f360(param_1 + 0x10);
  local_4._0_1_ = 1;
  FUN_0045f310(param_1 + 7);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045bc40(param_1 + 3);
  local_4 = 0xffffffff;
  FUN_0045b9a0(param_1);
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x00460940 */
