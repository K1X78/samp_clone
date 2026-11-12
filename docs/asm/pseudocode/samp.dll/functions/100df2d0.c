/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100df2d0
 * Name: FUN_100df2d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * FUN_100df2d0(undefined4 param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuVar4;
  int unaff_EDI;
  
  ppuVar4 = &PTR_PTR_10125a58;
  while( true ) {
    piVar2 = (int *)*ppuVar4;
    iVar3 = FUN_100de8c0(param_1,*piVar2);
    if (((iVar3 != 0) && (*(char *)(unaff_EDI + *piVar2) == '\0')) ||
       ((piVar2[1] != 0 &&
        ((iVar3 = FUN_100de8c0(param_1,piVar2[1]), iVar3 != 0 &&
         (*(char *)(unaff_EDI + piVar2[1]) == '\0')))))) break;
    ppuVar1 = ppuVar4 + 1;
    ppuVar4 = ppuVar4 + 1;
    if (*ppuVar1 == (undefined *)0x0) {
      return (int *)0x0;
    }
  }
  return piVar2;
}


/* END FUNCTION 0x100df2d0 */
