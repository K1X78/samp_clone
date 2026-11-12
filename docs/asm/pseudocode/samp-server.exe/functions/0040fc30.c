/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fc30
 * Name: FUN_0040fc30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040fc30(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + 0xc);
      do {
        if (*piVar2 == unaff_ESI) {
          return;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 4;
      } while (iVar1 < *(int *)(param_1 + 4));
    }
  }
  return;
}


/* END FUNCTION 0x0040fc30 */
