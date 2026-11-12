/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10046e40
 * Name: FUN_10046e40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_10046e40(undefined4 param_1,undefined4 *param_2,char *param_3,short *param_4,undefined1 *param_5
            )

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  ushort uVar8;
  
  pcVar3 = param_3;
  cVar4 = FUN_10044660(param_1,param_3,&param_3);
  pcVar7 = param_3 + 1;
  if (cVar4 == '\0') {
    pcVar7 = param_3;
  }
  if (*pcVar3 == '\0') {
    if ((**(char **)(pcVar3 + (int)pcVar7 * 4 + 0xcd) == '\x01') &&
       (*(int *)(*(char **)(pcVar3 + (int)pcVar7 * 4 + 0xcd) + 1) == 0x20)) {
      if (pcVar7 == param_3 + 1) goto LAB_10047086;
      cVar4 = FUN_100449a0(pcVar3,pcVar7);
      uVar8 = (ushort)param_1;
      if (cVar4 != '\0') {
        param_4[2] = 1;
        param_4[3] = 0;
        iVar1 = *(int *)(pcVar3 + (int)pcVar7 * 4 + 0xcd);
        if (*(ushort *)(iVar1 + 5) < uVar8) {
          FUN_10044aa0(pcVar3,pcVar7,param_4);
          FUN_10044660(param_1,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0xcd),&param_4);
          FUN_10045ef0(param_1,param_2,param_4,0,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0xcd),0)
          ;
        }
        else {
          iVar2 = *(int *)(pcVar3 + (int)pcVar7 * 4 + 0xc9);
          *param_4 = *(short *)(iVar1 + 5);
          param_4[1] = uVar8;
          *(undefined2 *)(iVar2 + 5 + *(int *)(iVar2 + 1) * 2) = *(undefined2 *)(iVar1 + 5);
          *(undefined4 *)(iVar2 + 0x45 + *(int *)(iVar2 + 1) * 4) = *(undefined4 *)(iVar1 + 0x45);
          *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + 1;
          *(ushort *)(iVar1 + 5) = uVar8;
          *(undefined4 *)(iVar1 + 0x45) = *param_2;
        }
        *(undefined2 *)(pcVar3 + (int)pcVar7 * 2 + 3) =
             *(undefined2 *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0xcd) + 5);
        return 0;
      }
      cVar4 = FUN_100449d0(pcVar3,pcVar7);
      if (cVar4 != '\0') {
        param_4[2] = 1;
        param_4[3] = 0;
        if (uVar8 < *(ushort *)
                     (*(int *)(pcVar3 + (int)pcVar7 * 4 + 0xcd) + 3 +
                     *(int *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0xcd) + 1) * 2)) {
          FUN_10044a00(pcVar3,pcVar7,param_4);
          FUN_10044660(param_1,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0xcd),&param_4);
          FUN_10045ef0(param_1,param_2,param_4,0,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0xcd),0)
          ;
        }
        else {
          *param_4 = *(short *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0xd1) + 5);
          FUN_10045ef0(param_1,param_2,0,0,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0xd1),0);
          param_4[1] = uVar8;
        }
        *(undefined2 *)(pcVar3 + (int)pcVar7 * 2 + 5) =
             *(undefined2 *)(*(int *)(pcVar3 + (int)pcVar7 * 4 + 0xd1) + 5);
        return 0;
      }
    }
    pcVar5 = (char *)FUN_10046e40(param_1,param_2,*(undefined4 *)(pcVar3 + (int)pcVar7 * 4 + 0xcd),
                                  param_4,param_5);
    if (((*(int *)(param_4 + 2) == 1) && (0 < (int)pcVar7)) &&
       (*(short *)(pcVar3 + (int)pcVar7 * 2 + 3) == *param_4)) {
      *(short *)(pcVar3 + (int)pcVar7 * 2 + 3) = param_4[1];
    }
    if (pcVar5 != (char *)0x0) {
      if (*pcVar5 == '\0') {
        *(int *)(pcVar5 + 1) = *(int *)(pcVar5 + 1) + -1;
        uVar6 = FUN_10045ef0(*param_4,param_2,pcVar7,pcVar5,pcVar3,param_4);
        return uVar6;
      }
      uVar6 = FUN_10045ef0(*(undefined2 *)(pcVar5 + 5),param_2,pcVar7,pcVar5,pcVar3,param_4);
      return uVar6;
    }
  }
  else {
    if (pcVar7 != param_3 + 1) {
      uVar6 = FUN_10045ef0(param_1,param_2,pcVar7,0,pcVar3,param_4);
      return uVar6;
    }
LAB_10047086:
    *param_5 = 0;
  }
  return 0;
}


/* END FUNCTION 0x10046e40 */
