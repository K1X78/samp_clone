/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e150
 * Name: FUN_0040e150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040e150(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 5;
    return;
  }
  if ((uVar1 & 4) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
    return;
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 2;
    return;
  }
  *(char *)(param_1 + 0x1e) = '\x04' - ((uVar1 & 2) != 0);
  return;
}


/* END FUNCTION 0x0040e150 */
