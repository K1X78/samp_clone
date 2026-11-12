/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100319d0
 * Name: FUN_100319d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100319d0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114a6b;
  local_c = ExceptionList;
  uVar3 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xd) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 9) + uVar3 * 4);
      if (((*piVar1 == 0) && ((char)piVar1[1] == '\0')) &&
         (cVar2 = FUN_100331a0(param_3 + 2), cVar2 != '\0')) {
        FUN_1001f280(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8),0);
        local_4 = 0;
        FUN_1001f7b0(8);
        FUN_1001f470(*(undefined4 *)(*(int *)(param_1 + 9) + uVar3 * 4),0x20,1);
        local_4 = 0xffffffff;
        FUN_1001f390();
        ExceptionList = local_c;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xd));
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100319d0 */
