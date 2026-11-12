/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00424060
 * Name: FUN_00424060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00424060(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x12) != 0) {
    FUN_00414c50();
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfffd | 0x10;
    return *(undefined4 *)(param_1 + 0x14);
  }
  uVar1 = FUN_0041ffb0();
  return uVar1;
}


/* END FUNCTION 0x00424060 */
