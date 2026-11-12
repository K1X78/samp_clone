/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008e750
 * Name: FUN_1008e750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1008e750(undefined4 *param_1,undefined4 param_2)

{
  FUN_1008dcc0(0);
  *param_1 = &PTR_FUN_1011d550;
  param_1[0xc] = 9;
  param_1[6] = param_2;
  *(undefined1 *)((int)param_1 + 0x4d) = 1;
  SetRect((LPRECT)((int)param_1 + 0x4e),0,0,0,0);
  SetRect((LPRECT)((int)param_1 + 0x5e),0,0,0,0);
  SetRect((LPRECT)((int)param_1 + 0x6e),0,0,0,0);
  SetRect((LPRECT)((int)param_1 + 0x7e),0,0,0,0);
  *(undefined8 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 1;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 1;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  return param_1;
}


/* END FUNCTION 0x1008e750 */
