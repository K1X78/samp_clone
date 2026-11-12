/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ff00
 * Name: FUN_0048ff00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048ff00(void)

{
  char *pcVar1;
  char local_100 [256];
  
  pcVar1 = _strtok((char *)0x0,"");
  if (pcVar1 != (char *)0x0) {
    _sprintf(local_100,"* Admin: %.230s",pcVar1);
    FUN_00495cc0(DAT_004fc438,0x2587ceaa,local_100);
  }
  return;
}


/* END FUNCTION 0x0048ff00 */
