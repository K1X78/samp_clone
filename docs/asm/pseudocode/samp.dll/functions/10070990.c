/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070990
 * Name: FUN_10070990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10070990(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 8) = DAT_102aca2c;
  }
  FUN_10070690();
  return param_1;
}


/* END FUNCTION 0x10070990 */
