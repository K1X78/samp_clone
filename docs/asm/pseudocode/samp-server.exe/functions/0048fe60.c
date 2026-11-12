/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048fe60
 * Name: FUN_0048fe60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048fe60(void)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)_strtok((char *)0x0," ");
  if (pbVar1 != (byte *)0x0) {
    uVar2 = FUN_0048fd60((char *)pbVar1);
    if ((char)uVar2 != '\0') {
      FUN_00494180(DAT_004fc438,pbVar1);
    }
  }
  return;
}


/* END FUNCTION 0x0048fe60 */
