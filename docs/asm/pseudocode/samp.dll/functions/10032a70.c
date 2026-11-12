/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032a70
 * Name: FUN_10032a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10032a70(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    FUN_10032890();
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_100325a0(param_2,&param_2);
  puVar3 = param_2;
  iVar1 = *(int *)(param_1 + 8);
  puVar4 = (undefined4 *)*puVar4;
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  iVar2 = puVar4[2];
  if (iVar2 == 0) {
    if (puVar4[1] == 0) {
      if (param_2 != (undefined4 *)0x0) {
        if (iVar1 == 1) {
          param_2[1] = 0;
        }
        else {
          param_2[2] = 0;
        }
      }
      pvVar5 = (void *)*puVar4;
      goto LAB_10032ad6;
    }
  }
  else {
    if (puVar4[1] == 0) {
      if (param_2 == (undefined4 *)0x0) {
        *(int *)(param_1 + 4) = iVar2;
        pvVar5 = (void *)*puVar4;
      }
      else if (iVar1 == 2) {
        param_2[2] = iVar2;
        pvVar5 = (void *)*puVar4;
      }
      else {
        param_2[1] = iVar2;
        pvVar5 = (void *)*puVar4;
      }
      goto LAB_10032ad6;
    }
    if (iVar2 != 0) goto LAB_10032b52;
  }
  iVar2 = puVar4[1];
  if (iVar2 == 0) {
LAB_10032b52:
    *(undefined4 *)(param_1 + 8) = 2;
    iVar1 = ((undefined4 *)puVar4[2])[1];
    puVar3 = (undefined4 *)puVar4[2];
    while (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 1;
      iVar1 = ((undefined4 *)puVar3[1])[1];
      puVar4 = puVar3;
      puVar3 = (undefined4 *)puVar3[1];
    }
    FUN_100326a0(*puVar3);
    iVar1 = puVar3[2];
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 8) == 2) {
        puVar4[2] = 0;
        pvVar5 = (void *)*puVar3;
      }
      else {
        puVar4[1] = 0;
        pvVar5 = (void *)*puVar3;
      }
    }
    else {
      if (*(int *)(param_1 + 8) == 2) {
        puVar4[2] = iVar1;
      }
      else {
        puVar4[1] = iVar1;
      }
      pvVar5 = (void *)*puVar3;
    }
    _free(pvVar5);
    _free(puVar3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    return puVar4;
  }
  if (param_2 == (undefined4 *)0x0) {
    *(int *)(param_1 + 4) = iVar2;
    pvVar5 = (void *)*puVar4;
  }
  else if (iVar1 == 2) {
    param_2[2] = iVar2;
    pvVar5 = (void *)*puVar4;
  }
  else {
    param_2[1] = iVar2;
    pvVar5 = (void *)*puVar4;
  }
LAB_10032ad6:
  _free(pvVar5);
  _free(puVar4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return puVar3;
}


/* END FUNCTION 0x10032a70 */
