/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a3a6f
 * Name: __lock
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_004ec1e8)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_004ec1e8)[_File * 2]);
  return;
}


/* END FUNCTION 0x004a3a6f */
