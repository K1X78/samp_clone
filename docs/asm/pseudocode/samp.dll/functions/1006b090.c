/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006b090
 * Name: FUN_1006b090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006b090(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int *piStack_34;
  int *piStack_30;
  char *pcStack_2c;
  int iStack_28;
  int iStack_1c;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    piVar2 = *(int **)(param_1 + 0x14);
    (**(code **)(*piVar2 + 0x20))();
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)(param_2 + 1)) < 0x186a1) {
      pcVar3 = *(char **)(param_1 + 0x1c);
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iStack_1c = *(int *)(param_1 + 0x1c);
      FUN_100b5c00();
      pcStack_2c = *(char **)(param_1 + 0x1c);
      pcVar3 = pcStack_2c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iStack_1c = -0x4b0f111c;
      iVar4 = (int)pcVar3 - (int)(pcStack_2c + 1);
      piStack_34 = *(int **)(param_1 + 0x10);
      iStack_38 = 0x1006b12f;
      piStack_30 = piVar2;
      iStack_28 = iVar4;
      (**(code **)(*piStack_34 + 0x38))();
      iStack_38 = -0x4b0f111c;
      uStack_3c = 0x105;
      piStack_40 = &iStack_1c;
      uStack_48 = *(undefined4 *)(param_1 + 0x1c);
      iStack_1c = iStack_1c + 2;
      piStack_50 = *(int **)(param_1 + 0x10);
      iStack_54 = 0x1006b166;
      piStack_4c = piVar2;
      iStack_44 = iVar4;
      (**(code **)(*piStack_50 + 0x38))();
      iStack_54 = -0x4b0f111c;
      uStack_58 = 0x105;
      piStack_5c = &iStack_38;
      uStack_64 = *(undefined4 *)(param_1 + 0x1c);
      piStack_34 = (int *)((int)piStack_34 + 2);
      iStack_38 = iStack_38 + -2;
      piStack_6c = *(int **)(param_1 + 0x10);
      iStack_70 = 0x1006b198;
      piStack_68 = piVar2;
      iStack_60 = iVar4;
      (**(code **)(*piStack_6c + 0x38))();
      iStack_70 = -0x4b0f111c;
      uVar5 = 0x105;
      iStack_54 = iStack_54 + -2;
      piStack_50 = (int *)((int)piStack_50 + -2);
      (**(code **)(**(int **)(param_1 + 0x10) + 0x38))
                (*(int **)(param_1 + 0x10),piVar2,*(undefined4 *)(param_1 + 0x1c),iVar4,&iStack_54,
                 0x105);
      iStack_70 = iStack_70 + 2;
      (**(code **)(**(int **)(param_1 + 0x10) + 0x38))
                (*(int **)(param_1 + 0x10),piVar2,uVar5,0xffffffff,&iStack_70,0x105,iStack_60);
      (**(code **)(*piVar2 + 0x2c))(piVar2);
    }
  }
  return;
}


/* END FUNCTION 0x1006b090 */
