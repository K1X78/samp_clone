/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10101d34
 * Name: ___lc_lctostr
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void ___lc_lctostr(undefined4 param_1,int param_2)

{
  FUN_10103c90(param_1,param_2);
  if (*(char *)(param_2 + 0x40) != '\0') {
    __strcats(param_1,2,&DAT_10117f48,(char *)(param_2 + 0x40));
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    __strcats(param_1,2,&DAT_101183bc,(char *)(param_2 + 0x80));
  }
  return;
}


/* END FUNCTION 0x10101d34 */
