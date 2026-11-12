/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010161d
 * Name: __fassign
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __fassign(int flag,char *argument,char *number)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (flag != 0) {
    FID_conflict___atodbl(&local_c);
    *(undefined4 *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
    return;
  }
  FID_conflict___atodbl(&flag,number);
  *(int *)argument = flag;
  return;
}


/* END FUNCTION 0x1010161d */
