/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415c00
 * Name: FUN_00415c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00415c00(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  FUN_0040b9a0();
  puVar1 = FUN_00412930(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *unaff_EDI;
    puVar1[1] = unaff_EDI[1];
  }
  return;
}


/* END FUNCTION 0x00415c00 */
