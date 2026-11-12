/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004340c0
 * Name: FUN_004340c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_004340c0(uint param_1)

{
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    if ((*(char *)(unaff_ESI + 0x1e) != '\0') || (param_1 == 0xc0a)) {
      FUN_0042f990(7,(undefined **)0x0);
      *(undefined1 *)(unaff_ESI + 0x1e) = 0;
      param_1 = 7;
    }
    return *(uint *)(unaff_ESI + 0x18) & param_1;
  }
  return param_1 & 0xff;
}


/* END FUNCTION 0x004340c0 */
