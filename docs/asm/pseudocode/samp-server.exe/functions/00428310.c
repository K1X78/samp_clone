/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428310
 * Name: FUN_00428310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00428310(void *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int in_EAX;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  byte local_9;
  int local_8;
  void *local_4;
  
  iVar1 = DAT_004ca204;
  pvVar4 = (void *)0x0;
  local_8 = 0;
  pvVar5 = param_1;
  if (*(char *)(in_EAX + 0x14) != '\0') {
    do {
      do {
        pvVar5 = (void *)((int)pvVar5 + 1);
        pvVar2 = (void *)FUN_0040c740((int)pvVar5);
      } while (pvVar2 == pvVar5);
    } while (pvVar5 == (void *)(iVar1 / (int)(uint)*(ushort *)(in_EAX + 0x16) + 1U));
    pvVar2 = (void *)FUN_0040ca90();
    if (pvVar5 <= pvVar2) {
      uVar3 = FUN_00427530(&local_9,&local_4);
      if (uVar3 != 0) goto LAB_004283b4;
      if ((local_9 == 4) && (local_4 == param_1)) {
        uVar3 = 0x65;
        pvVar4 = pvVar5;
        goto LAB_004283b4;
      }
    }
  }
  uVar3 = FUN_004238d0(param_1,&local_8);
  if (uVar3 == 0) {
    pvVar4 = (void *)FUN_00408f80();
  }
LAB_004283b4:
  *param_3 = (uint)pvVar4;
  if (param_2 == (int *)0x0) {
    FUN_00427610();
    return (uVar3 == 0x65) - 1 & uVar3;
  }
  *param_2 = local_8;
  return (uVar3 == 0x65) - 1 & uVar3;
}


/* END FUNCTION 0x00428310 */
