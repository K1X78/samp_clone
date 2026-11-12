/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ddfa0
 * Name: FUN_100ddfa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100ddfa0(int param_1)

{
  char cVar1;
  int *in_EAX;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *unaff_EBX;
  char *pcVar6;
  
  pcVar6 = (char *)0x0;
  if (unaff_EBX == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = unaff_EBX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(unaff_EBX + 1);
  }
  for (; in_EAX != (int *)0x0; in_EAX = (int *)in_EAX[1]) {
    if (((unaff_EBX == (char *)0x0) || (iVar4 = FUN_100de8c0(*in_EAX), iVar4 == 0)) ||
       (pcVar2 = (char *)(*in_EAX + iVar3), *pcVar2 != ':')) {
      pcVar5 = (char *)*in_EAX;
      pcVar2 = pcVar5 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar5 + (int)(pcVar6 + (param_1 - (int)pcVar2));
    }
    else {
      cVar1 = pcVar2[1];
      while (cVar1 == ' ') {
        cVar1 = pcVar2[2];
        pcVar2 = pcVar2 + 1;
      }
    }
  }
  return pcVar6;
}


/* END FUNCTION 0x100ddfa0 */
