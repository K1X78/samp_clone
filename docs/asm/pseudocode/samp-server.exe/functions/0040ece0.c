/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ece0
 * Name: FUN_0040ece0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040ece0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  
  if (unaff_EDI == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)unaff_EDI[3];
  iVar3 = 0;
  if (0 < *unaff_EDI) {
    do {
      iVar1 = FUN_004161c0(param_1,*piVar2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar3 < *unaff_EDI);
  }
  return 0;
}


/* END FUNCTION 0x0040ece0 */
