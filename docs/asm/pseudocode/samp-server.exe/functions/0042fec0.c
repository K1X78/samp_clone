/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042fec0
 * Name: FUN_0042fec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0042fec0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0042fd70();
  if (iVar1 == 0) {
    FUN_0040d360(param_3,param_4);
    FUN_00407e90(*(int *)(*param_1 + 0x44));
  }
  return iVar1;
}


/* END FUNCTION 0x0042fec0 */
