/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dba80
 * Name: FUN_100dba80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dba80(SOCKET param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 4;
  SleepEx(0,0);
  iVar1 = getsockopt(param_1,0xffff,0x1007,(char *)local_8,local_8 + 1);
  if (iVar1 != 0) {
    local_8[0] = WSAGetLastError();
  }
  if ((local_8[0] == 0) || (local_8[0] == 0x2748)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (unaff_ESI != (int *)0x0) {
    *unaff_ESI = local_8[0];
  }
  return uVar2;
}


/* END FUNCTION 0x100dba80 */
