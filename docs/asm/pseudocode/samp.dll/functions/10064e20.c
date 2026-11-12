/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064e20
 * Name: FUN_10064e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10064e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10060500();
  *param_1 = &PTR_FUN_1011bae0;
  *(undefined4 *)((int)param_1 + 0x119) = 0x78;
  *(undefined4 *)((int)param_1 + 0x91d) = 0;
  *(undefined4 *)((int)param_1 + 0x921) = 0;
  *(undefined4 *)((int)param_1 + 0x925) = 0;
  *(undefined4 *)((int)param_1 + 0x929) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 0x931) = param_2;
  *(undefined4 *)((int)param_1 + 0x119) = param_3;
  return param_1;
}


/* END FUNCTION 0x10064e20 */
