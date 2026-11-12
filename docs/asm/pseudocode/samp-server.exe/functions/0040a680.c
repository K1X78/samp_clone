/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a680
 * Name: FUN_0040a680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a680(void)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI != (undefined4 *)0x0) {
    if ((DAT_004ed308 <= unaff_ESI) && (unaff_ESI < DAT_004ed30c)) {
      FUN_004073a0(1);
      *unaff_ESI = DAT_004ed310;
      DAT_004ed310 = unaff_ESI;
      return;
    }
    FUN_004080a0();
    FUN_004073a0(2);
    FUN_004080d0((int)unaff_ESI);
  }
  return;
}


/* END FUNCTION 0x0040a680 */
