/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a3f97
 * Name: write_string
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl write_string(int param_1)

{
  int *in_EAX;
  FILE *unaff_EDI;
  
  if (((unaff_EDI->_flag & 0x40) == 0) || (unaff_EDI->_base != (char *)0x0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      write_char(unaff_EDI);
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}


/* END FUNCTION 0x004a3f97 */
