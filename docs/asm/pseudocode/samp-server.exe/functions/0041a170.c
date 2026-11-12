/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a170
 * Name: FUN_0041a170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041a170(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int *local_10;
  int local_c;
  
  iVar1 = *param_1;
  if (param_2 != 0) {
    pcVar2 = *(char **)(param_2 + 4);
    if (pcVar2[1] == '\0') {
      iVar3 = param_1[0x72];
      param_1[0x72] = iVar3 + 1;
      *(short *)(param_2 + 0x1c) = (short)(iVar3 + 1);
    }
    else if (*pcVar2 == '?') {
      lVar5 = _atol(pcVar2 + 1);
      *(short *)(param_2 + 0x1c) = (short)lVar5;
      if ((lVar5 < 1) || (*(int *)(iVar1 + 0x6c) < lVar5)) {
        FUN_00418b00((undefined **)"variable number must be between ?1 and ?%d");
      }
      if (param_1[0x72] < lVar5) {
        param_1[0x72] = lVar5;
      }
    }
    else {
      uVar6 = FUN_00408380(pcVar2);
      local_c = 0;
      if (0 < param_1[0x73]) {
        local_10 = (int *)param_1[0x75];
        do {
          pcVar4 = *(char **)(*local_10 + 4);
          bVar11 = true;
          uVar8 = uVar6;
          pcVar9 = pcVar4;
          pcVar10 = pcVar2;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            bVar11 = *pcVar9 == *pcVar10;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar11);
          if ((bVar11) && (pcVar4[uVar6] == '\0')) {
            *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(*local_10 + 0x1c);
            break;
          }
          local_c = local_c + 1;
          local_10 = local_10 + 1;
        } while (local_c < param_1[0x73]);
      }
      if (param_1[0x73] <= local_c) {
        iVar3 = param_1[0x72];
        param_1[0x72] = iVar3 + 1;
        *(short *)(param_2 + 0x1c) = (short)(iVar3 + 1);
        if (param_1[0x74] + -1 <= param_1[0x73]) {
          iVar3 = param_1[0x74] * 2 + 10;
          param_1[0x74] = iVar3;
          puVar7 = FUN_00412a50(param_1[0x73],iVar3 * 4);
          param_1[0x75] = (int)puVar7;
        }
        if (*(char *)(iVar1 + 0x1e) == '\0') {
          *(int *)(param_1[0x75] + param_1[0x73] * 4) = param_2;
          param_1[0x73] = param_1[0x73] + 1;
        }
      }
    }
    if ((param_1[0x10] == 0) && (*(int *)(iVar1 + 0x6c) < param_1[0x72])) {
      FUN_00418b00((undefined **)"too many SQL variables");
    }
  }
  return;
}


/* END FUNCTION 0x0041a170 */
