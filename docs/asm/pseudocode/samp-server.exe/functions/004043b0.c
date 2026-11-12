/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004043b0
 * Name: FUN_004043b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004043b0(int *param_1,int param_2)

{
  int *local_10;
  int local_c;
  int *local_8;
  int local_4;
  
  FUN_00403990();
  FUN_00403840(&local_c,&local_4);
  FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_10);
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
  if (local_10 != (int *)0x0) {
    *local_10 = local_c;
  }
  if (local_8 != (int *)0x0) {
    *local_8 = local_4;
  }
  return 0;
}


/* END FUNCTION 0x004043b0 */
