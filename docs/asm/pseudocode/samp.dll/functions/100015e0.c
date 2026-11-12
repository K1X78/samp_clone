/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100015e0
 * Name: FUN_100015e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100015e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xe800);
  do {
    if (*piVar2 != 0) {
      FUN_100012e0(iVar1);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((ushort)iVar1 < 0x800);
  return;
}


/* END FUNCTION 0x100015e0 */
