/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a000
 * Name: FUN_0040a000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040a000(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      piVar1 = (int *)(param_1 + 0xc);
      iVar2 = 0x7d;
      do {
        FUN_0040a000(*piVar1);
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004080d0(param_1);
  }
  return;
}


/* END FUNCTION 0x0040a000 */
