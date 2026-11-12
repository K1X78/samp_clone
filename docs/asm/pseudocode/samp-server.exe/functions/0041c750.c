/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041c750
 * Name: FUN_0041c750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041c750(int param_1)

{
  int in_EAX;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_4;
  
  if ((*(int *)(param_1 + 0x30) == 0) && (FUN_0040eb00(), *(int *)(param_1 + 0x28) != 0)) {
    iVar3 = *(int *)(in_EAX + 0x48) + 1;
    *(int *)(in_EAX + 0x48) = iVar3;
    *(int *)(param_1 + 0x30) = iVar3;
    pvVar1 = (void *)FUN_0041c720();
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_0040e6e0(*(char **)(param_1 + 0x28),&local_4);
      if (iVar2 == 0) {
        FUN_00415dc0();
        FUN_00414e50(0x15);
        FUN_00414e70(iVar3,0x73);
      }
      else {
        FUN_00414e70(local_4,7);
        if (local_4 == 0) {
          FUN_00414e70(0,1);
        }
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        iVar2 = *(int *)(in_EAX + 0x48);
        iVar4 = iVar2 + 1;
        *(int *)(in_EAX + 0x48) = iVar4;
        *(int *)(param_1 + 0x34) = iVar4;
        *(int *)(in_EAX + 0x48) = *(int *)(in_EAX + 0x48) + 1;
        FUN_00415dc0();
        FUN_00414e50(0x15);
        FUN_00414e50(0x71);
        FUN_00414e70(0,7);
        FUN_0040d680(pvVar1);
        FUN_00414dd0(0x56,iVar3,iVar4,iVar2 + 2);
        FUN_00414e50(0x71);
        FUN_00414e70(0xffffffff,7);
        FUN_0040d680(pvVar1);
      }
    }
  }
  return;
}


/* END FUNCTION 0x0041c750 */
