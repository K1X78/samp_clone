/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004035c0
 * Name: FUN_004035c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_004035c0(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 *local_4;
  
  iVar1 = FUN_00403150(param_1,param_5,param_2,(int *)&local_4);
  if (iVar1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_4;
    }
    for (; param_5 != 0; param_5 = param_5 + -1) {
      *local_4 = *param_4;
      param_4 = param_4 + 1;
      local_4 = local_4 + 1;
    }
    FUN_00401c50(param_1,*param_2);
  }
  return;
}


/* END FUNCTION 0x004035c0 */
