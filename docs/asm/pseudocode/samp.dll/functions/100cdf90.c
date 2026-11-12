/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cdf90
 * Name: FUN_100cdf90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cdf90(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [12];
  
  uVar1 = param_1[0xe];
  FUN_100cc780(local_c,0xc,&DAT_1011c6d4,param_1[3]);
  iVar2 = FUN_100e0810(param_1[2],local_c,param_1 + 6,param_1 + 5);
  if (iVar2 != 0) {
    iVar3 = WSAGetLastError();
    if (iVar3 != 0) {
      iVar2 = WSAGetLastError();
    }
    param_1[4] = iVar2;
    if (iVar2 == 0) {
      param_1[4] = 8;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  if (param_1[1] == 0) {
    param_1[1] = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    return 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  FUN_100cde50();
  (*(code *)PTR__free_101554bc)(uVar1);
  return 0;
}


/* END FUNCTION 0x100cdf90 */
