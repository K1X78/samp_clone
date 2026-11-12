/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064dd0
 * Name: FUN_10064dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10064dd0(undefined4 *param_1)

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
  *(undefined4 *)((int)param_1 + 0x931) = 0x100;
  return param_1;
}


/* END FUNCTION 0x10064dd0 */
