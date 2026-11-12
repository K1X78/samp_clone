/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5400
 * Name: FUN_100c5400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c5400(undefined4 param_1)

{
  if (DAT_102aca70 != 0) {
    param_1 = 0;
  }
  if (DAT_102ac9d0 != (int *)0x0) {
    (**(code **)(*DAT_102ac9d0 + 0xe4))(DAT_102ac9d0,0x1c,param_1);
    (**(code **)(*DAT_102ac9d0 + 0xe4))(DAT_102ac9d0,0x23,0);
    (**(code **)(*DAT_102ac9d0 + 0xe4))(DAT_102ac9d0,0x8c,3);
  }
  return;
}


/* END FUNCTION 0x100c5400 */
