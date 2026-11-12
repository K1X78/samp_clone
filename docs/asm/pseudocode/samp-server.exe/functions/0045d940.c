/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045d940
 * Name: FUN_0045d940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __thiscall
FUN_0045d940(void *this,undefined4 param_1,undefined4 *param_2,char *param_3,ushort *param_4,
            undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ushort uVar8;
  
  pcVar6 = param_3;
  uVar8 = (ushort)param_1;
  uVar3 = FUN_0045b930(uVar8,(int)param_3,(uint *)&param_3);
  pcVar7 = param_3 + 1;
  if ((char)uVar3 == '\0') {
    pcVar7 = param_3;
  }
  if (*pcVar6 == '\0') {
    if ((**(char **)(pcVar6 + (int)pcVar7 * 4 + 0xd0) == '\x01') &&
       (*(int *)(*(char **)(pcVar6 + (int)pcVar7 * 4 + 0xd0) + 4) == 0x20)) {
      if (pcVar7 == param_3 + 1) goto LAB_0045db86;
      uVar4 = FUN_0045baa0((int)pcVar6,(int)pcVar7);
      if ((char)uVar4 != '\0') {
        param_4[2] = 1;
        param_4[3] = 0;
        iVar1 = *(int *)(pcVar6 + (int)pcVar7 * 4 + 0xd0);
        if (*(ushort *)(iVar1 + 8) < uVar8) {
          FUN_0045bba0((int)pcVar6,(int)pcVar7,param_4);
          FUN_0045b930(uVar8,*(int *)(pcVar6 + (int)pcVar7 * 4 + 0xd0),(uint *)&param_4);
          FUN_0045cbe0(this,param_1,param_2,(char *)param_4,0,
                       *(char **)(pcVar6 + (int)pcVar7 * 4 + 0xd0),(undefined2 *)0x0);
        }
        else {
          iVar2 = *(int *)(pcVar6 + (int)pcVar7 * 4 + 0xcc);
          *param_4 = *(ushort *)(iVar1 + 8);
          param_4[1] = uVar8;
          *(undefined2 *)(iVar2 + 8 + *(int *)(iVar2 + 4) * 2) = *(undefined2 *)(iVar1 + 8);
          *(undefined4 *)(iVar2 + 0x48 + *(int *)(iVar2 + 4) * 4) = *(undefined4 *)(iVar1 + 0x48);
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          *(ushort *)(iVar1 + 8) = uVar8;
          *(undefined4 *)(iVar1 + 0x48) = *param_2;
        }
        *(undefined2 *)(pcVar6 + (int)pcVar7 * 2 + 6) =
             *(undefined2 *)(*(int *)(pcVar6 + (int)pcVar7 * 4 + 0xd0) + 8);
        return (char *)0x0;
      }
      uVar4 = FUN_0045bad0((int)pcVar6,(int)pcVar7);
      if ((char)uVar4 != '\0') {
        param_4[2] = 1;
        param_4[3] = 0;
        if (uVar8 < *(ushort *)
                     (*(int *)(pcVar6 + (int)pcVar7 * 4 + 0xd0) + 6 +
                     *(int *)(*(int *)(pcVar6 + (int)pcVar7 * 4 + 0xd0) + 4) * 2)) {
          FUN_0045bb00((int)pcVar6,(int)pcVar7,param_4);
          FUN_0045b930(uVar8,*(int *)(pcVar6 + (int)pcVar7 * 4 + 0xd0),(uint *)&param_4);
          FUN_0045cbe0(this,param_1,param_2,(char *)param_4,0,
                       *(char **)(pcVar6 + (int)pcVar7 * 4 + 0xd0),(undefined2 *)0x0);
        }
        else {
          *param_4 = *(ushort *)(*(int *)(pcVar6 + (int)pcVar7 * 4 + 0xd4) + 8);
          FUN_0045cbe0(this,param_1,param_2,(char *)0x0,0,
                       *(char **)(pcVar6 + (int)pcVar7 * 4 + 0xd4),(undefined2 *)0x0);
          param_4[1] = uVar8;
        }
        *(undefined2 *)(pcVar6 + (int)pcVar7 * 2 + 8) =
             *(undefined2 *)(*(int *)(pcVar6 + (int)pcVar7 * 4 + 0xd4) + 8);
        return (char *)0x0;
      }
    }
    pcVar5 = FUN_0045d940(this,param_1,param_2,*(char **)(pcVar6 + (int)pcVar7 * 4 + 0xd0),param_4,
                          param_5);
    if (((*(int *)(param_4 + 2) == 1) && (0 < (int)pcVar7)) &&
       (*(ushort *)(pcVar6 + (int)pcVar7 * 2 + 6) == *param_4)) {
      *(ushort *)(pcVar6 + (int)pcVar7 * 2 + 6) = param_4[1];
    }
    if (pcVar5 != (char *)0x0) {
      if (*pcVar5 == '\0') {
        *(int *)(pcVar5 + 4) = *(int *)(pcVar5 + 4) + -1;
        pcVar6 = FUN_0045cbe0(this,(uint)*param_4,param_2,pcVar7,pcVar5,pcVar6,param_4);
        return pcVar6;
      }
      pcVar6 = FUN_0045cbe0(this,(uint)*(ushort *)(pcVar5 + 8),param_2,pcVar7,pcVar5,pcVar6,param_4)
      ;
      return pcVar6;
    }
  }
  else {
    if (pcVar7 != param_3 + 1) {
      pcVar6 = FUN_0045cbe0(this,param_1,param_2,pcVar7,0,pcVar6,param_4);
      return pcVar6;
    }
LAB_0045db86:
    *param_5 = 0;
  }
  return (char *)0x0;
}


/* END FUNCTION 0x0045d940 */
