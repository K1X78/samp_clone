/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dbd70
 * Name: FUN_100dbd70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dbd70(undefined4 *param_1,SOCKET param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  param_1 = (undefined4 *)0x1;
  iVar3 = setsockopt(param_2,6,1,(char *)&param_1,4);
  if (iVar3 < 0) {
    iVar3 = WSAGetLastError();
    uVar4 = FUN_100c8180(puVar2,iVar3);
    FUN_100d8ae0(uVar1,"Could not set TCP_NODELAY: %s\n",uVar4);
    return;
  }
  FUN_100d8ae0(uVar1,"TCP_NODELAY set\n");
  return;
}


/* END FUNCTION 0x100dbd70 */
