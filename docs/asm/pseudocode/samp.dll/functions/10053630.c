/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053630
 * Name: FUN_10053630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10053630(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  hostent *phVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_50 [80];
  
  iVar3 = gethostname(local_50,0x50);
  if (((iVar3 != -1) && (phVar4 = gethostbyname(local_50), phVar4 != (hostent *)0x0)) &&
     (ppcVar5 = phVar4->h_addr_list, *ppcVar5 != (char *)0x0)) {
    iVar3 = 0;
    do {
      if (0x27 < iVar3) {
        return;
      }
      pcVar6 = inet_ntoa((in_addr)(*(_union_1226 **)(iVar3 + (int)ppcVar5))->S_un_b);
      pcVar7 = param_1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *pcVar7 = cVar2;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      ppcVar5 = phVar4->h_addr_list;
      iVar1 = iVar3 + 4;
      iVar3 = iVar3 + 4;
      param_1 = param_1 + 0x10;
    } while (*(int *)(iVar1 + (int)ppcVar5) != 0);
  }
  return;
}


/* END FUNCTION 0x10053630 */
