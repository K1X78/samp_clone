/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404be0
 * Name: FUN_00404be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00404be0(u_short param_1,char *param_2,int param_3)

{
  int iVar1;
  int unaff_ESI;
  sockaddr local_10;
  
  if (-1 < (int)DAT_004ed060) {
    local_10.sa_family = 2;
    local_10.sa_data._0_2_ = htons(param_1);
    if (unaff_ESI == 0) {
      local_10.sa_data._2_4_ = htonl(0xffffffff);
    }
    else {
      local_10.sa_data._2_4_ = FUN_00404b90();
    }
    iVar1 = sendto(DAT_004ed060,param_2,param_3,0,&local_10,0x10);
    if (iVar1 != -1) {
      return param_3;
    }
  }
  return -1;
}


/* END FUNCTION 0x00404be0 */
