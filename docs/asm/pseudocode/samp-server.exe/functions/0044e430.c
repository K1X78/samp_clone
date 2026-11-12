/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e430
 * Name: FUN_0044e430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0044e430(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  void *_Memory;
  int iVar5;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0ca8;
  local_c = ExceptionList;
  if (*param_1 != 0) {
    ExceptionList = &local_c;
    FUN_0044ea10(&local_1c);
    local_4 = 0;
    FUN_0044e2a0(&local_1c,param_1);
    uVar1 = local_10;
    uVar2 = local_14;
    uVar3 = local_18;
    while( true ) {
      if (uVar2 < uVar3) {
        iVar5 = uVar1 - uVar3;
      }
      else {
        iVar5 = -uVar3;
      }
      if (uVar2 + iVar5 == 0) break;
      local_18 = uVar3 + 1;
      if (local_18 == uVar1) {
        _Memory = *(void **)(local_1c + -4 + uVar1 * 4);
        local_18 = 0;
      }
      else if (local_18 == 0) {
        _Memory = *(void **)(local_1c + -4 + uVar1 * 4);
      }
      else {
        _Memory = *(void **)(local_1c + -4 + local_18 * 4);
      }
      if (*(int *)((int)_Memory + 8) != 0) {
        FUN_0044e2a0(&local_1c,(undefined4 *)((int)_Memory + 8));
        uVar1 = local_10;
        uVar2 = local_14;
      }
      if (*(int *)((int)_Memory + 0xc) != 0) {
        FUN_0044e2a0(&local_1c,(undefined4 *)((int)_Memory + 0xc));
        uVar1 = local_10;
        uVar2 = local_14;
      }
      uVar3 = local_18;
      _free(_Memory);
    }
    piVar4 = param_1 + 1;
    iVar5 = 0x100;
    do {
      _free((void *)*piVar4);
      piVar4 = piVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *param_1 = 0;
    local_4 = 0xffffffff;
    FUN_0045bc40(&local_1c);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0044e430 */
