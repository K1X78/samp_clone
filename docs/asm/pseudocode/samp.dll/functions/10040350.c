/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10040350
 * Name: FUN_10040350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10040350(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  int *piStack_4;
  
  piStack_4 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = 0;
  if (*(int *)((int)param_1 + 0x3b1) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)param_1 + 0x3ad) + uVar4 * 4) + 0xc))(param_1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)param_1 + 0x3b1));
  }
LAB_10040390:
  do {
    ppiVar6 = (int **)0x1004039d;
    puVar2 = (undefined4 *)FUN_10039120();
    while (uVar8 = (undefined2)((uint)ppiVar6 >> 0x10), puVar2 != (undefined4 *)0x0) {
      piStack_4 = (int *)*puVar2;
      FUN_10039140();
      puVar2 = (undefined4 *)FUN_10039120();
      ppiVar6 = &piStack_4;
      FUN_10039220(ppiVar6);
    }
    uVar4 = *(uint *)((int)param_1 + 0xdd2);
    if (*(uint *)((int)param_1 + 0xdd6) < uVar4) {
      iVar5 = *(int *)((int)param_1 + 0xdda) - uVar4;
    }
    else {
      iVar5 = -uVar4;
    }
    if (*(uint *)((int)param_1 + 0xdd6) + iVar5 == 0) {
      return 0;
    }
    iVar5 = *(int *)((int)param_1 + 0xdd2) + 1;
    *(int *)((int)param_1 + 0xdd2) = iVar5;
    if (iVar5 == *(int *)((int)param_1 + 0xdda)) {
      *(undefined4 *)((int)param_1 + 0xdd2) = 0;
    }
    if (*(int *)((int)param_1 + 0xdd2) == 0) {
      iVar5 = *(int *)(*(int *)((int)param_1 + 0xdce) + -4 + *(int *)((int)param_1 + 0xdda) * 4);
    }
    else {
      iVar5 = *(int *)(*(int *)((int)param_1 + 0xdce) + -4 + *(int *)((int)param_1 + 0xdd2) * 4);
    }
    if ((4 < *(uint *)(iVar5 + 8)) && (**(char **)(iVar5 + 0x10) == '(')) {
      uVar7 = CONCAT22(uVar8,*(undefined2 *)(iVar5 + 6));
      FUN_1003e670(*(char **)(iVar5 + 0x10) + 1,*(undefined4 *)(iVar5 + 2),uVar7);
      uVar8 = (undefined2)((uint)uVar7 >> 0x10);
    }
    if (**(char **)(iVar5 + 0x10) == '\x15') {
      FUN_100388c0(*(char **)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 2),
                   CONCAT22(uVar8,*(undefined2 *)(iVar5 + 6)));
    }
    else {
      uVar4 = 0;
      if (*(int *)((int)param_1 + 0x3b1) == 0) {
        return iVar5;
      }
      while (iVar3 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0x3ad) + uVar4 * 4) + 0x10))
                               (param_1,iVar5), iVar3 != 0) {
        if (iVar3 == 2) goto LAB_10040390;
        uVar4 = uVar4 + 1;
        if (*(uint *)((int)param_1 + 0x3b1) <= uVar4) {
          return iVar5;
        }
      }
    }
    (**(code **)(*param_1 + 0x3c))(iVar5);
  } while( true );
}


/* END FUNCTION 0x10040350 */
