/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ac90
 * Name: FUN_0040ac90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040ac90(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  puVar1 = (undefined4 *)*unaff_EDI;
  while (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
    FUN_00408130(unaff_EDI[1]);
  }
  *unaff_EDI = 0;
  *(undefined2 *)(unaff_EDI + 6) = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[3] = 0;
  unaff_EDI[5] = 0;
  *(undefined1 *)((int)unaff_EDI + 0x1a) = 1;
  return;
}


/* END FUNCTION 0x0040ac90 */
