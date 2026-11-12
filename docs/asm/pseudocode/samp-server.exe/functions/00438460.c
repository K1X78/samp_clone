/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00438460
 * Name: FUN_00438460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00438460(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 4);
  piVar3 = *(int **)(param_1 + 0xc);
  iVar5 = FUN_0040ec60(param_1);
  FUN_00414e70(param_3,0x3d);
  local_14 = 0;
  iVar7 = iVar5;
  if (0 < iVar2) {
    do {
      iVar4 = *(int *)(*(int *)(param_2 + 8) + local_14 * 4);
      if (iVar4 == *(int *)(iVar1 + 8)) {
        FUN_00414e70(iVar5 + iVar2,0xf);
      }
      else {
        FUN_00414dd0(0x1c,param_3,iVar4,iVar7);
        FUN_00436960(-1);
      }
      local_14 = local_14 + 1;
      iVar7 = iVar7 + 1;
    } while (local_14 < iVar2);
  }
  if (param_5 != 0) {
    FUN_00414dd0(0x1e,iVar5,iVar2 + 1,param_4);
    pcVar6 = (char *)FUN_004169f0();
    FUN_00415110(0,pcVar6,piVar3);
  }
  FUN_0040ec90(iVar5);
  return iVar5;
}


/* END FUNCTION 0x00438460 */
