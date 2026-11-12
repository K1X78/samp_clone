/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a180
 * Name: FUN_0040a180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040a180(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_EBX;
  int *piVar5;
  undefined4 *puVar6;
  
  piVar5 = (int *)0x0;
  if ((unaff_EBX[10] == 0) && (param_2 != 0)) {
    iVar1 = (*DAT_004ca190)(unaff_EBX[6] + 0x24 + unaff_EBX[5],unaff_EBX[7]);
    if (iVar1 == 0) {
      return 7;
    }
    (*DAT_004ca194)(iVar1,unaff_EBX[4]);
    unaff_EBX[10] = iVar1;
  }
  if ((unaff_EBX[7] == 0) || (*unaff_EBX == 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = (iVar1 + 1) * param_2;
  if ((unaff_EBX[10] == 0) ||
     (piVar5 = (int *)(*DAT_004ca19c)(unaff_EBX[10],param_1,iVar1), piVar5 == (int *)0x0)) {
    if (iVar1 != 1) goto LAB_0040a2d9;
    for (iVar2 = unaff_EBX[2];
        (iVar2 != 0 && ((*(short *)(iVar2 + 0x16) != 0 || ((*(byte *)(iVar2 + 0x14) & 4) != 0))));
        iVar2 = *(int *)(iVar2 + 0x20)) {
    }
    unaff_EBX[2] = iVar2;
    if (iVar2 == 0) {
      for (iVar2 = unaff_EBX[1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
        if (*(short *)(iVar2 + 0x16) == 0) goto LAB_0040a247;
      }
    }
    else {
LAB_0040a247:
      iVar2 = (*(code *)unaff_EBX[8])(unaff_EBX[9],iVar2);
      if ((iVar2 != 0) && (iVar2 != 5)) {
        return iVar2;
      }
    }
    piVar5 = (int *)(*DAT_004ca19c)(unaff_EBX[10],param_1,2);
    if (piVar5 == (int *)0x0) goto LAB_0040a2d9;
  }
  if (*piVar5 == 0) {
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    piVar5[8] = 0;
    *piVar5 = (int)(piVar5 + 9);
    puVar6 = (undefined4 *)(unaff_EBX[5] + (int)(piVar5 + 9));
    piVar5[1] = (int)puVar6;
    uVar4 = unaff_EBX[6];
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    piVar5[6] = (int)unaff_EBX;
    piVar5[3] = param_1;
  }
  if (*(short *)((int)piVar5 + 0x16) == 0) {
    unaff_EBX[3] = unaff_EBX[3] + 1;
  }
  *(short *)((int)piVar5 + 0x16) = *(short *)((int)piVar5 + 0x16) + 1;
  if (param_1 == 1) {
    unaff_EBX[0xb] = (int)piVar5;
  }
LAB_0040a2d9:
  *param_3 = piVar5;
  if ((piVar5 == (int *)0x0) && (iVar1 != 0)) {
    return 7;
  }
  return 0;
}


/* END FUNCTION 0x0040a180 */
