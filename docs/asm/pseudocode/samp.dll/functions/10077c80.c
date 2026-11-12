/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10077c80
 * Name: FUN_10077c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_10077c80(void)

{
  int iVar1;
  DWORD *pDVar2;
  _OSVERSIONINFOA local_a0;
  
  pDVar2 = &local_a0.dwMajorVersion;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  local_a0.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_a0);
  return local_a0.dwPlatformId == 2;
}


/* END FUNCTION 0x10077c80 */
