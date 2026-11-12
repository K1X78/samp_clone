/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d90c0
 * Name: FUN_100d90c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d90c0(int *param_1,int param_2,char *param_3,int param_4,undefined4 *param_5)

{
  SOCKET s;
  int iVar1;
  undefined4 uVar2;
  
  s = param_1[param_2 + 0x66];
  FUN_100d9000();
  iVar1 = send(s,param_3,param_4,0);
  *param_5 = 0;
  if (iVar1 != -1) {
    return iVar1;
  }
  iVar1 = WSAGetLastError();
  if (iVar1 == 0x2733) {
    *param_5 = 0x51;
    return 0;
  }
  uVar2 = FUN_100c8180(param_1,iVar1);
  FUN_100d8ba0(*param_1,"Send failure: %s",uVar2);
  *(int *)(*param_1 + 0x48ac) = iVar1;
  *param_5 = 0x37;
  return -1;
}


/* END FUNCTION 0x100d90c0 */
