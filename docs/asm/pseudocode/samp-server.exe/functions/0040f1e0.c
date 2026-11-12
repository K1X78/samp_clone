/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f1e0
 * Name: FUN_0040f1e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040f1e0(int param_1,short *param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 != (short *)0x0) && (iVar1 = 0, 0 < *param_2)) {
    piVar2 = (int *)(param_2 + 0xc);
    do {
      if (-1 < piVar2[2]) {
        return;
      }
      piVar2[2] = *(int *)(param_1 + 0x44);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      if (*piVar2 != 0) {
        FUN_0040f1e0(param_1,*(short **)(*piVar2 + 8));
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xe;
    } while (iVar1 < *param_2);
  }
  return;
}


/* END FUNCTION 0x0040f1e0 */
