/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00492100
 * Name: FUN_00492100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00492100(char *param_1)

{
  char local_200 [512];
  
  if (DAT_004fc430 != (FILE *)0x0) {
    _vsprintf(local_200,param_1,&stack0x00000008);
    _fprintf(DAT_004fc430,"%s\n",local_200);
    _fflush(DAT_004fc430);
  }
  return;
}


/* END FUNCTION 0x00492100 */
