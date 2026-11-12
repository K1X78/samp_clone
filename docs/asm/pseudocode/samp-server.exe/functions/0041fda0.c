/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fda0
 * Name: FUN_0041fda0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0041fda0(void)

{
  ulonglong *unaff_ESI;
  ulonglong uVar1;
  
  uVar1 = FUN_0041fc90();
  *unaff_ESI = uVar1;
  *(ushort *)((int)unaff_ESI + 0x1c) = *(ushort *)((int)unaff_ESI + 0x1c) & 0xbf04 | 4;
  return 0;
}


/* END FUNCTION 0x0041fda0 */
