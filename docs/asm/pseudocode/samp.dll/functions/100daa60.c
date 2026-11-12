/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100daa60
 * Name: FUN_100daa60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100daa60(char *param_1,FILE *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int unaff_EBX;
  
  bVar2 = false;
  pcVar3 = _fgets(param_1,unaff_EBX,param_2);
  do {
    if (pcVar3 == (char *)0x0) {
      return (char *)0x0;
    }
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (((int)pcVar4 - (int)(pcVar3 + 1) == 0) ||
       (pcVar3[((int)pcVar4 - (int)(pcVar3 + 1)) + -1] != '\n')) {
      bVar2 = true;
    }
    else {
      if (!bVar2) {
        return pcVar3;
      }
      bVar2 = false;
    }
    pcVar3 = _fgets(param_1,unaff_EBX,param_2);
  } while( true );
}


/* END FUNCTION 0x100daa60 */
