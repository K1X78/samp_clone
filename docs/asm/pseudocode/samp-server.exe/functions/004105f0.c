/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004105f0
 * Name: FUN_004105f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004105f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x128);
  iVar3 = 0;
  *(undefined4 *)(unaff_EDI + 0x128) = 0;
  iVar4 = 0;
  do {
    if (*(int *)(unaff_EDI + 300) <= iVar4) break;
    piVar2 = *(int **)(*(int *)(iVar1 + iVar4 * 4) + 8);
    if ((piVar2 != (int *)0x0) && (*(code **)(*piVar2 + 0x3c) != (code *)0x0)) {
      iVar3 = (**(code **)(*piVar2 + 0x3c))(piVar2);
      FUN_00408130(unaff_EDI);
      *param_1 = piVar2[2];
      piVar2[2] = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar3 == 0);
  *(int *)(unaff_EDI + 0x128) = iVar1;
  return iVar3;
}


/* END FUNCTION 0x004105f0 */
