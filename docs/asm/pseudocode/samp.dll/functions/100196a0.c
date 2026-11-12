/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100196a0
 * Name: FUN_100196a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100196a0(undefined4 *param_1)

{
  byte local_12d;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011371b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_12d = 0;
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  FUN_1001f470(&local_12d,8,1);
  if ((local_12d == 0) || (2 < local_12d)) {
    local_12d = 2;
  }
  FUN_1009d620(local_12c,local_128,local_124[0],local_12d);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100196a0 */
