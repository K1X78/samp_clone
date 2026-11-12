/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415d40
 * Name: FUN_00415d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00415d40(int param_1,int param_2)

{
  int in_EAX;
  
  if ((param_2 != param_1) && (0 < in_EAX)) {
    do {
      FUN_00414e70(param_2,0xe);
      param_2 = param_2 + 1;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  return;
}


/* END FUNCTION 0x00415d40 */
