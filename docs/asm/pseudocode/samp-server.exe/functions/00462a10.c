/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462a10
 * Name: FUN_00462a10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


SOCKET FUN_00462a10(u_short param_1,undefined4 param_2,char *param_3)

{
  SOCKET s;
  int iVar1;
  char local_18 [4];
  u_long local_14;
  sockaddr local_10;
  
  s = socket(2,2,0);
  if (s == 0xffffffff) {
    return 0xffffffff;
  }
  local_18[0] = '\x01';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  setsockopt(s,0xffff,4,local_18,4);
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\x04';
  local_18[3] = '\0';
  setsockopt(s,0xffff,0x1002,local_18,4);
  local_18[0] = '\0';
  local_18[1] = '@';
  local_18[2] = '\0';
  local_18[3] = '\0';
  setsockopt(s,0xffff,0x1001,local_18,4);
  local_14 = 1;
  iVar1 = ioctlsocket(s,-0x7ffb9982,&local_14);
  if (iVar1 == 0) {
    setsockopt(s,0xffff,0x20,local_18,4);
    local_10.sa_data._0_2_ = htons(param_1);
    local_10.sa_family = 2;
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      local_10.sa_data[2] = '\0';
      local_10.sa_data[3] = '\0';
      local_10.sa_data[4] = '\0';
      local_10.sa_data[5] = '\0';
    }
    else {
      local_10.sa_data._2_4_ = inet_addr(param_3);
    }
    iVar1 = bind(s,&local_10,0x10);
    if (iVar1 != -1) {
      return s;
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00462a10 */
