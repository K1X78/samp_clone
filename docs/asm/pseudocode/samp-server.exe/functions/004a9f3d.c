/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9f3d
 * Name: __security_check_cookie
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: This is an inlined function */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_004ec7b4) {
    return;
  }
  report_failure();
  return;
}


/* END FUNCTION 0x004a9f3d */
