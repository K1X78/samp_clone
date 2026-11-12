/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004061f0
 * Name: FUN_004061f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004061f0(int *param_1,uint *param_2)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_00403100(param_1,param_2[1],(int *)&param_2);
  if (iVar1 == 0) {
    FUN_004031d0(param_2,&local_4);
  }
  return local_4;
}


/* END FUNCTION 0x004061f0 */
