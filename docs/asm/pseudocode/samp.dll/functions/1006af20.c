/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006af20
 * Name: FUN_1006af20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1006af20(int param_1,int *param_2,char *param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int *piStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  char *pcStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    if (param_2 == (int *)0x0) {
      param_2 = *(int **)(param_1 + 0x14);
      uStack_1c = 0x1006af5e;
      piStack_18 = param_2;
      (**(code **)(*param_2 + 0x20))();
    }
    uVar2 = param_8;
    if (param_10 != 0) {
      pcVar3 = param_3;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (100000 < (uint)((int)pcVar3 - (int)(param_3 + 1))) {
        return;
      }
      pcVar3 = *(char **)(param_1 + 0x1c);
      pcVar4 = param_3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      piStack_18 = *(int **)(param_1 + 0x1c);
      uStack_1c = 0x1006afa3;
      FUN_100b5c00();
      pcVar4 = *(char **)(param_1 + 0x1c);
      pcVar3 = pcVar4 + 1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      piStack_18 = (int *)0xff000000;
      uStack_1c = uVar2;
      iVar5 = (int)pcVar4 - (int)pcVar3;
      piStack_30 = *(int **)(param_1 + 0xc);
      puStack_20 = &param_4;
      pcStack_28 = *(char **)(param_1 + 0x1c);
      param_5 = param_5 + -1;
      piStack_34 = (int *)0x1006afdc;
      piStack_2c = param_2;
      iStack_24 = iVar5;
      (**(code **)(*piStack_30 + 0x38))();
      piStack_34 = (int *)0xff000000;
      uStack_38 = uVar2;
      puStack_3c = &stack0xfffffff0;
      uStack_44 = *(undefined4 *)(param_1 + 0x1c);
      piStack_48 = param_2;
      iStack_40 = iVar5;
      (**(code **)(**(int **)(param_1 + 0xc) + 0x38))(*(int **)(param_1 + 0xc));
      pcStack_28 = (char *)((int)pcStack_28 + -1);
      piStack_2c = (int *)((int)piStack_2c + -1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x38))
                (*(int **)(param_1 + 0xc),param_2,*(undefined4 *)(param_1 + 0x1c),iVar5,&piStack_2c,
                 uVar2,0xff000000);
      piStack_48 = (int *)((int)piStack_48 + 2);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x38))
                (*(int **)(param_1 + 0xc),param_2,*(undefined4 *)(param_1 + 0x1c),iVar5,&piStack_48,
                 uVar2,0xff000000);
      param_4 = param_4 + -1;
    }
    piStack_30 = *(int **)(param_1 + 4);
    piStack_18 = (int *)param_9;
    uStack_1c = uVar2;
    puStack_20 = &param_4;
    iStack_24 = 0xffffffff;
    pcStack_28 = param_3;
    piStack_34 = (int *)0x1006b077;
    piStack_2c = param_2;
    (**(code **)(*piStack_30 + 0x38))();
    if (puStack_20 != (undefined4 *)0x0) {
      uStack_38 = 0x1006b085;
      piStack_34 = param_2;
      (**(code **)(*param_2 + 0x2c))();
    }
  }
  return;
}


/* END FUNCTION 0x1006af20 */
