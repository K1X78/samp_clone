/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462b50
 * Name: FUN_00462b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00462b50(SOCKET param_1,int *param_2,undefined4 *param_3)

{
  _struct_1227 _Var1;
  bool bVar2;
  u_short uVar3;
  int iVar4;
  undefined3 extraout_var;
  uint local_5ec [2];
  sockaddr local_5e4;
  byte local_5d4 [1492];
  
  local_5ec[1] = 0x10;
  local_5e4.sa_family = 2;
  if (param_1 == 0xffffffff) {
    *param_3 = 0xffffffff;
    return 0xffffffff;
  }
  local_5ec[0] = recvfrom(param_1,(char *)local_5d4,0x5d4,0,&local_5e4,(int *)(local_5ec + 1));
  if (local_5ec[0] != 0xffffffff) {
    uVar3 = ntohs(local_5e4.sa_data._0_2_);
    if (0 < (int)local_5ec[0]) {
      _Var1.s_b3 = local_5e4.sa_data[4];
      _Var1.s_b4 = local_5e4.sa_data[5];
      _Var1.s_b1 = local_5e4.sa_data[2];
      _Var1.s_b2 = local_5e4.sa_data[3];
      iVar4 = FUN_0049e480(_Var1,uVar3,(int *)local_5d4,local_5ec[0],param_1);
      if (iVar4 == 0) {
        bVar2 = FUN_0046a910(&DAT_004f2330,local_5d4,local_5ec);
        if (CONCAT31(extraout_var,bVar2) != 0) {
          FUN_00456650(CONCAT22(local_5e4.sa_data._4_2_,local_5e4.sa_data._2_2_),uVar3,&DAT_004f2330
                       ,local_5ec[0],param_2);
          return 1;
        }
        *param_3 = 0;
      }
    }
    return 1;
  }
  *param_3 = 0;
  return 0;
}


/* END FUNCTION 0x00462b50 */
