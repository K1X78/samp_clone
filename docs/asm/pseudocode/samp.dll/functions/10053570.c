/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053570
 * Name: FUN_10053570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10053570(SOCKET param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                )

{
  int iVar1;
  sockaddr local_10;
  
  if (param_1 == 0xffffffff) {
    return -1;
  }
  local_10.sa_data._0_2_ = htons((u_short)param_5);
  local_10.sa_data[2] = (char)param_4;
  local_10.sa_data[3] = param_4._1_1_;
  local_10.sa_data[4] = param_4._2_1_;
  local_10.sa_data[5] = param_4._3_1_;
  local_10.sa_family = 2;
  FUN_1001f170(&DAT_10157a50,param_2,&param_3);
  do {
    iVar1 = sendto(param_1,&DAT_10157a50,param_3,0,&local_10,0x10);
  } while (iVar1 == 0);
  if (iVar1 != -1) {
    return 0;
  }
  iVar1 = WSAGetLastError();
  return iVar1;
}


/* END FUNCTION 0x10053570 */
