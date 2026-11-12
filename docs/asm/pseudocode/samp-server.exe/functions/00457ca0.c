/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00457ca0
 * Name: FUN_00457ca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00457ca0(int *param_1)

{
  int *this;
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piStack_4;
  
  piStack_4 = param_1;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar6 = 0;
  if (param_1[0xef] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0xee] + uVar6 * 4) + 0xc))(param_1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[0xef]);
  }
  this = param_1 + 0x37a;
LAB_00457ce0:
  do {
    piVar1 = param_1 + 0x374;
    puVar3 = (undefined4 *)FUN_00450e60(piVar1);
    while (puVar3 != (undefined4 *)0x0) {
      piStack_4 = (int *)*puVar3;
      FUN_00450e80((int)piVar1);
      puVar3 = (undefined4 *)FUN_00450e60(piVar1);
      FUN_0044e2a0(this,&piStack_4);
    }
    uVar6 = param_1[0x37b];
    if ((uint)param_1[0x37c] < uVar6) {
      iVar4 = param_1[0x37d] - uVar6;
    }
    else {
      iVar4 = -uVar6;
    }
    if (param_1[0x37c] + iVar4 == 0) {
      return 0;
    }
    iVar4 = param_1[0x37b];
    param_1[0x37b] = iVar4 + 1;
    if (iVar4 + 1 == param_1[0x37d]) {
      param_1[0x37b] = 0;
    }
    if (param_1[0x37b] == 0) {
      iVar4 = *(int *)(*this + -4 + param_1[0x37d] * 4);
    }
    else {
      iVar4 = *(int *)(*this + -4 + param_1[0x37b] * 4);
    }
    if ((4 < *(uint *)(iVar4 + 8)) && (**(char **)(iVar4 + 0x10) == '(')) {
      FUN_00455dc0(param_1,(undefined4 *)(*(char **)(iVar4 + 0x10) + 1),*(undefined4 *)(iVar4 + 2),
                   *(undefined2 *)(iVar4 + 6));
    }
    if (**(char **)(iVar4 + 0x10) == '\x15') {
      FUN_00450870(param_1,(int)*(char **)(iVar4 + 0x10),*(int *)(iVar4 + 8));
    }
    else {
      uVar6 = 0;
      if (param_1[0xef] == 0) {
        return iVar4;
      }
      while (iVar5 = (**(code **)(**(int **)(param_1[0xee] + uVar6 * 4) + 0x10))(param_1,iVar4),
            iVar5 != 0) {
        if (iVar5 == 2) goto LAB_00457ce0;
        uVar6 = uVar6 + 1;
        if ((uint)param_1[0xef] <= uVar6) {
          return iVar4;
        }
      }
    }
    (**(code **)(*param_1 + 0x3c))(iVar4);
  } while( true );
}


/* END FUNCTION 0x00457ca0 */
