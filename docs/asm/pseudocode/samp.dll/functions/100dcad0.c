/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dcad0
 * Name: FUN_100dcad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dcad0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar2 = FUN_100de8c0(*unaff_EDI);
  if ((iVar2 == 0) || (iVar2 = *unaff_EDI + unaff_ESI, *(char *)(*unaff_EDI + unaff_ESI) != ':')) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + 1;
    if (*(char *)(iVar2 + 1) == ' ') {
      do {
        pcVar1 = (char *)(iVar3 + 1);
        iVar3 = iVar3 + 1;
      } while (*pcVar1 == ' ');
      return iVar3;
    }
  }
  return iVar3;
}


/* END FUNCTION 0x100dcad0 */
