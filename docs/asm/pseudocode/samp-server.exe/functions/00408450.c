/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408450
 * Name: FUN_00408450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00408450(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while ((bVar2 != 0 && ((&DAT_004b28c8)[bVar2] == (&DAT_004b28c8)[*param_2]))) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  return (uint)(byte)(&DAT_004b28c8)[*param_1] - (uint)(byte)(&DAT_004b28c8)[*param_2];
}


/* END FUNCTION 0x00408450 */
