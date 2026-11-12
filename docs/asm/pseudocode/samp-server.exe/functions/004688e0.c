/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004688e0
 * Name: FUN_004688e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004688e0(void *this,char *param_1,u_short param_2)

{
  short sVar1;
  u_short uVar2;
  hostent *phVar3;
  SOCKET s;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_28 [8];
  sockaddr local_20;
  sockaddr local_10;
  
  phVar3 = gethostbyname(param_1);
  if (phVar3 == (hostent *)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
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
  local_20.sa_family = 0;
  local_20.sa_data[0] = '\0';
  local_20.sa_data[1] = '\0';
  local_20.sa_data[2] = '\0';
  local_20.sa_data[3] = '\0';
  local_20.sa_data[4] = '\0';
  local_20.sa_data[5] = '\0';
  local_10.sa_data[10] = '\0';
  local_10.sa_data[0xb] = '\0';
  local_10.sa_data[0xc] = '\0';
  local_10.sa_data[0xd] = '\0';
  local_20.sa_data[6] = '\0';
  local_20.sa_data[7] = '\0';
  local_20.sa_data[8] = '\0';
  local_20.sa_data[9] = '\0';
  local_20.sa_data[10] = '\0';
  local_20.sa_data[0xb] = '\0';
  local_20.sa_data[0xc] = '\0';
  local_20.sa_data[0xd] = '\0';
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
  uVar2 = htons(param_2);
  local_10.sa_data[0] = (char)uVar2;
  local_10.sa_data[1] = (char)(uVar2 >> 8);
  if (*(int *)((int)this + 0x732c) != 0) {
    phVar3 = gethostbyname((char *)((int)this + 0x722b));
    if (phVar3 == (hostent *)0x0) {
      *(undefined4 *)((int)this + 4) = 1;
      return 0;
    }
    sVar1 = phVar3->h_length;
    pcVar6 = *phVar3->h_addr_list;
    pcVar7 = local_20.sa_data + 2;
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
    local_20.sa_data[0] = '\0';
    local_20.sa_data[1] = '\0';
    local_20.sa_family = phVar3->h_addrtype;
  }
  s = socket(2,1,0);
  *(SOCKET *)this = s;
  if ((int)s < 0) {
    *(undefined4 *)((int)this + 4) = 2;
    return s & 0xffffff00;
  }
  if (*(int *)((int)this + 0x732c) != 0) {
    uVar5 = bind(s,&local_20,0x10);
    if ((int)uVar5 < 0) goto LAB_00468a32;
  }
  local_28[0] = ' ';
  local_28[1] = 'N';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = ' ';
  local_28[5] = 'N';
  local_28[6] = '\0';
  local_28[7] = '\0';
  setsockopt(*(SOCKET *)this,0xffff,0x1006,local_28,8);
  iVar4 = connect(*(SOCKET *)this,&local_10,0x10);
  if (-1 < iVar4) {
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  uVar5 = FUN_00468360(this);
LAB_00468a32:
  *(undefined4 *)((int)this + 4) = 3;
  return uVar5 & 0xffffff00;
}


/* END FUNCTION 0x004688e0 */
