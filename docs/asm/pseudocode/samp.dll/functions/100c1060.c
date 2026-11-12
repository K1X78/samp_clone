/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c1060
 * Name: FUN_100c1060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c1060(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  return;
}


/* END FUNCTION 0x100c1060 */
