/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d720
 * Name: FUN_0040d720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040d720(int param_1)

{
  uint uVar1;
  int *unaff_ESI;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if ((uVar1 & unaff_ESI[0x1c]) == 0) {
    unaff_ESI[0x1c] = unaff_ESI[0x1c] | uVar1;
    FUN_0040c470(unaff_ESI + 0x20,*(int *)(*(int *)(*unaff_ESI + 8) + 4 + param_1 * 0x10));
  }
  return;
}


/* END FUNCTION 0x0040d720 */
