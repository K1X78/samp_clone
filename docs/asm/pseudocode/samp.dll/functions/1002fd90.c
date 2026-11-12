/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002fd90
 * Name: FUN_1002fd90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002fd90(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_20;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101148b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10027170();
  local_4 = 0;
  local_20 = 0;
  iVar3 = thunk_FUN_1002f110();
  if (iVar3 != 0) {
    do {
      piVar4 = (int *)FUN_1002f560(local_20);
      iVar3 = *piVar4;
      if (*(char *)(iVar3 + 0x66) != '\0') {
        FUN_10026f90();
        for (iVar5 = FUN_10027060(); iVar1 = local_14, iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x85)) {
          uVar6 = 0;
          if (*(int *)(iVar5 + 1) != 0) {
            puVar7 = (undefined4 *)(iVar5 + 5);
            do {
              cVar2 = FUN_1002f020(puVar7[0x10],param_1,param_2,*(undefined4 *)(iVar3 + 0x8c));
              if (cVar2 != '\0') {
                FUN_100271b0(*puVar7);
              }
              uVar6 = uVar6 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar6 < *(uint *)(iVar5 + 1));
          }
        }
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          FUN_100298d0(*(undefined4 *)(local_18 + local_20 * 4));
        }
        FUN_1002ee90(1);
      }
      local_20 = local_20 + 1;
      uVar6 = thunk_FUN_1002f110();
    } while (local_20 < uVar6);
  }
  local_4 = 0xffffffff;
  FUN_10027180();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002fd90 */
