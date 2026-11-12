/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045dbc0
 * Name: FUN_0045dbc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_0045dbc0(void *this,undefined4 param_1,char *param_2,char *param_3,uint param_4,
            undefined2 *param_5,undefined4 *param_6)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  char *pcVar9;
  
  pcVar4 = param_2;
  uVar6 = FUN_0045b930((ushort)param_1,(int)param_2,(uint *)&param_2);
  puVar8 = param_5;
  pcVar9 = param_2;
  if ((char)uVar6 != '\0') {
    pcVar9 = param_2 + 1;
  }
  pcVar2 = *(char **)(pcVar4 + (int)pcVar9 * 4 + 0xd0);
  if (*pcVar2 == '\0') {
    if ((int)pcVar9 < *(int *)(pcVar4 + 4)) {
      uVar6 = CONCAT22((short)(uVar6 >> 0x10),*(undefined2 *)(pcVar4 + (int)pcVar9 * 2 + 8));
    }
    else {
      uVar6 = (uint)*(ushort *)(pcVar4 + (int)pcVar9 * 2 + 6);
    }
    uVar6 = FUN_0045dbc0(this,param_1,pcVar2,param_3,uVar6,param_5,param_6);
    if ((char)uVar6 == '\0') {
LAB_0045dcac:
      return uVar6 & 0xffffff00;
    }
    uVar7 = (undefined2)(uVar6 >> 0x10);
    if ((int)pcVar9 < *(int *)(pcVar4 + 4)) {
      uVar1 = *(undefined2 *)(pcVar4 + (int)pcVar9 * 2 + 8);
    }
    else {
      uVar1 = *(undefined2 *)(pcVar4 + (int)pcVar9 * 2 + 6);
    }
    uVar6 = CONCAT22(uVar7,uVar1);
    if ((*(int *)(puVar8 + 2) == 3) && (pcVar9 != param_2)) {
      *(undefined4 *)(puVar8 + 2) = 0;
      *(undefined2 *)(pcVar4 + (int)param_2 * 2 + 8) = *puVar8;
      if ((int)pcVar9 < *(int *)(pcVar4 + 4)) {
        uVar6 = CONCAT22(uVar7,*(undefined2 *)(pcVar4 + (int)pcVar9 * 2 + 8));
      }
      else {
        uVar6 = CONCAT22(uVar7,*(undefined2 *)(pcVar4 + (int)pcVar9 * 2 + 6));
      }
    }
    if (*param_3 == '\0') goto LAB_0045dc85;
  }
  else {
    uVar6 = FUN_0045b930((ushort)param_1,(int)pcVar2,(uint *)&param_2);
    pcVar5 = param_2;
    if ((char)uVar6 == '\0') goto LAB_0045dcac;
    *param_6 = *(undefined4 *)(pcVar2 + (int)param_2 * 4 + 0x48);
    FUN_0045b8a0((int)param_2,*(char **)(pcVar4 + (int)pcVar9 * 4 + 0xd0));
    if (pcVar5 == (char *)0x0) {
      if (0 < (int)pcVar9) {
        *(undefined2 *)(pcVar4 + (int)pcVar9 * 2 + 6) =
             *(undefined2 *)(*(int *)(pcVar4 + (int)pcVar9 * 4 + 0xd0) + 8);
      }
      if (pcVar9 == (char *)0x0) {
        *(undefined4 *)(param_5 + 2) = 3;
        *param_5 = *(undefined2 *)(*(int *)(pcVar4 + 0xd0) + 8);
      }
    }
    iVar3 = *(int *)(pcVar4 + (int)pcVar9 * 4 + 0xd0);
    if (0xf < *(int *)(iVar3 + 4)) {
      *param_3 = '\0';
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
    *param_3 = '\x01';
    uVar6 = param_4;
    puVar8 = param_5;
  }
  uVar6 = FUN_0045cfd0(this,(int)pcVar9,pcVar4,(short)uVar6,puVar8);
  *param_3 = (char)uVar6;
LAB_0045dc85:
  return CONCAT31((int3)(uVar6 >> 8),1);
}


/* END FUNCTION 0x0045dbc0 */
