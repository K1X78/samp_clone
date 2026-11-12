/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004387a0
 * Name: FUN_004387a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_004387a0(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  undefined4 extraout_ECX;
  char *this;
  undefined4 uVar10;
  char local_14;
  char local_13;
  char local_12;
  
  iVar9 = *param_1;
  this = (char *)0x0;
  iVar5 = FUN_0041bac0(iVar9,param_4);
  if (iVar5 == 0) {
    return false;
  }
  iVar5 = *(int *)(in_EAX + 0x10);
  pcVar1 = *(char **)(*(int *)(iVar5 + 0xc) + 0x14);
  if (*pcVar1 != -0x68) {
    return false;
  }
  cVar2 = FUN_004157b0();
  if (cVar2 != 'a') {
    return false;
  }
  piVar6 = FUN_004300f0(pcVar1);
  if (piVar6 == (int *)0x0) {
    return false;
  }
  if ((*(char *)((int)piVar6 + 5) != '\x01') || (*param_4 != 0)) {
    if (*(char *)((int)piVar6 + 5) != '\x02') {
      return false;
    }
    if (*param_4 == 0) {
      return false;
    }
  }
  pcVar1 = (char *)**(undefined4 **)(iVar5 + 0xc);
  cVar2 = *pcVar1;
  if (cVar2 == -0x7c) {
    cVar2 = pcVar1[0x23];
  }
  if (cVar2 == -0x7b) {
    pvVar7 = FUN_00434300((int)*(short *)(pcVar1 + 0x1c));
    if ((pvVar7 != (void *)0x0) &&
       (uVar3 = FUN_0040dda0((int)pvVar7), CONCAT31(extraout_var,uVar3) == 3)) {
      this = (char *)FUN_0041ffb0();
    }
    FUN_0040dcf0((int)*(short *)(pcVar1 + 0x1c));
  }
  else {
    if (cVar2 != '^') goto LAB_004389c2;
    this = *(char **)(pcVar1 + 4);
  }
  if (this != (char *)0x0) {
    cVar4 = *this;
    iVar5 = 0;
    if (cVar4 != '\0') {
      do {
        if (((cVar4 == local_14) || (cVar4 == local_13)) || (cVar4 == local_12)) break;
        cVar4 = this[iVar5 + 1];
        iVar5 = iVar5 + 1;
      } while (cVar4 != '\0');
      if (((iVar5 != 0) && (cVar4 != '\0')) && (this[iVar5 + -1] != -1)) {
        if ((this[iVar5] == local_14) && (this[iVar5 + 1] == '\0')) {
          iVar8 = 1;
        }
        else {
          iVar8 = 0;
        }
        *param_3 = iVar8;
        iVar9 = FUN_0041a000(this,iVar9,0x5e);
        if (iVar9 != 0) {
          *(undefined1 *)(iVar5 + *(int *)(iVar9 + 4)) = 0;
        }
        *param_2 = iVar9;
        if (cVar2 == -0x7b) {
          pvVar7 = (void *)param_1[3];
          FUN_0040dcf0((int)*(short *)(pcVar1 + 0x1c));
          if ((*param_3 != 0) && (*(char *)(*(int *)(pcVar1 + 4) + 1) != '\0')) {
            iVar9 = FUN_0040ec00();
            FUN_00437710(param_1,pcVar1,iVar9);
            uVar10 = 0;
            FUN_0040d5c0();
            FUN_0040d640(pvVar7,uVar10);
            FUN_0040ec20(extraout_ECX,(int)param_1);
            FUN_0040d430();
            return this != (char *)0x0;
          }
        }
        goto LAB_004389c2;
      }
    }
    this = (char *)0x0;
  }
LAB_004389c2:
  FUN_0040d430();
  return this != (char *)0x0;
}


/* END FUNCTION 0x004387a0 */
