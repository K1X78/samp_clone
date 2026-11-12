/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055ab0
 * Name: FUN_10055ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10055ab0(char *param_1,SOCKET *param_2,char *param_3,u_short param_4)

{
  short sVar1;
  u_short uVar2;
  hostent *phVar3;
  SOCKET s;
  int iVar4;
  SOCKET *pSVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  sockaddr local_10;
  
  phVar3 = gethostbyname(param_3);
  if (phVar3 == (hostent *)0x0) {
    *param_2 = DAT_10140210;
    *(undefined2 *)(param_2 + 1) = DAT_10140214;
    return;
  }
  s = socket(2,1,0);
  local_10.sa_data[2] = '\0';
  local_10.sa_data[3] = '\0';
  local_10.sa_data[4] = '\0';
  local_10.sa_data[5] = '\0';
  local_10.sa_data[6] = '\0';
  local_10.sa_data[7] = '\0';
  local_10.sa_data[8] = '\0';
  local_10.sa_data[9] = '\0';
  local_10.sa_data[10] = '\0';
  local_10.sa_data[0xb] = '\0';
  local_10.sa_data[0xc] = '\0';
  local_10.sa_data[0xd] = '\0';
  local_10.sa_family = 2;
  local_10.sa_data[0] = '\0';
  local_10.sa_data[1] = '\0';
  uVar2 = htons(param_4);
  local_10.sa_data[0] = (char)uVar2;
  local_10.sa_data[1] = (char)(uVar2 >> 8);
  sVar1 = phVar3->h_length;
  pcVar9 = *phVar3->h_addr_list;
  pcVar10 = local_10.sa_data + 2;
  for (uVar8 = (uint)(int)sVar1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = (int)sVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar4 = connect(s,&local_10,0x10);
  if (iVar4 != 0) {
    closesocket(s);
    *param_2 = DAT_10140210;
    *(undefined2 *)(param_2 + 1) = DAT_10140214;
    return;
  }
  *param_1 = '\x01';
  pSVar5 = operator_new(10);
  *pSVar5 = s;
  uVar6 = inet_addr(param_3);
  pSVar5[1] = uVar6;
  *(u_short *)(pSVar5 + 2) = param_4;
  puVar7 = (undefined4 *)FUN_10055800();
  *puVar7 = pSVar5;
  FUN_10055840();
  do {
  } while (*param_1 != '\0');
  FUN_10043560(0x1e);
  *param_2 = pSVar5[1];
  *(short *)(param_2 + 1) = (short)pSVar5[2];
  return;
}


/* END FUNCTION 0x10055ab0 */
