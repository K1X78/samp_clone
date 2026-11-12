/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462ce0
 * Name: FUN_00462ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00462ce0(SOCKET param_1,char *param_2,int param_3,char *param_4,u_short param_5)

{
  ulong uVar1;
  
  uVar1 = inet_addr(param_4);
  FUN_00462c60(param_1,param_2,param_3,uVar1,param_5);
  return;
}


/* END FUNCTION 0x00462ce0 */
