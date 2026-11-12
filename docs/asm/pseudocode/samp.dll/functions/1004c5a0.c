/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004c5a0
 * Name: FUN_1004c5a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004c5a0(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011579b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_1004af40(param_2,param_3);
  uVar4 = 0;
  if (iVar1 == 0) {
    local_14 = operator_new(0x2f);
    local_4 = 0;
    if (local_14 == (undefined4 *)0x0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      local_14 = (undefined4 *)FUN_1004b3a0();
    }
    *local_14 = param_2;
    *(undefined2 *)(local_14 + 1) = param_3;
    local_4 = 0xffffffff;
    *(undefined1 *)((int)local_14 + 6) = 1;
    FUN_1004ad60(&param_2,&local_14);
    if (*(char *)(param_1 + 0x2b) != '\0') {
      local_10 = 1;
      iVar1 = FUN_1004aca0();
      if (iVar1 != 0) {
        do {
          piVar2 = (int *)FUN_1004ac80(uVar4);
          local_14 = (undefined4 *)*piVar2;
          FUN_1004a970(&local_14,&local_14);
          uVar4 = uVar4 + 1;
          uVar3 = FUN_1004aca0();
        } while (uVar4 < uVar3);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004c5a0 */
