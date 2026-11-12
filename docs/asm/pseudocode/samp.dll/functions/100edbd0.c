/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100edbd0
 * Name: FUN_100edbd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100edbd0(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *unaff_EDI;
  
  pcVar1 = _strstr(unaff_EDI,"//");
  pcVar3 = unaff_EDI;
  if (pcVar1 != (char *)0x0) {
    pcVar3 = pcVar1 + 2;
  }
  pcVar2 = _strchr(pcVar3,0x3f);
  pcVar3 = _strchr(pcVar3,0x2f);
  pcVar1 = unaff_EDI;
  if (pcVar3 == (char *)0x0) {
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  if (pcVar2 == (char *)0x0) {
    do {
      pcVar2 = unaff_EDI;
      unaff_EDI = pcVar2 + 1;
    } while (*pcVar2 != '\0');
  }
  if (pcVar2 <= pcVar3) {
    pcVar3 = pcVar2;
  }
  return pcVar3;
}


/* END FUNCTION 0x100edbd0 */
