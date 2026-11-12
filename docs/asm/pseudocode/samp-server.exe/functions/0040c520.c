/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c520
 * Name: FUN_0040c520
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040c520(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      piVar1 = (int *)(piVar2[1] + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_0040c2a0();
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return;
}


/* END FUNCTION 0x0040c520 */
