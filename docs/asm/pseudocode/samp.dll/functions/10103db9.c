/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10103db9
 * Name: __security_check_cookie
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: This is an inlined function */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_10155bc4) {
    return;
  }
  report_failure();
  return;
}


/* END FUNCTION 0x10103db9 */
