/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dca60
 * Name: FUN_100dca60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dca60(void)

{
  char *pcVar1;
  char cVar2;
  char *in_EAX;
  int iVar3;
  int iVar4;
  
  cVar2 = *in_EAX;
  iVar4 = 0;
  iVar3 = 0;
  if (cVar2 != '\0') {
    iVar3 = 0;
    do {
      if ((cVar2 == '\"') || (cVar2 == '\\')) {
        iVar4 = iVar4 + 1;
      }
      cVar2 = in_EAX[iVar3 + 1];
      iVar3 = iVar3 + 1;
    } while (cVar2 != '\0');
  }
  iVar3 = (*(code *)PTR__malloc_101554b8)(iVar3 + 1 + iVar4);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = 0;
  cVar2 = *in_EAX;
  while (cVar2 != '\0') {
    if ((cVar2 == '\"') || (cVar2 == '\\')) {
      *(undefined1 *)(iVar3 + iVar4) = 0x5c;
      iVar4 = iVar4 + 1;
    }
    *(char *)(iVar3 + iVar4) = *in_EAX;
    pcVar1 = in_EAX + 1;
    iVar4 = iVar4 + 1;
    in_EAX = in_EAX + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(iVar3 + iVar4) = 0;
  return;
}


/* END FUNCTION 0x100dca60 */
