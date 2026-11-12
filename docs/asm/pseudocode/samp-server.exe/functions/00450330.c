/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450330
 * Name: FUN_00450330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00450330(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char local_a8 [16];
  char local_98 [148];
  
  pcVar3 = local_a8;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  FUN_00462d10(local_a8);
  iVar2 = 0;
  if (local_a8[0] != '\0') {
    pcVar3 = local_a8;
    do {
      pcVar1 = pcVar3 + 0x10;
      pcVar3 = pcVar3 + 0x10;
      iVar2 = iVar2 + 1;
    } while (*pcVar1 != '\0');
  }
  return iVar2;
}


/* END FUNCTION 0x00450330 */
