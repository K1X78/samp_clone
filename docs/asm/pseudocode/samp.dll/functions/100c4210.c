/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4210
 * Name: FUN_100c4210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c4210(int param_1,int param_2)

{
  (**(code **)(param_2 + 4))(param_2,*(undefined4 *)(param_1 + 0x60));
  (**(code **)(param_2 + 4))(param_2,*(undefined4 *)(param_1 + 0x3baf1));
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x3baf1) = 0;
  return;
}


/* END FUNCTION 0x100c4210 */
