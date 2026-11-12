/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009d210
 * Name: FUN_1009d210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009d210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1009cc10(param_1,param_2,param_3,param_4,param_5);
  (&DAT_10188df8)[DAT_1018dc18 * 5] = param_1;
  (&DAT_10188dfc)[DAT_1018dc18 * 5] = param_2;
  (&DAT_10188e00)[DAT_1018dc18 * 5] = param_3;
  (&DAT_10188e04)[DAT_1018dc18 * 5] = param_4;
  (&DAT_10188e08)[DAT_1018dc18 * 5] = param_5;
  DAT_1018dc18 = DAT_1018dc18 + 1;
  return;
}


/* END FUNCTION 0x1009d210 */
