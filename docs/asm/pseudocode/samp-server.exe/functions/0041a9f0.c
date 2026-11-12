/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a9f0
 * Name: FUN_0041a9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041a9f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = *in_EAX;
  iVar2 = (**(code **)(iVar1 + 0x100))
                    (*(undefined4 *)(iVar1 + 0x104),0x14,param_1,param_2,
                     *(undefined4 *)(param_3 * 0x10 + *(int *)(iVar1 + 8)),in_EAX[0x82]);
  if (iVar2 != 1) {
    if ((iVar2 != 2) && (iVar2 != 0)) {
      FUN_0041a9d0();
    }
    return iVar2;
  }
  if ((*(int *)(iVar1 + 4) < 3) && (param_3 == 0)) {
    FUN_00418b00((undefined **)"access to %s.%s is prohibited");
    in_EAX[1] = 0x17;
    return 1;
  }
  FUN_00418b00((undefined **)"access to %s.%s.%s is prohibited");
  in_EAX[1] = 0x17;
  return 1;
}


/* END FUNCTION 0x0041a9f0 */
