/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d820
 * Name: FUN_1002d820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_1002d820(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined2 param_5
            )

{
  ushort *puVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort uVar7;
  void *unaff_EBX;
  undefined1 unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1011471b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x19) + 0x5c))(param_4,param_5);
  if (iVar4 == -1) {
    ExceptionList = unaff_EBX;
    return 0xffffffff;
  }
  puVar1 = (ushort *)(param_1 + 0x17);
  cVar3 = FUN_1002d250(puVar1);
  if (cVar3 != '\0') {
    puVar5 = (undefined4 *)FUN_1002d200(puVar1);
    puVar5 = (undefined4 *)*puVar5;
    if (*(char *)((int)puVar5 + 0x61d) != '\0') {
      _free((void *)*puVar5);
    }
    FUN_10026a60();
    _free(puVar5);
    FUN_1002d710(puVar1);
  }
  puVar6 = operator_new(0x61f);
  pvStack_c = (void *)0x0;
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    FUN_10026220();
    puVar5 = puVar6;
  }
  *puVar5 = uStack_4;
  *(undefined2 *)(puVar5 + 2) = param_3;
  puVar5[1] = param_4;
  *(undefined1 *)(puVar5 + 0x187) = 0;
  *(undefined1 *)((int)puVar5 + 0x61d) = unaff_retaddr;
  pvStack_c = (void *)0xffffffff;
  FUN_1002d670(puVar1,&stack0xffffffe8);
  uVar2 = *puVar1;
  uVar7 = uVar2 + 1;
  *puVar1 = uVar7;
  if (uVar7 == 0xffff) {
    *puVar1 = 0;
  }
  ExceptionList = unaff_EBX;
  return (uint)uVar2;
}


/* END FUNCTION 0x1002d820 */
