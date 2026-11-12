/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046acc0
 * Name: FUN_0046acc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0046acc0(void *this,uint param_1)

{
  void *_Memory;
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  iVar2 = FUN_00401710(*(int **)((int)this + param_1 * 4),(byte *)"OnFilterScriptExit",
                       (int *)&param_1);
  if (iVar2 == 0) {
    FUN_00401c90(*(int **)((int)this + uVar1 * 4),&param_1,param_1);
  }
  if (*(void **)(DAT_004fc438 + 0x3c) != (void *)0x0) {
    FUN_00482ec0(*(void **)(DAT_004fc438 + 0x3c),*(int *)((int)this + uVar1 * 4));
  }
  FUN_0046fc20(*(int **)((int)this + uVar1 * 4));
  FUN_00469c80(DAT_004fc440,*(undefined4 *)((int)this + uVar1 * 4));
  FUN_00407360();
  FUN_00407de0();
  FUN_00407de0();
  FUN_00407de0();
  FUN_00404b60();
  FUN_00407de0();
  _Memory = *(void **)((int)this + uVar1 * 4);
  if (_Memory != (void *)0x0) {
    _free(_Memory);
    *(undefined4 *)((int)this + uVar1 * 4) = 0;
  }
  *(undefined1 *)(uVar1 * 0xff + 0x40 + (int)this) = 0;
  *(int *)((int)this + 0x1030) = *(int *)((int)this + 0x1030) + -1;
  return;
}


/* END FUNCTION 0x0046acc0 */
