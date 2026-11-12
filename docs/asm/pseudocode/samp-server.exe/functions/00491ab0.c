/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00491ab0
 * Name: FUN_00491ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00491ab0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_150;
  void *pvStack_14c;
  undefined4 uStack_13c;
  uint uStack_138;
  undefined4 *puStack_134;
  undefined1 local_130 [4];
  void *local_12c;
  undefined4 local_11c;
  uint local_118;
  undefined4 auStack_114 [2];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b19c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _strncpy(local_10c,param_1,0xff);
  __strlwr(local_10c);
  iVar2 = FUN_00490aa0(this,local_10c);
  if (iVar2 != 0) {
    FUN_00491fa0("Unable to add console variable \'%s\'. Already exists.");
    ExceptionList = local_c;
    return;
  }
  puVar3 = operator_new(0x10);
  puVar3[1] = param_3;
  *puVar3 = param_2;
  puVar3[2] = param_4;
  puVar3[3] = param_5;
  if (param_5 != (undefined *)0x0) {
    (*(code *)param_5)();
  }
  pcVar4 = local_10c;
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00469e30(local_130,(undefined4 *)local_10c,(int)pcVar4 - (int)(local_10c + 1));
  uStack_4 = 0;
  uStack_138 = 0xf;
  uStack_13c = 0;
  pvStack_14c = (void *)((uint)pvStack_14c & 0xffffff00);
  FUN_00469d40(&uStack_150,local_130,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  puStack_134 = puVar3;
  FUN_00491870(this,auStack_114,&uStack_150);
  if (0xf < uStack_138) {
    _free(pvStack_14c);
  }
  uStack_13c = 0;
  pvStack_14c = (void *)((uint)pvStack_14c & 0xffffff00);
  uStack_138 = 0xf;
  if (0xf < local_118) {
    _free(local_12c);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00491ab0 */
