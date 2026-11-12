/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004083a0
 * Name: FUN_004083a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_004083a0(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *unaff_EDI;
  
  if (unaff_EDI != (char *)0x0) {
    cVar3 = *unaff_EDI;
    switch(cVar3) {
    case '[':
      cVar3 = ']';
    case '\"':
    case '\'':
    case '`':
      iVar2 = 0;
      if (unaff_EDI[1] != '\0') {
        pcVar4 = unaff_EDI + 2;
        pcVar1 = unaff_EDI;
        do {
          pcVar5 = pcVar1 + 1;
          if (*pcVar5 == cVar3) {
            if (*pcVar4 != cVar3) break;
            unaff_EDI[iVar2] = cVar3;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar1 + 2;
          }
          else {
            unaff_EDI[iVar2] = *pcVar5;
          }
          iVar2 = iVar2 + 1;
          pcVar4 = pcVar4 + 1;
          pcVar1 = pcVar5;
        } while (pcVar5[1] != '\0');
      }
      unaff_EDI[iVar2] = '\0';
      return iVar2;
    }
  }
  return -1;
}


/* END FUNCTION 0x004083a0 */
