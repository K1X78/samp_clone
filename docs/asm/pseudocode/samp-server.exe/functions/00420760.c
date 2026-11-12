/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420760
 * Name: FUN_00420760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00420760(int param_1,undefined4 param_2)

{
  int in_EAX;
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  
  pvVar1 = (void *)FUN_0041c720();
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_0040ec00();
    iVar3 = FUN_0040ec00();
    FUN_00414dd0(0x23,param_1,iVar2,2);
    FUN_0040d720(param_1);
    FUN_00414e70(param_2,7);
    FUN_00414dd0(0x50,iVar3,0,iVar2);
    FUN_00414dd0(0x24,param_1,2,iVar3);
    FUN_0040d680(pvVar1);
    FUN_0040ec20(extraout_ECX,in_EAX);
    FUN_0040ec20(extraout_ECX_00,extraout_EDX);
  }
  return;
}


/* END FUNCTION 0x00420760 */
