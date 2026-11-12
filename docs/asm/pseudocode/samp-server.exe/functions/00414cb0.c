/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414cb0
 * Name: FUN_00414cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00414cb0(void)

{
  byte bVar1;
  undefined3 extraout_var;
  int unaff_ESI;
  
  if (((*(ushort *)(unaff_ESI + 0x1c) & 0x200) == 0) && ((*(ushort *)(unaff_ESI + 0x1c) & 2) != 0))
  {
    bVar1 = FUN_00414b80((void *)(*(int *)(unaff_ESI + 0x18) + 2),unaff_ESI);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return 7;
    }
    *(undefined1 *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x14)) = 0;
    *(undefined1 *)(*(int *)(unaff_ESI + 0x18) + 1 + *(int *)(unaff_ESI + 0x14)) = 0;
    *(byte *)(unaff_ESI + 0x1d) = *(byte *)(unaff_ESI + 0x1d) | 2;
  }
  return 0;
}


/* END FUNCTION 0x00414cb0 */
