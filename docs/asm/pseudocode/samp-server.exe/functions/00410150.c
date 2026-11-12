/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410150
 * Name: FUN_00410150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00410150(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
    iVar3 = 1;
    if (1 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + -4 + iVar3 * 4);
        if (iVar2 != 0) {
          FUN_004080d0(iVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_004080d0(param_1 + -4);
  }
  return;
}


/* END FUNCTION 0x00410150 */
