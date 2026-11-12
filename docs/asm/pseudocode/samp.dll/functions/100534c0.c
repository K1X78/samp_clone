/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100534c0
 * Name: FUN_100534c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100534c0(SOCKET param_1,undefined4 param_2,undefined4 *param_3)

{
  u_short uVar1;
  int iVar2;
  int local_5e8;
  sockaddr local_5e4;
  char local_5d4 [1492];
  
  local_5e8 = 0x10;
  local_5e4.sa_family = 2;
  if (param_1 == 0xffffffff) {
    *param_3 = 0xffffffff;
    return 0xffffffff;
  }
  iVar2 = recvfrom(param_1,local_5d4,0x5d4,0,&local_5e4,&local_5e8);
  if (iVar2 != -1) {
    uVar1 = ntohs(local_5e4.sa_data._0_2_);
    if (0 < iVar2) {
      FUN_1003ef00(CONCAT22(local_5e4.sa_data._4_2_,local_5e4.sa_data._2_2_),uVar1,local_5d4,iVar2,
                   param_2);
    }
    return 1;
  }
  *param_3 = 0;
  return 0;
}


/* END FUNCTION 0x100534c0 */
