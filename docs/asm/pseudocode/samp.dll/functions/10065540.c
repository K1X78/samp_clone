/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065540
 * Name: FUN_10065540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10065540(undefined4 *param_1,undefined4 *param_2,byte param_3)

{
  uint uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(byte *)(uVar1 + (int)param_1) = *(byte *)(uVar1 + (int)param_1) ^ param_3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
  }
  return;
}


/* END FUNCTION 0x10065540 */
