/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4180
 * Name: FUN_100c4180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c4180(int param_1)

{
  undefined1 local_38 [56];
  
  FUN_100c1f50();
  FUN_100be1b0(param_1 + 0xc5);
  FUN_100c1850(local_38);
  FUN_100c1e50(param_1,local_38);
  FUN_100c1a00(param_1 + 0x30529);
  FUN_100c2230();
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x3baf1) = 0;
  return;
}


/* END FUNCTION 0x100c4180 */
