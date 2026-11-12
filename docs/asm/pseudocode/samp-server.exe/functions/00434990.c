/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434990
 * Name: FUN_00434990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00434990(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = *param_1;
  iVar2 = FUN_00416430();
  if ((unaff_EDI != 0) && (iVar2 != 0)) {
    piVar3 = FUN_004308f0(param_1);
    if (piVar3 != (int *)0x0) {
      *(byte *)(unaff_EDI + 3) = *(byte *)(unaff_EDI + 3) | 1;
      *(int **)(unaff_EDI + 0x14) = piVar3;
    }
  }
  FUN_00408130(iVar1);
  return;
}


/* END FUNCTION 0x00434990 */
