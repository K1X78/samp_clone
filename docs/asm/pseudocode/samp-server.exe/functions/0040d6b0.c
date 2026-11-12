/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d6b0
 * Name: FUN_0040d6b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040d6b0(void)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  uint *unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI != (uint *)0x0) {
    if ((in_EAX != 0) || (unaff_ESI[4] == 1)) {
      uVar2 = *unaff_ESI;
      *unaff_ESI = 0;
      FUN_00415060(unaff_EDI,uVar2,unaff_ESI[1]);
      unaff_ESI[1] = 0;
    }
    puVar1 = unaff_ESI + 4;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) {
      FUN_00408130(unaff_EDI);
    }
  }
  return;
}


/* END FUNCTION 0x0040d6b0 */
