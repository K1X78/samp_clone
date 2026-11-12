/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010270a
 * Name: write_string
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void write_string(int param_1)

{
  int *in_EAX;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      write_char();
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}


/* END FUNCTION 0x1010270a */
