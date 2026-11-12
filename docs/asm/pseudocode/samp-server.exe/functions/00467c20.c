/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467c20
 * Name: FUN_00467c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00467c20(uint param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_004ce738 + ((*param_2 ^ uVar1) & 0xff) * 4);
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}


/* END FUNCTION 0x00467c20 */
