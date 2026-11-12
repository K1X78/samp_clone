/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a6b41
 * Name: __strdup
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __strdup(char *_Src)

{
  size_t sVar1;
  uint *puVar2;
  
  if (_Src != (char *)0x0) {
    sVar1 = _strlen(_Src);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_004a68f0(puVar2,(uint *)_Src);
      return (char *)puVar2;
    }
  }
  return (char *)0x0;
}


/* END FUNCTION 0x004a6b41 */
