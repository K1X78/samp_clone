/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004349d0
 * Name: FUN_004349d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004349d0(char *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *in_EAX;
  undefined3 extraout_var;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int local_30;
  
  iVar9 = in_EAX[0x11];
  in_EAX[0x11] = iVar9 + 1;
  local_30 = 0;
  if ((param_1[3] & 8U) == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *(int **)(param_1 + 0x10);
  }
  if ((in_EAX[0x10] == 0) && (bVar3 = FUN_0040e8c0(), CONCAT31(extraout_var,bVar3) != 0)) {
    iVar12 = *in_EAX;
    iVar10 = (int)*(short *)(**(int **)(*piVar7 + 0xc) + 0x1c);
    pvVar5 = (void *)FUN_0041c720();
    iVar2 = *(int *)(piVar7[2] + 0x14);
    iVar6 = FUN_0040fc30(iVar12);
    FUN_0042cd30();
    FUN_00416230(iVar6,*(int *)(iVar2 + 0x18),'\0',*(int *)(iVar2 + 4));
    if (iVar10 < 0) {
      in_EAX[0x12] = in_EAX[0x12] + 1;
      FUN_00414e50(0x1a);
      FUN_00414e70(1,7);
      FUN_004215c0(iVar9,iVar6,0x26);
      FUN_0040d680(pvVar5);
      *(int *)(param_1 + 0x18) = iVar9;
      return 1;
    }
    piVar7 = FUN_00430190();
    cVar4 = FUN_00415840();
    if ((*(char *)(*(int *)(iVar2 + 0x10) + 0x16 + iVar10 * 0x18) == cVar4) ||
       (bVar3 = false, cVar4 == 'b')) {
      bVar3 = true;
    }
    piVar11 = *(int **)(iVar2 + 0x14);
    if (piVar11 != (int *)0x0) {
      do {
        if (local_30 != 0) goto LAB_00434cc9;
        if (!bVar3) goto LAB_00434c61;
        if (((*(int *)piVar11[2] == iVar10) &&
            (piVar8 = FUN_0041b6e0(iVar12,0,*(byte *)(*(int *)(*(int *)(iVar12 + 8) + 0xc) + 0x49)),
            piVar8 == piVar7)) &&
           ((param_2 != (int *)0x0 || ((piVar11[1] == 1 && ((char)piVar11[6] != '\0')))))) {
          in_EAX[0x12] = in_EAX[0x12] + 1;
          piVar8 = FUN_00430960(in_EAX,piVar11);
          FUN_00414e50(0x1a);
          FUN_00414e70(1,7);
          FUN_004197c0(piVar11[5],iVar9,0x26,(char *)piVar8,-0x10);
          local_30 = 3;
          FUN_0040d680(pvVar5);
          if ((param_2 != (int *)0x0) &&
             (*(char *)(*(int *)(iVar2 + 0x10) + 0x14 + iVar10 * 0x18) == '\0')) {
            iVar6 = in_EAX[0x12];
            in_EAX[0x12] = iVar6 + 1;
            *param_2 = iVar6 + 1;
          }
        }
        piVar11 = (int *)piVar11[8];
      } while (piVar11 != (int *)0x0);
      if (local_30 != 0) {
LAB_00434cc9:
        *(int *)(param_1 + 0x18) = iVar9;
        return local_30;
      }
    }
  }
LAB_00434c61:
  uVar1 = *(undefined8 *)(in_EAX + 0x70);
  iVar9 = 0;
  iVar12 = 2;
  if (param_2 == (int *)0x0) {
    in_EAX[0x70] = 0;
    in_EAX[0x71] = 0x3ff00000;
    if ((*(short *)(*(int *)(param_1 + 8) + 0x1c) < 0) && ((param_1[3] & 8U) == 0)) {
      iVar12 = 1;
    }
  }
  else {
    iVar9 = in_EAX[0x12] + 1;
    in_EAX[0x12] = iVar9;
    *param_2 = iVar9;
  }
  FUN_00430230(param_1,iVar9,(uint)(iVar12 == 1));
  *(undefined8 *)(in_EAX + 0x70) = uVar1;
  return iVar12;
}


/* END FUNCTION 0x004349d0 */
