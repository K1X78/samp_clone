/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100784e0
 * Name: FUN_100784e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100784e0(int param_1)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  if (DAT_10140bf4 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  return param_1 + 0x30;
}


/* END FUNCTION 0x100784e0 */
