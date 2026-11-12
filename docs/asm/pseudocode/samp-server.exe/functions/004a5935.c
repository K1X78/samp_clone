/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a5935
 * Name: __freeptd
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __freeptd(void *param_1)

{
  if (DAT_004ec4d4 != -1) {
    if (param_1 == (void *)0x0) {
      param_1 = (void *)(*DAT_0051c3b0)(DAT_004ec4d4);
    }
    __freefls_4(param_1);
    (*DAT_0051c3b4)(DAT_004ec4d4,0);
  }
  return;
}


/* END FUNCTION 0x004a5935 */
