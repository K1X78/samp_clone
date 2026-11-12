/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5600
 * Name: FUN_100d5600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100d5600(void)

{
  uint uVar1;
  int *unaff_EBX;
  int *piVar2;
  int unaff_EDI;
  
  uVar1 = *(uint *)(*(int *)(unaff_EDI + 100) + 0xac);
  if ((int)uVar1 < 0) {
    uVar1 = *(int *)(*(int *)(unaff_EDI + 100) + 0xc) << 2;
  }
  piVar2 = (int *)0x0;
  unaff_EBX[0x12] = 0;
  if ((uVar1 != 0) && (uVar1 < *(uint *)(*(int *)(unaff_EDI + 0x838) + 0x18))) {
    FUN_100d8ae0();
    piVar2 = (int *)FUN_100ebea0();
    if (piVar2 != (int *)0x0) {
      *piVar2 = unaff_EDI;
      FUN_100d2d00(piVar2,0);
    }
  }
  return piVar2 != unaff_EBX;
}


/* END FUNCTION 0x100d5600 */
