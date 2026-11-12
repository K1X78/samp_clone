/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10028d90
 * Name: FUN_10028d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_10028d90(uint param_1,undefined4 *param_2,char *param_3,int *param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar3 = param_3;
  cVar4 = FUN_10027310(param_1,param_3,&param_3);
  pcVar7 = param_3 + 1;
  if (cVar4 == '\0') {
    pcVar7 = param_3;
  }
  if (*pcVar3 == '\0') {
    if ((**(char **)(pcVar3 + (int)pcVar7 * 4 + 0x8d) == '\x01') &&
       (*(int *)(*(char **)(pcVar3 + (int)pcVar7 * 4 + 0x8d) + 1) == 0x10)) {
      if (pcVar7 == param_3 + 1) goto LAB_10028fc1;
      cVar4 = FUN_10027510(pcVar3,pcVar7);
      if (cVar4 != '\0') {
        param_4[2] = 1;
        iVar1 = *(int *)(pcVar3 + (int)pcVar7 * 4 + 0x8d);
        if (*(uint *)(iVar1 + 5) < param_1) {
          FUN_100275f0(pcVar3,pcVar7,param_4);
          FUN_10027310(param_1,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0x8d),&param_4);
          FUN_100283c0(param_1,param_2,param_4,0,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0x8d),0)
          ;
        }
        else {
          iVar2 = *(int *)(pcVar3 + (int)pcVar7 * 4 + 0x89);
          *param_4 = *(int *)(iVar1 + 5);
          param_4[1] = param_1;
          *(undefined4 *)(iVar2 + 5 + *(int *)(iVar2 + 1) * 4) = *(undefined4 *)(iVar1 + 5);
          *(undefined4 *)(iVar2 + 0x45 + *(int *)(iVar2 + 1) * 4) = *(undefined4 *)(iVar1 + 0x45);
          *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + 1;
          *(uint *)(iVar1 + 5) = param_1;
          *(undefined4 *)(iVar1 + 0x45) = *param_2;
        }
        *(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 1) =
             *(undefined4 *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0x8d) + 5);
        return 0;
      }
      cVar4 = FUN_10027540(pcVar3,pcVar7);
      if (cVar4 != '\0') {
        param_4[2] = 1;
        if (param_1 < *(uint *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0x8d) + 1 +
                               *(int *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0x8d) + 1) * 4)) {
          FUN_10027570(pcVar3,pcVar7,param_4);
          FUN_10027310(param_1,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0x8d),&param_4);
          FUN_100283c0(param_1,param_2,param_4,0,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0x8d),0)
          ;
        }
        else {
          *param_4 = *(int *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0x91) + 5);
          FUN_100283c0(param_1,param_2,0,0,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0x91),0);
          param_4[1] = param_1;
        }
        *(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 5) =
             *(undefined4 *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0x91) + 5);
        return 0;
      }
    }
    pcVar5 = (char *)FUN_10028d90(param_1,param_2,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0x8d),
                                  param_4,param_5);
    if (((param_4[2] == 1) && (0 < (int)pcVar7)) &&
       (*(int *)(pcVar3 + (int)pcVar7 * 4 + 1) == *param_4)) {
      *(int *)(pcVar3 + (int)pcVar7 * 4 + 1) = param_4[1];
    }
    if (pcVar5 != (char *)0x0) {
      if (*pcVar5 == '\0') {
        *(int *)(pcVar5 + 1) = *(int *)(pcVar5 + 1) + -1;
        uVar6 = FUN_100283c0(*param_4,param_2,pcVar7,pcVar5,pcVar3,param_4);
        return uVar6;
      }
      uVar6 = FUN_100283c0(*(undefined4 *)(pcVar5 + 5),param_2,pcVar7,pcVar5,pcVar3,param_4);
      return uVar6;
    }
  }
  else {
    if (pcVar7 != param_3 + 1) {
      uVar6 = FUN_100283c0(param_1,param_2,pcVar7,0,pcVar3,param_4);
      return uVar6;
    }
LAB_10028fc1:
    *param_5 = 0;
  }
  return 0;
}


/* END FUNCTION 0x10028d90 */
