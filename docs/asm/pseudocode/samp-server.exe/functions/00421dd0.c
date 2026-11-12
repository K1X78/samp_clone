/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421dd0
 * Name: FUN_00421dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00421dd0(int *param_1,int param_2)

{
  void *pvVar1;
  void *in_EAX;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int iVar4;
  
  iVar4 = *param_1;
  pvVar1 = *(void **)((int)in_EAX + 0xc);
  iVar2 = FUN_0040ec60((int)in_EAX);
  iVar3 = FUN_0040ec00();
  FUN_0040eb00();
  FUN_00420330(in_EAX,iVar2,0);
  FUN_00414e70(param_1[2],0x35);
  FUN_00415c30(1);
  FUN_00414dd0(0x1e,iVar2,iVar4 + 2,iVar3);
  FUN_00414e70(param_1[2],0x46);
  FUN_0040ec20(extraout_ECX,(int)in_EAX);
  FUN_0040ec90(iVar2);
  if (*(int *)(param_2 + 0x30) != 0) {
    iVar4 = *(int *)(param_2 + 0x34) + 1;
    if (*(int *)(param_2 + 0x34) == 0) {
      iVar4 = *(int *)(param_2 + 0x30);
    }
    FUN_00414e50(0x73);
    FUN_00414e70(iVar4,0x14);
    FUN_00414e30();
    FUN_0040d680(pvVar1);
    FUN_00414e50(0x3f);
    FUN_00414e50(0x39);
    FUN_0040d680(pvVar1);
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  return;
}


/* END FUNCTION 0x00421dd0 */
