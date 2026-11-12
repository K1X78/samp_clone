/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041c530
 * Name: FUN_0041c530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041c530(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *in_EAX;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_1c;
  int local_18;
  undefined4 *local_10;
  
  iVar2 = *in_EAX;
  iVar3 = *param_1;
  *param_2 = iVar3;
  puVar5 = FUN_00417b70();
  *param_3 = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    local_18 = 0;
    if (0 < iVar3) {
      local_1c = 0;
      local_10 = puVar5;
      do {
        pcVar4 = *(char **)(param_1[3] + local_1c);
        if (((undefined4 *)(param_1[3] + local_1c))[1] == 0) {
          cVar1 = *pcVar4;
          while (cVar1 == 'v') {
            pcVar4 = *(char **)(pcVar4 + 0xc);
            cVar1 = *pcVar4;
          }
          pbVar6 = (byte *)FUN_00418920((undefined **)&DAT_004b23ac);
        }
        else {
          pbVar6 = (byte *)FUN_00412a70();
        }
        if (*(char *)(iVar2 + 0x1e) != '\0') {
          FUN_00408130(iVar2);
          break;
        }
        uVar7 = FUN_00408380((char *)pbVar6);
        iVar9 = 0;
        if (0 < local_1c) {
          do {
            iVar8 = FUN_00408450((byte *)puVar5[iVar9 * 6],pbVar6);
            if (iVar8 == 0) {
              pbVar6[uVar7] = 0;
              pbVar6 = (byte *)FUN_00418920((undefined **)"%s:%d");
              FUN_00408130(iVar2);
              iVar9 = -1;
              if (pbVar6 == (byte *)0x0) break;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_18);
        }
        *local_10 = pbVar6;
        local_10 = local_10 + 6;
        local_18 = local_18 + 1;
        local_1c = local_1c + 0x14;
      } while (local_18 < iVar3);
    }
    if (*(char *)(iVar2 + 0x1e) == '\0') {
      return 0;
    }
    if (0 < local_18) {
      do {
        FUN_00408130(iVar2);
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    FUN_00408130(iVar2);
    *param_3 = 0;
    *param_2 = 0;
  }
  return 7;
}


/* END FUNCTION 0x0041c530 */
