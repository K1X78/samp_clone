/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010c693
 * Name: __unlock_fhandle
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_102ad560)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}


/* END FUNCTION 0x1010c693 */
