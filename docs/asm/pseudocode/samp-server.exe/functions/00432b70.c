/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00432b70
 * Name: FUN_00432b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_00432b70(int *param_1,int *param_2,int *param_3,int param_4,int *param_5,int param_6,
            uint *param_7)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  int local_14;
  undefined4 *local_10;
  
  iVar6 = *param_1;
  local_10 = (undefined4 *)param_5[3];
  iVar8 = 0;
  iVar1 = *param_5;
  bVar3 = 0;
  local_14 = 0;
  if (0 < iVar1) {
    do {
      if (((param_3[1] < iVar8) || (pcVar2 = (char *)*local_10, *pcVar2 != -0x68)) ||
         (*(int *)(pcVar2 + 0x18) != param_4)) break;
      piVar4 = FUN_004300f0(pcVar2);
      if (piVar4 == (int *)0x0) {
        piVar4 = *(int **)(iVar6 + 0x2c);
      }
      if ((*param_3 == 0) || (param_3[1] <= iVar8)) {
        pbVar7 = (byte *)*piVar4;
        iVar9 = -1;
        bVar10 = 0;
      }
      else {
        iVar9 = *(int *)(param_3[2] + iVar8 * 4);
        if (iVar9 == *(int *)(param_3[4] + 8)) {
          iVar9 = -1;
        }
        bVar10 = *(byte *)(param_3[10] + iVar8);
        pbVar7 = *(byte **)(param_3[0xb] + iVar8 * 4);
      }
      if ((*(short *)(pcVar2 + 0x1c) == iVar9) &&
         (iVar5 = FUN_00408450((byte *)*piVar4,pbVar7), iVar5 == 0)) {
        bVar10 = *(byte *)(local_10 + 3) ^ bVar10;
        if ((param_6 < iVar8) && (bVar11 = bVar10 != bVar3, bVar10 = bVar3, bVar11)) {
          return 0;
        }
        local_14 = local_14 + 1;
        local_10 = local_10 + 5;
        bVar3 = bVar10;
        if ((iVar9 < 0) && (iVar9 = FUN_004171e0(param_2,param_5,param_2,local_14), iVar9 == 0)) {
          local_14 = iVar1;
        }
      }
      else if (param_6 <= iVar8) {
        if (iVar8 != param_3[1]) {
          return 0;
        }
        break;
      }
      iVar8 = iVar8 + 1;
    } while (local_14 < iVar1);
  }
  *param_7 = (uint)(bVar3 != 0);
  if ((local_14 < iVar1) &&
     ((((char)param_3[6] == '\0' || (iVar8 != param_3[1])) ||
      (iVar6 = FUN_004171e0((void *)CONCAT31((int3)((uint)param_7 >> 8),(char)param_3[6]),param_5,
                            param_2,local_14), iVar6 != 0)))) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x00432b70 */
