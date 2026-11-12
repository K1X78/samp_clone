/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414930
 * Name: FUN_00414930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00414930(int param_1)

{
  int iVar1;
  int *piVar2;
  byte unaff_BL;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    if ((piVar2[1] == param_1) && (*piVar2 == unaff_EDI)) goto LAB_00414974;
  }
  piVar2 = FUN_00412900();
  if (piVar2 == (int *)0x0) {
    return 7;
  }
  piVar2[1] = param_1;
  *piVar2 = unaff_EDI;
  piVar2[3] = *(int *)(iVar1 + 0x44);
  *(int **)(iVar1 + 0x44) = piVar2;
LAB_00414974:
  if (*(byte *)(piVar2 + 2) < unaff_BL) {
    *(byte *)(piVar2 + 2) = unaff_BL;
  }
  return 0;
}


/* END FUNCTION 0x00414930 */
