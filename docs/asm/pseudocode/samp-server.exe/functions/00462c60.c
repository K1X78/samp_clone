/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462c60
 * Name: FUN_00462c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00462c60(SOCKET param_1,char *param_2,int param_3,undefined4 param_4,u_short param_5)

{
  int iVar1;
  sockaddr local_10;
  
  if (param_1 == 0xffffffff) {
    return -1;
  }
  local_10.sa_data._0_2_ = htons(param_5);
  local_10.sa_data._2_4_ = param_4;
  local_10.sa_family = 2;
  do {
    iVar1 = sendto(param_1,param_2,param_3,0,&local_10,0x10);
  } while (iVar1 == 0);
  if (iVar1 != -1) {
    return 0;
  }
  iVar1 = WSAGetLastError();
  return iVar1;
}


/* END FUNCTION 0x00462c60 */
