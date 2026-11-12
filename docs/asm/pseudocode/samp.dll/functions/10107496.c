/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10107496
 * Name: write_string
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall write_string(undefined2 *param_1,int param_2)

{
  int *in_EAX;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    do {
      if (param_2 < 1) {
        return;
      }
      param_2 = param_2 + -1;
      write_char(*param_1);
      param_1 = param_1 + 1;
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_2;
  }
  return;
}


/* END FUNCTION 0x10107496 */
