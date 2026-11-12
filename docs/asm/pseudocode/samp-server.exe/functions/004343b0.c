/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004343b0
 * Name: FUN_004343b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004343b0(int *param_1)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_00407e50(*(int *)(*param_1 + 0x44));
  uVar1 = FUN_0042fb50();
  FUN_00419b40(-1,0,0,0,0,0);
  uVar1 = FUN_004340c0(uVar1);
  FUN_00407e90(*(int *)(*param_1 + 0x44));
  return uVar1;
}


/* END FUNCTION 0x004343b0 */
