/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004140f0
 * Name: FUN_004140f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004140f0(undefined4 *param_1)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_8;
  uint local_4;
  
  iVar2 = *in_EAX;
  bVar3 = *(int *)in_EAX[0xf] == 0;
  *param_1 = 0;
  if ((((!bVar3) || (iVar1 = FUN_00407c50(), iVar1 == 0)) && (iVar1 = FUN_00407b70(), iVar1 == 0))
     && ((local_8 == 0 && (iVar1 = FUN_00414010(&local_4), iVar1 == 0)))) {
    if (local_4 == 0) {
      FUN_00407d90();
      iVar2 = FUN_00407b50();
      if (iVar2 == 0) {
        FUN_00407c40();
        FUN_00407b60();
      }
      FUN_00407da0();
      return 0;
    }
    if (bVar3) {
      local_4 = 0x801;
      iVar1 = FUN_00407c20(iVar2,&local_4,in_EAX[0x24],in_EAX[0xf]);
    }
    if (iVar1 == 0) {
      iVar2 = FUN_00407ad0();
      if (iVar2 == 0x20a) {
        iVar2 = 0;
      }
      if (bVar3) {
        FUN_00407ab0();
      }
      *param_1 = 0;
      return iVar2;
    }
    if (iVar1 == 0xe) {
      *param_1 = 1;
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x004140f0 */
