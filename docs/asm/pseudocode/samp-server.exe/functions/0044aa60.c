/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044aa60
 * Name: FUN_0044aa60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_0044aa60(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6
            )

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  
  piVar3 = (int *)FUN_0041c720();
  iVar4 = FUN_0044aa10(param_1,param_2,param_3,param_5);
  if (iVar4 == 0) {
    return;
  }
  iVar2 = param_1[0x12];
  param_1[0x12] = iVar2 + 1;
  FUN_00414dd0(0x6c,param_4,param_6,iVar2 + 1);
  piVar1 = (int *)(*(int *)(iVar4 + 8) + 0x10);
  *piVar1 = *piVar1 + 1;
  FUN_00415110(-0x12,*(char **)(iVar4 + 8),piVar3);
  iVar4 = extraout_ECX;
  if ((*param_2 != 0) && (iVar4 = *param_1, (*(uint *)(iVar4 + 0xc) & 0x2000000) == 0)) {
    FUN_0040d660(iVar4,1);
    return;
  }
  FUN_0040d660(iVar4,0);
  return;
}


/* END FUNCTION 0x0044aa60 */
