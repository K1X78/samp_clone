/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048fed0
 * Name: FUN_0048fed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048fed0(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = _strtok((char *)0x0,"");
  if (pcVar1 != (char *)0x0) {
    iVar2 = FUN_00493520(DAT_004fc438,(int)pcVar1);
    if (iVar2 != 0) {
      DAT_004fc454 = 1;
    }
  }
  return;
}


/* END FUNCTION 0x0048fed0 */
