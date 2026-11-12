/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9e50
 * Name: FUN_100d9e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100d9e50(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  size_t _Size;
  
  pcVar2 = (char *)(*(code *)PTR___strdup_101554c4)();
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _Size = (int)pcVar3 - (int)(pcVar2 + 1);
  if (*pcVar2 == '\"') {
    _memmove(pcVar2,pcVar2 + 1,_Size);
    _Size = _Size - 1;
  }
  if ((_Size != 0) && (pcVar2[_Size - 1] == '\"')) {
    pcVar2[_Size - 1] = '\0';
    _Size = _Size - 1;
  }
  if (*pcVar2 != '/') {
    (*(code *)PTR__free_101554bc)(pcVar2);
    pcVar2 = (char *)(*(code *)PTR___strdup_101554c4)(&DAT_10117694);
    return pcVar2;
  }
  if ((_Size != 0) && (pcVar2[_Size - 1] == '/')) {
    pcVar2[_Size - 1] = '\0';
  }
  return pcVar2;
}


/* END FUNCTION 0x100d9e50 */
