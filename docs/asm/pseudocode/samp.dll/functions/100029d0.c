/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100029d0
 * Name: FUN_100029d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100029d0(SOCKET *param_1,char *param_2,u_short param_3)

{
  short sVar1;
  u_short uVar2;
  hostent *phVar3;
  SOCKET s;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  sockaddr local_10;
  
  phVar3 = gethostbyname(param_2);
  if (phVar3 == (hostent *)0x0) {
    *(undefined4 *)((int)param_1 + 0x32) = 1;
    return 0;
  }
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
  sVar1 = phVar3->h_length;
  pcVar6 = *phVar3->h_addr_list;
  pcVar7 = local_10.sa_data + 2;
  for (uVar5 = (uint)(int)sVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = (int)sVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_10.sa_data[0] = '\0';
  local_10.sa_data[1] = '\0';
  local_10.sa_family = phVar3->h_addrtype;
  uVar2 = htons(param_3);
  local_10.sa_data[0] = (char)uVar2;
  local_10.sa_data[1] = (char)(uVar2 >> 8);
  s = socket(2,1,0);
  *param_1 = s;
  if ((int)s < 0) {
    *(undefined4 *)((int)param_1 + 0x32) = 2;
    return 0;
  }
  iVar4 = connect(s,&local_10,0x10);
  if (iVar4 < 0) {
    closesocket(*param_1);
    *(undefined4 *)((int)param_1 + 0x32) = 3;
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100029d0 */
