/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fdd0
 * Name: FUN_0040fdd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl
FUN_0040fdd0(int *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *local_3c;
  char *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_4;
  
  local_38 = (char *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_3c = (char *)0x0;
  if ((param_2 == (char *)0x0) || (param_1[1] == 0)) {
    return (char *)0x0;
  }
  cVar1 = *param_2;
  if (cVar1 == 't') {
    pcVar8 = (char *)**(undefined4 **)(**(int **)(param_2 + 0x10) + 0xc);
    local_20 = (*(int **)(param_2 + 0x10))[2];
    local_24 = *param_1;
  }
  else {
    if ((cVar1 != -0x68) && (cVar1 != -0x66)) goto LAB_0040ff74;
    local_28 = (int)*(short *)(param_2 + 0x1c);
    puVar7 = (undefined4 *)0x0;
    local_2c = (undefined4 *)0x0;
    iVar6 = 0;
    do {
      if (iVar6 != 0) goto LAB_0040fe8a;
      psVar2 = (short *)param_1[1];
      iVar5 = (int)*psVar2;
      iVar3 = 0;
      if (0 < iVar5) {
        piVar4 = (int *)(psVar2 + 0x10);
        do {
          puVar7 = local_2c;
          if (*piVar4 == *(int *)(param_2 + 0x18)) break;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0xe;
        } while (iVar3 < iVar5);
      }
      if (iVar3 < iVar5) {
        puVar7 = *(undefined4 **)(psVar2 + iVar3 * 0x1c + 0xc);
        iVar6 = *(int *)(psVar2 + iVar3 * 0x1c + 10);
        local_2c = puVar7;
      }
      else {
        param_1 = (int *)param_1[8];
      }
    } while (param_1 != (int *)0x0);
    if (iVar6 == 0) goto LAB_0040ff74;
LAB_0040fe8a:
    if (puVar7 == (undefined4 *)0x0) {
      if (*(int *)(iVar6 + 0x44) != 0) {
        iVar3 = local_28;
        if ((local_28 < 0) && (iVar3 = *(int *)(iVar6 + 8), iVar3 < 0)) {
          local_38 = "INTEGER";
          local_3c = "rowid";
        }
        else {
          local_38 = *(char **)(*(int *)(iVar6 + 0x10) + 0xc + iVar3 * 0x18);
          local_3c = *(char **)(*(int *)(iVar6 + 0x10) + iVar3 * 0x18);
        }
        local_30 = *(undefined4 *)(iVar6 + 4);
        if ((int *)*param_1 != (int *)0x0) {
          iVar6 = *(int *)*param_1;
          iVar3 = FUN_0040fc30(iVar6);
          local_34 = *(undefined4 *)(iVar3 * 0x10 + *(int *)(iVar6 + 8));
        }
      }
      goto LAB_0040ff74;
    }
    if ((local_28 < 0) || (*(int *)*puVar7 <= local_28)) goto LAB_0040ff74;
    pcVar8 = *(char **)(((int *)*puVar7)[3] + local_28 * 0x14);
    local_20 = puVar7[2];
    local_24 = *param_1;
  }
  local_4 = param_1;
  local_38 = FUN_0040fdd0(&local_24,pcVar8,&local_34,&local_30,&local_3c);
LAB_0040ff74:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_34;
    *param_4 = local_30;
    *param_5 = local_3c;
  }
  return local_38;
}


/* END FUNCTION 0x0040fdd0 */
