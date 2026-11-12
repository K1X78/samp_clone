/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ff40
 * Name: FUN_0042ff40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0042ff40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042fd70();
  if (iVar1 == 0) {
    FUN_0040d330();
    FUN_00407e90(*(int *)(*param_1 + 0x44));
  }
  return iVar1;
}


/* END FUNCTION 0x0042ff40 */
