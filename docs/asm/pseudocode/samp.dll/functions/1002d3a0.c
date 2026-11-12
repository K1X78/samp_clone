/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d3a0
 * Name: FUN_1002d3a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1002d3a0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  char local_525;
  undefined4 local_524 [70];
  undefined1 local_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101146bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f280(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),0);
  local_4 = 0;
  FUN_1001f7b0(8);
  FUN_1001f470(local_524,0x10,1);
  cVar2 = FUN_1002d250(local_524);
  if (cVar2 != '\0') {
    piVar3 = (int *)FUN_1002d200(local_524);
    puVar1 = (undefined4 *)*piVar3;
    cVar2 = FUN_100331d0(param_1 + 2);
    if (cVar2 != '\0') {
      local_4 = 0xffffffff;
      FUN_1001f390();
      ExceptionList = local_c;
      return 0;
    }
    FUN_10008110(&local_525);
    if (local_525 == '\0') {
      (*(code *)**(undefined4 **)*puVar1)(0,0,0,0,0,local_524[0],0,0,0,0);
LAB_1002d563:
      local_4 = 0xffffffff;
      FUN_1001f390();
      ExceptionList = local_c;
      return 1;
    }
    FUN_10008110((char *)((int)puVar1 + 0x61e));
    if (*(char *)((int)puVar1 + 0x61e) == '\0') {
      FUN_1001f530(puVar1 + 0x184,0x20,1);
      FUN_1001f530(puVar1 + 0x186,0x20,1);
      puVar1[0x185] = puVar1[0x186];
    }
    else {
      puVar5 = local_40c;
      iVar4 = 0x100;
      do {
        FUN_1001f530(puVar5,0x20,1);
        puVar5 = puVar5 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_10026a80(local_40c);
      FUN_1001f530(puVar1 + 0x184,0x20,1);
      FUN_1001f530(puVar1 + 0x186,0x20,1);
      cVar2 = FUN_1001f530(puVar1 + 0x185,0x20,1);
      if (cVar2 != '\0') {
        *(undefined1 *)(puVar1 + 0x187) = 1;
        goto LAB_1002d563;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x1002d3a0 */
