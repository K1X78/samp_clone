/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a95ae
 * Name: TypeMatch
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl TypeMatch(uint *param_1)

{
  int iVar1;
  byte *unaff_ESI;
  byte *unaff_EDI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
    if ((iVar1 != *(int *)(unaff_EDI + 4)) &&
       (iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(unaff_EDI + 4) + 8)), iVar1 != 0)) {
      return 0;
    }
    if (((((*unaff_EDI & 2) != 0) && ((*unaff_ESI & 8) == 0)) ||
        (((*param_1 & 1) != 0 && ((*unaff_ESI & 1) == 0)))) ||
       (((*param_1 & 2) != 0 && ((*unaff_ESI & 2) == 0)))) {
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x004a95ae */
