/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042fd10
 * Name: FUN_0042fd10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * FUN_0042fd10(void)

{
  int *unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI != (int *)0x0) {
    if (((unaff_ESI[0xb] != 0) && (unaff_EDI < (int)(uint)*(ushort *)(unaff_ESI + 0xc))) &&
       (-1 < unaff_EDI)) {
      FUN_00407e50(*(int *)(*unaff_ESI + 0x44));
      return (undefined *)(unaff_ESI[0xb] + unaff_EDI * 0x28);
    }
    if (*unaff_ESI != 0) {
      FUN_00407e50(*(int *)(*unaff_ESI + 0x44));
      FUN_0042f990(0x19,(undefined **)0x0);
    }
  }
  return &DAT_004b3028;
}


/* END FUNCTION 0x0042fd10 */
