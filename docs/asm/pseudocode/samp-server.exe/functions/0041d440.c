/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d440
 * Name: FUN_0041d440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_0041d440(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_4;
  
  iVar2 = *(int *)(param_2 + 0x14);
  iVar8 = 0;
  if (0 < iVar2) {
    pbVar4 = (byte *)(*(int *)(param_2 + 0x1c) + 0x10);
    do {
      if ((*(int *)(pbVar4 + -8) == *(int *)(param_3 + 0x18)) && ((*pbVar4 & 0x81) == 0)) {
        iVar8 = iVar8 + 1;
      }
      pbVar4 = pbVar4 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_4 = 0;
  if (param_4 != (int *)0x0) {
    iVar2 = *param_4;
    iVar5 = 0;
    if (0 < iVar2) {
      puVar7 = (undefined4 *)param_4[3];
      do {
        if ((*(char *)*puVar7 != -0x68) ||
           (*(int *)((char *)*puVar7 + 0x18) != *(int *)(param_3 + 0x18))) break;
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 5;
      } while (iVar5 < iVar2);
    }
    if (iVar5 == iVar2) {
      local_4 = iVar2;
    }
  }
  piVar3 = FUN_00417b70();
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 0xc + iVar8 * 3;
    *piVar3 = iVar8;
    piVar3[2] = local_4;
    piVar3[1] = (int)(piVar3 + 0xc);
    piVar3[3] = (int)piVar1;
    piVar3[4] = (int)(piVar1 + local_4 * 2);
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0x14)) {
      pbVar6 = (byte *)(*(int *)(param_2 + 0x1c) + 0x10);
      pbVar4 = (byte *)(piVar3 + 0xd);
      do {
        if ((*(int *)(pbVar6 + -8) == *(int *)(param_3 + 0x18)) && ((*pbVar6 & 0x81) == 0)) {
          *(undefined4 *)(pbVar4 + -4) = *(undefined4 *)(pbVar6 + -4);
          *(int *)(pbVar4 + 4) = iVar2;
          *pbVar4 = *pbVar6;
          pbVar4 = pbVar4 + 0xc;
        }
        iVar2 = iVar2 + 1;
        pbVar6 = pbVar6 + 0x28;
      } while (iVar2 < *(int *)(param_2 + 0x14));
    }
    iVar2 = 0;
    if (0 < local_4) {
      iVar8 = 0;
      do {
        piVar1[iVar2 * 2] = (int)*(short *)(*(int *)(iVar8 + param_4[3]) + 0x1c);
        *(undefined1 *)(piVar1 + iVar2 * 2 + 1) = *(undefined1 *)(param_4[3] + 0xc + iVar8);
        iVar2 = iVar2 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar2 < local_4);
    }
    return piVar3;
  }
  FUN_00418b00((undefined **)"out of memory");
  return (int *)0x0;
}


/* END FUNCTION 0x0041d440 */
