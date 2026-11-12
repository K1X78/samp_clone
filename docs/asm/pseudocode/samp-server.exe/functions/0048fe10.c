/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048fe10
 * Name: FUN_0048fe10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048fe10(void)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = _strtok((char *)0x0," ");
  if (pcVar1 != (char *)0x0) {
    uVar2 = FUN_0048fd60(pcVar1);
    if ((char)uVar2 != '\0') {
      FUN_00491fa0("IP %s has been banned.");
      FUN_004940e0(DAT_004fc438,&DAT_004b9820,pcVar1);
    }
  }
  return;
}


/* END FUNCTION 0x0048fe10 */
