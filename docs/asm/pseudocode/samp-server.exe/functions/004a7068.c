/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a7068
 * Name: __fassign
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __fassign(int flag,char *argument,char *number)

{
  _CRT_DOUBLE local_c;
  
  if (flag != 0) {
    FID_conflict___atodbl(&local_c,number);
    *(undefined4 *)argument = local_c.x._0_4_;
    *(undefined4 *)(argument + 4) = local_c.x._4_4_;
    return;
  }
  FID_conflict___atodbl((_CRT_FLOAT *)&flag,number);
  *(int *)argument = flag;
  return;
}


/* END FUNCTION 0x004a7068 */
