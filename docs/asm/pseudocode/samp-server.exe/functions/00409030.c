/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409030
 * Name: FUN_00409030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_00409030(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < param_2) {
    do {
      uVar1 = uVar1 ^ (uint)(byte)(&DAT_004b28c8)[*param_1] ^ uVar1 * 8;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar1;
}


/* END FUNCTION 0x00409030 */
