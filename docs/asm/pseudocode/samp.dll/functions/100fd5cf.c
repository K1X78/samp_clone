/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fd5cf
 * Name: _IsRootUNCName
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 _IsRootUNCName(void)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  char *unaff_ESI;
  
  sVar1 = _strlen(unaff_ESI);
  if (((4 < sVar1) && ((*unaff_ESI == '\\' || (*unaff_ESI == '/')))) &&
     ((unaff_ESI[1] == '\\' || (unaff_ESI[1] == '/')))) {
    pcVar2 = unaff_ESI + 3;
    cVar3 = *pcVar2;
    if (cVar3 != '\0') {
      do {
        if ((cVar3 == '\\') || (cVar3 == '/')) break;
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      } while (cVar3 != '\0');
      if ((*pcVar2 != '\0') && (pcVar2 = pcVar2 + 1, *pcVar2 != '\0')) {
        cVar3 = *pcVar2;
        if (cVar3 != '\0') {
          do {
            if ((cVar3 == '\\') || (cVar3 == '/')) break;
            pcVar2 = pcVar2 + 1;
            cVar3 = *pcVar2;
          } while (cVar3 != '\0');
          if ((*pcVar2 != '\0') && (pcVar2[1] != '\0')) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100fd5cf */
