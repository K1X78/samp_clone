/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e6f0
 * Name: thunk_FUN_0044e430
 * Status: ok
 * Single JMP forwarder to 0x0044e430; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall thunk_FUN_0044e430(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  void *_Memory;
  int iVar5;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b0ca8;
  pvStack_c = ExceptionList;
  if (*param_1 != 0) {
    ExceptionList = &pvStack_c;
    FUN_0044ea10(&iStack_1c);
    uStack_4 = 0;
    FUN_0044e2a0(&iStack_1c,param_1);
    uVar1 = uStack_10;
    uVar2 = uStack_14;
    uVar3 = uStack_18;
    while( true ) {
      if (uVar2 < uVar3) {
        iVar5 = uVar1 - uVar3;
      }
      else {
        iVar5 = -uVar3;
      }
      if (uVar2 + iVar5 == 0) break;
      uStack_18 = uVar3 + 1;
      if (uStack_18 == uVar1) {
        _Memory = *(void **)(iStack_1c + -4 + uVar1 * 4);
        uStack_18 = 0;
      }
      else if (uStack_18 == 0) {
        _Memory = *(void **)(iStack_1c + -4 + uVar1 * 4);
      }
      else {
        _Memory = *(void **)(iStack_1c + -4 + uStack_18 * 4);
      }
      if (*(int *)((int)_Memory + 8) != 0) {
        FUN_0044e2a0(&iStack_1c,(undefined4 *)((int)_Memory + 8));
        uVar1 = uStack_10;
        uVar2 = uStack_14;
      }
      if (*(int *)((int)_Memory + 0xc) != 0) {
        FUN_0044e2a0(&iStack_1c,(undefined4 *)((int)_Memory + 0xc));
        uVar1 = uStack_10;
        uVar2 = uStack_14;
      }
      uVar3 = uStack_18;
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
    uStack_4 = 0xffffffff;
    FUN_0045bc40(&iStack_1c);
  }
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x0044e6f0 */
