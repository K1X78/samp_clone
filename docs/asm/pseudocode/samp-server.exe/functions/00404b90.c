/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404b90
 * Name: FUN_00404b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulong FUN_00404b90(void)

{
  char **ppcVar1;
  char **ppcVar2;
  char *pcVar3;
  char *in_EAX;
  ulong uVar4;
  hostent *phVar5;
  char **ppcVar6;
  int iVar7;
  int unaff_EBX;
  
  uVar4 = inet_addr(in_EAX);
  if ((uVar4 == 0xffffffff) && (phVar5 = gethostbyname(in_EAX), phVar5 != (hostent *)0x0)) {
    ppcVar2 = phVar5->h_addr_list;
    iVar7 = 0;
    pcVar3 = *ppcVar2;
    ppcVar6 = ppcVar2;
    while (pcVar3 != (char *)0x0) {
      ppcVar1 = ppcVar6 + 1;
      ppcVar6 = ppcVar6 + 1;
      iVar7 = iVar7 + 1;
      pcVar3 = *ppcVar1;
    }
    if (unaff_EBX < iVar7) {
      return *(ulong *)ppcVar2[unaff_EBX];
    }
  }
  return uVar4;
}


/* END FUNCTION 0x00404b90 */
