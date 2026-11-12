/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416a70
 * Name: FUN_00416a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00416a70(int *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  if (*(int *)(unaff_ESI + 0x28) == 0) {
    iVar1 = FUN_0040b9a0();
    iVar2 = FUN_004125b0(*(int *)(unaff_ESI + 0xc) + 1);
    if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + 0x1e) = 1;
      return;
    }
    iVar1 = 0;
    if (0 < *(int *)(unaff_ESI + 0xc)) {
      iVar3 = 0;
      do {
        *(undefined1 *)(iVar1 + iVar2) = *(undefined1 *)(*(int *)(unaff_ESI + 0x10) + 0x16 + iVar3);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar1 < *(int *)(unaff_ESI + 0xc));
    }
    *(undefined1 *)(iVar2 + *(int *)(unaff_ESI + 0xc)) = 0;
    *(int *)(unaff_ESI + 0x28) = iVar2;
  }
  FUN_00415110(0,*(char **)(unaff_ESI + 0x28),param_1);
  return;
}


/* END FUNCTION 0x00416a70 */
