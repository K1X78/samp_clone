/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405bf0
 * Name: FUN_00405bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_00405bf0(int *param_1,uint *param_2)

{
  double dVar1;
  uint local_40;
  char local_3c [60];
  
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,(int *)&local_40);
  if ((local_40 != 0) && (local_40 < 0x3c)) {
    FUN_00403350((int)local_3c,param_2,0,0x3c);
    dVar1 = _atof(local_3c);
    return (float)dVar1;
  }
  return 0.0;
}


/* END FUNCTION 0x00405bf0 */
