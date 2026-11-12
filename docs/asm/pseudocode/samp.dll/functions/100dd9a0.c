/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd9a0
 * Name: FUN_100dd9a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dd9a0(void)

{
  int unaff_ESI;
  
  if (*(code **)(unaff_ESI + 0x1c) != (code *)0x0) {
    (**(code **)(unaff_ESI + 0x1c))(*(undefined4 *)(unaff_ESI + 0x20));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(int *)(unaff_ESI + 0x20) = unaff_ESI;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}


/* END FUNCTION 0x100dd9a0 */
