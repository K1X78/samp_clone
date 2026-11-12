/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048aeb0
 * Name: FUN_0048aeb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint * __cdecl
FUN_0048aeb0(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7,
            int param_8,uint *param_9,uint param_10)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint local_8;
  uint local_4;
  
  piVar1 = (int *)(param_5 + param_6 * 8);
  local_8 = 0;
  local_4 = 0;
  piVar3 = piVar1 + 1;
  while (param_8 != 0) {
    uVar6 = param_3 - param_2;
    param_8 = param_8 + -1;
    if (param_7 <= uVar6) break;
    piVar2 = (int *)(param_5 + (((-(uint)(param_6 < uVar6) & param_7) - uVar6) + param_6) * 8);
    iVar7 = param_4 - uVar6;
    uVar4 = local_8;
    if (local_4 <= local_8) {
      uVar4 = local_4;
    }
    uVar5 = uVar4;
    if (*(char *)(uVar4 + iVar7) == *(char *)(uVar4 + param_4)) {
      uVar5 = uVar4 + 1;
      if (((uVar5 != param_1) && (*(char *)(uVar5 + iVar7) == *(char *)(uVar5 + param_4))) &&
         (uVar5 = uVar4 + 2, uVar5 != param_1)) {
        pcVar8 = (char *)(uVar5 + param_4);
        do {
          if (pcVar8[iVar7 - param_4] != *pcVar8) break;
          uVar5 = uVar5 + 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar5 != param_1);
      }
      if (param_10 < uVar5) {
        *param_9 = uVar5;
        param_9[1] = uVar6 - 1;
        param_9 = param_9 + 2;
        param_10 = uVar5;
        if (uVar5 == param_1) {
          *piVar1 = *piVar2;
          *piVar3 = piVar2[1];
          return param_9;
        }
      }
    }
    if (*(byte *)(uVar5 + iVar7) < *(byte *)(uVar5 + param_4)) {
      *piVar1 = param_2;
      piVar1 = piVar2 + 1;
      param_2 = *piVar1;
      local_4 = uVar5;
    }
    else {
      *piVar3 = param_2;
      param_2 = *piVar2;
      piVar3 = piVar2;
      local_8 = uVar5;
    }
  }
  *piVar1 = 0;
  *piVar3 = 0;
  return param_9;
}


/* END FUNCTION 0x0048aeb0 */
