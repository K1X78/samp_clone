/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e790
 * Name: FUN_0040e790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0040e790(byte *param_1)

{
  byte bVar1;
  
  while( true ) {
    if ((*param_1 != 0x9d) && (*param_1 != 0x9c)) break;
    param_1 = *(byte **)(param_1 + 8);
  }
  bVar1 = *param_1;
  if (bVar1 == 0x84) {
    bVar1 = param_1[0x23];
  }
  if ((bVar1 != 0x5e) && ((bVar1 < 0x81 || (0x83 < bVar1)))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0040e790 */
