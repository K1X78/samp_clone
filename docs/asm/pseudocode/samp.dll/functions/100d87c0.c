/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d87c0
 * Name: FUN_100d87c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d87c0(SOCKET param_1,char *param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = recv(param_1,param_2,param_3,0);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    return (-(uint)(iVar1 != 0x2733) & 0xffffffe7) + 0x51;
  }
  *param_4 = iVar1;
  return 0;
}


/* END FUNCTION 0x100d87c0 */
