/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006ada0
 * Name: FUN_1006ada0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1006ada0(undefined4 *param_1,int *param_2,char *param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int *piStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  char *pcStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int *piStack_18;
  
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)param_1[5];
      puStack_1c = (undefined4 *)0x1006adde;
      piStack_18 = param_2;
      (**(code **)(*param_2 + 0x20))();
    }
    if (param_9 != 0) {
      pcVar2 = param_3;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if (100000 < (uint)((int)pcVar2 - (int)(param_3 + 1))) {
        return;
      }
      pcVar2 = (char *)param_1[7];
      pcVar3 = param_3;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      piStack_18 = (int *)param_1[7];
      puStack_1c = (undefined4 *)0x1006ae24;
      FUN_100b5c00();
      piStack_28 = (int *)param_1[7];
      pcVar2 = (char *)piStack_28;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      piStack_18 = (int *)0xff000000;
      puStack_1c = (undefined4 *)0x100;
      iVar4 = (int)pcVar2 - (int)((int)piStack_28 + 1);
      puStack_20 = &param_4;
      param_5 = param_5 + -1;
      piStack_30 = (int *)param_1[2];
      uStack_34 = 0x1006ae5d;
      piStack_2c = param_2;
      pcStack_24 = (char *)iVar4;
      (**(code **)(*piStack_30 + 0x38))();
      uStack_34 = 0xff000000;
      uStack_38 = 0x100;
      puStack_3c = &stack0xfffffff0;
      uStack_44 = param_1[7];
      piStack_48 = param_2;
      iStack_40 = iVar4;
      (**(code **)(*(int *)param_1[2] + 0x38))((int *)param_1[2]);
      piStack_28 = (int *)((int)piStack_28 + -1);
      piStack_2c = (int *)((int)piStack_2c + -1);
      (**(code **)(*(int *)param_1[2] + 0x38))
                ((int *)param_1[2],param_2,param_1[7],iVar4,&piStack_2c,0x100,0xff000000);
      piStack_48 = (int *)((int)piStack_48 + 2);
      (**(code **)(*(int *)param_1[2] + 0x38))
                ((int *)param_1[2],param_2,param_1[7],iVar4,&piStack_48,0x100,0xff000000);
      param_4 = param_4 + -1;
    }
    piStack_2c = (int *)*param_1;
    piStack_18 = (int *)0x100;
    puStack_1c = &param_4;
    puStack_20 = (undefined4 *)0xffffffff;
    pcStack_24 = param_3;
    piStack_30 = (int *)0x1006af0b;
    piStack_28 = param_2;
    (**(code **)(*piStack_2c + 0x38))();
    if (puStack_20 != (undefined4 *)0x0) {
      uStack_34 = 0x1006af19;
      piStack_30 = param_2;
      (**(code **)(*param_2 + 0x2c))();
    }
  }
  return;
}


/* END FUNCTION 0x1006ada0 */
