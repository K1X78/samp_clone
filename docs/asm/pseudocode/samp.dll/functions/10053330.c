/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053330
 * Name: FUN_10053330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


SOCKET FUN_10053330(SOCKET param_1,undefined4 param_2,u_short param_3)

{
  sockaddr local_10;
  
  local_10.sa_family = 2;
  local_10.sa_data._0_2_ = htons(param_3);
  local_10.sa_data._2_4_ = param_2;
  connect(param_1,&local_10,0x10);
  return param_1;
}


/* END FUNCTION 0x10053330 */
