/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac340
 * Name: __unlock_fhandle
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_0051c940)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}


/* END FUNCTION 0x004ac340 */
