/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462d90
 * Name: FUN_00462d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


u_short FUN_00462d90(SOCKET param_1)

{
  u_short uVar1;
  int iVar2;
  int local_14;
  sockaddr local_10;
  
  local_14 = 0x10;
  iVar2 = getsockname(param_1,&local_10,&local_14);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = ntohs(local_10.sa_data._0_2_);
  return uVar1;
}


/* END FUNCTION 0x00462d90 */
