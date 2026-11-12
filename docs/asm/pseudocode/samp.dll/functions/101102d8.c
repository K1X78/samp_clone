/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101102d8
 * Name: __strdup
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __strdup(char *_Src)

{
  size_t sVar1;
  void *pvVar2;
  char *pcVar3;
  
  if (_Src != (char *)0x0) {
    sVar1 = _strlen(_Src);
    pvVar2 = _malloc(sVar1 + 1);
    if (pvVar2 != (void *)0x0) {
      pcVar3 = (char *)FUN_10103c90(pvVar2,_Src);
      return pcVar3;
    }
  }
  return (char *)0x0;
}


/* END FUNCTION 0x101102d8 */
