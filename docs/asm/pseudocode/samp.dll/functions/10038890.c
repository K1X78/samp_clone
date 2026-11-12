/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038890
 * Name: FUN_10038890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10038890(int param_1,int param_2)

{
  char cVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    cVar1 = FUN_100331a0(&DAT_1013c7cc);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10038890 */
