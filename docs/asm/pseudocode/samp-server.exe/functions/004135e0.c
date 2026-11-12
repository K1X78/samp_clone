/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004135e0
 * Name: FUN_004135e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_004135e0(void)

{
  undefined4 *puVar1;
  int unaff_EDI;
  
  puVar1 = DAT_004ed310;
  if ((unaff_EDI <= DAT_004ed304) && (DAT_004ed310 != (undefined4 *)0x0)) {
    DAT_004ed310 = (undefined4 *)*DAT_004ed310;
    FUN_004073d0(7);
    FUN_004073a0(1);
    return puVar1;
  }
  FUN_00407e90(DAT_004ed2ec);
  puVar1 = (undefined4 *)FUN_004125b0(unaff_EDI);
  FUN_00407e50(DAT_004ed2ec);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004080a0();
    FUN_004073a0(2);
  }
  return puVar1;
}


/* END FUNCTION 0x004135e0 */
