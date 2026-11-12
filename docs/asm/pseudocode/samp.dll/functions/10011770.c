/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10011770
 * Name: FUN_10011770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10011770(undefined4 *param_1)

{
  char local_125;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101131eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_125 = '\0';
  local_124[0] = 0xffff;
  FUN_10008110(&local_125);
  FUN_1001f470(local_124,0x10,1);
  if ((DAT_102ac9f4 != (int *)0x0) && (*DAT_102ac9f4 != 0)) {
    FUN_1006d5c0(0);
  }
  if ((DAT_102ac9f8 != (int *)0x0) && (*DAT_102ac9f8 != 0)) {
    FUN_10070fc0();
  }
  FUN_10071ec0(local_124[0],local_125 != '\0');
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10011770 */
