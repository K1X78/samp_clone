/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dfdb0
 * Name: FUN_100dfdb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100dfdb0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5,
            int *param_6)

{
  char *pcVar1;
  hostent *phVar2;
  int iVar3;
  char **ppcVar4;
  
  *param_6 = 0;
  *param_5 = '\0';
  phVar2 = gethostbyname(param_1);
  if (phVar2 == (hostent *)0x0) {
    iVar3 = WSAGetLastError();
    switch(iVar3) {
    default:
      return 0x2af9;
    case 0x2afa:
      return 0x2afa;
    case 0x2afb:
      return 0x2afb;
    }
  }
  if ((phVar2->h_addrtype == 2) && (phVar2->h_length == 4)) {
    ppcVar4 = phVar2->h_addr_list;
    pcVar1 = *ppcVar4;
    while (pcVar1 != (char *)0x0) {
      iVar3 = FUN_100dfd40(param_2,param_3,param_4,*(undefined4 *)pcVar1);
      *param_6 = iVar3;
      if (iVar3 == 0) {
        return 8;
      }
      ppcVar4 = ppcVar4 + 1;
      param_6 = (int *)(iVar3 + 0x1c);
      pcVar1 = *ppcVar4;
    }
  }
  _strncpy(param_5,phVar2->h_name,0x400);
  param_5[0x400] = '\0';
  return 0;
}


/* END FUNCTION 0x100dfdb0 */
