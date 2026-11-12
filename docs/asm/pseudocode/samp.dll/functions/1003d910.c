/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003d910
 * Name: FUN_1003d910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_1003d910(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115033;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011ae80;
  FUN_1001f1f0();
  local_4._0_1_ = 1;
  FUN_1001f1f0();
  FUN_1003abf0();
  local_4._0_1_ = 3;
  _eh_vector_constructor_iterator_(param_1 + 0xd1,0x18,1,FUN_100532a0,FUN_100532b0);
  local_4._0_1_ = 4;
  FUN_100532a0();
  local_4._0_1_ = 5;
  FUN_100532a0();
  FUN_10038a40();
  FUN_10038b40();
  local_4._0_1_ = 8;
  FUN_10038c40();
  local_4._0_1_ = 9;
  FUN_10038e50();
  local_4._0_1_ = 10;
  FUN_100510f0();
  FUN_1003ab90();
  local_4._0_1_ = 0xc;
  FUN_10039010();
  local_4._0_1_ = 0xd;
  FUN_100391d0();
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_10054150();
  FUN_10054820();
  *(undefined1 *)(param_1 + 0x360) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x3d1);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x7e5) = 0;
  *(undefined4 *)((int)param_1 + 0x7e1) = 0;
  *(undefined4 *)((int)param_1 + 0x7dd) = 0;
  *(undefined4 *)((int)param_1 + 0x7d9) = 0;
  *(undefined4 *)((int)param_1 + 0x7d1) = 0;
  *(undefined4 *)((int)param_1 + 0x7d5) = 0;
  *(undefined4 *)((int)param_1 + 0xc01) = 0x240;
  *(undefined1 *)((int)param_1 + 0xc05) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)((int)param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 7) = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)((int)param_1 + 0x361) = 0;
  *(undefined4 *)((int)param_1 + 0x35d) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 0xc0a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x22d) = DAT_1013c7cc;
  *(undefined2 *)((int)param_1 + 0x231) = DAT_1013c7d0;
  *(undefined8 *)((int)param_1 + 0xc1e) = 0;
  *(undefined1 *)((int)param_1 + 0xdad) = 0;
  *(undefined1 *)((int)param_1 + 0xc19) = 0;
  *(undefined1 *)((int)param_1 + 0x333) = 0;
  *(undefined4 *)((int)param_1 + 0xc1a) = 0;
  *(undefined4 *)((int)param_1 + 0xdae) = 0;
  *(undefined4 *)((int)param_1 + 0xdb2) = 0;
  *(undefined2 *)((int)param_1 + 0xc26) = 0;
  *(undefined2 *)(param_1 + 0x30a) = 0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x1003d910 */
