/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496c00
 * Name: FUN_00496c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00496c00(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  FUN_00467c20(0,param_1,(int)pbVar2 - (int)(param_1 + 1));
  return;
}


/* END FUNCTION 0x00496c00 */
