/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c430
 * Name: FUN_0048c430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048c430(void)

{
  ushort *unaff_ESI;
  int unaff_EDI;
  
  FUN_0048c320(unaff_ESI,unaff_EDI,*(uint *)(unaff_ESI + 0x202),
               (int)(unaff_ESI + unaff_EDI * 0x220 + 0x204));
  *(undefined4 *)(unaff_ESI + unaff_EDI * 2 + 0x2404) = *(undefined4 *)(unaff_ESI + 0x202);
  return;
}


/* END FUNCTION 0x0048c430 */
