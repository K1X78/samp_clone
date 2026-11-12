/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2c70
 * Name: FUN_100f2c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100f2c70(void)

{
  uint uVar1;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 local_14 [4];
  undefined4 local_10;
  
  uVar1 = FUN_100f1a40(local_14);
  *unaff_EDI = 0;
  *(undefined1 *)((int)unaff_EDI + 0xd) = 0;
  unaff_EDI[2] = unaff_ESI;
  unaff_EDI[1] = unaff_ESI;
  if (uVar1 < unaff_ESI) {
    FUN_100f1a40();
  }
  FUN_100f20e0(local_10,1);
  return;
}


/* END FUNCTION 0x100f2c70 */
