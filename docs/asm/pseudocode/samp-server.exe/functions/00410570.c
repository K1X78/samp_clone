/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410570
 * Name: FUN_00410570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00410570(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x128) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(unaff_EDI + 300)) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(unaff_EDI + 0x128) + iVar2 * 4) + 8);
        if ((piVar1 != (int *)0x0) && (*(code **)(param_1 + *piVar1) != (code *)0x0)) {
          (**(code **)(param_1 + *piVar1))(piVar1);
        }
        FUN_004103d0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_EDI + 300));
    }
    FUN_00408130(unaff_EDI);
    *(undefined4 *)(unaff_EDI + 300) = 0;
    *(undefined4 *)(unaff_EDI + 0x128) = 0;
  }
  return;
}


/* END FUNCTION 0x00410570 */
