/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d620
 * Name: FUN_1000d620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000d620(int param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(void **)(param_1 + 0x44) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x79) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x79));
    *(undefined4 *)(param_1 + 0x79) = 0;
  }
  if (*(void **)(param_1 + 0x7d) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x7d));
    *(undefined4 *)(param_1 + 0x7d) = 0;
  }
  if (*(void **)(param_1 + 0x81) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x81));
    *(undefined4 *)(param_1 + 0x81) = 0;
  }
  if (*(void **)(param_1 + 0x85) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x85));
    *(undefined4 *)(param_1 + 0x85) = 0;
  }
  if (*(void **)(param_1 + 0x95) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x95));
    *(undefined4 *)(param_1 + 0x95) = 0;
  }
  if (*(void **)(param_1 + 0x99) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x99));
    *(undefined4 *)(param_1 + 0x99) = 0;
  }
  if (*(void **)(param_1 + 0x9d) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x9d));
    *(undefined4 *)(param_1 + 0x9d) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if ((uVar3 < *(uint *)(param_1 + 0x5c)) &&
         (pvVar2 = *(void **)(*(int *)(param_1 + 0x58) + uVar3 * 4), pvVar2 != (void *)0x0)) {
        _free(pvVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x71);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if ((uVar3 < *(uint *)(param_1 + 0x71)) &&
         (pvVar2 = *(void **)(*(int *)(param_1 + 0x6d) + uVar3 * 4), pvVar2 != (void *)0x0)) {
        if (*(void **)((int)pvVar2 + 8) != (void *)0x0) {
          _free(*(void **)((int)pvVar2 + 8));
          *(undefined4 *)((int)pvVar2 + 8) = 0;
        }
        _free(pvVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  pvVar2 = *(void **)(param_1 + 0x4c);
  if (pvVar2 != (void *)0x0) {
    if ((*(char *)((int)pvVar2 + 0x19) != '\0') && (*(void **)((int)pvVar2 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar2 + 0xc));
      *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    }
    _free(pvVar2);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x50);
  if (pvVar2 != (void *)0x0) {
    if ((*(char *)((int)pvVar2 + 0x19) != '\0') && (*(void **)((int)pvVar2 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar2 + 0xc));
      *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    }
    _free(pvVar2);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_1000c5c0(0);
  FUN_1000c550(0);
  return;
}


/* END FUNCTION 0x1000d620 */
