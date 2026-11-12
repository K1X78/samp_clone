/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048b030
 * Name: FUN_0048b030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_0048b030(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7,
            int param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint local_8;
  uint local_4;
  
  piVar1 = (int *)(param_5 + param_6 * 8);
  local_8 = 0;
  local_4 = 0;
  piVar3 = piVar1 + 1;
  uVar7 = 0;
  while (param_8 != 0) {
    uVar4 = param_3 - param_2;
    param_8 = param_8 + -1;
    if (param_7 <= uVar4) break;
    piVar2 = (int *)(param_5 + (((-(uint)(param_6 < uVar4) & param_7) - uVar4) + param_6) * 8);
    iVar5 = param_4 - uVar4;
    uVar4 = uVar7;
    if (local_4 <= uVar7) {
      uVar4 = local_4;
    }
    if (*(char *)(uVar4 + iVar5) == *(char *)(uVar4 + param_4)) {
      uVar4 = uVar4 + 1;
      if (uVar4 == param_1) {
LAB_0048b0d1:
        *piVar1 = *piVar2;
        *piVar3 = piVar2[1];
        return;
      }
      pcVar6 = (char *)(uVar4 + param_4);
      while (pcVar6[iVar5 - param_4] == *pcVar6) {
        uVar4 = uVar4 + 1;
        pcVar6 = pcVar6 + 1;
        if (uVar4 == param_1) goto LAB_0048b0d1;
      }
      uVar7 = local_8;
      if (uVar4 == param_1) goto LAB_0048b0d1;
    }
    if (*(byte *)(uVar4 + iVar5) < *(byte *)(uVar4 + param_4)) {
      *piVar1 = param_2;
      param_2 = piVar2[1];
      piVar1 = piVar2 + 1;
      local_4 = uVar4;
    }
    else {
      *piVar3 = param_2;
      param_2 = *piVar2;
      piVar3 = piVar2;
      uVar7 = uVar4;
      local_8 = uVar4;
    }
  }
  *piVar1 = 0;
  *piVar3 = 0;
  return;
}


/* END FUNCTION 0x0048b030 */
