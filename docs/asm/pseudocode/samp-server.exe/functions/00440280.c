/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00440280
 * Name: FUN_00440280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00440280(int param_1,int *param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1;
  piVar3 = param_2;
  for (iVar1 = *(int *)(in_EAX + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    iVar4 = iVar4 + 1;
    if ((param_2 == (int *)0x0) || (*piVar3 != 0)) {
      iVar2 = FUN_00438460(unaff_EBX,iVar1,param_1,0,0);
      FUN_00414dd0(0x47,iVar4,iVar2,*(int *)(iVar1 + 4) + 1);
    }
    piVar3 = piVar3 + 1;
  }
  return;
}


/* END FUNCTION 0x00440280 */
