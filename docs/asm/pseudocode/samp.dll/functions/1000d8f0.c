/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d8f0
 * Name: FUN_1000d8f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000d8f0(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x3c);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x34);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x2c);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((int)pvVar1 + 0x19) != '\0') && (*(void **)((int)pvVar1 + 0xc) != (void *)0x0)) {
      _free(*(void **)((int)pvVar1 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    }
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  uVar3 = 0;
  if (0 < iVar2) {
    do {
      if ((uVar3 < *(uint *)(param_1 + 0x28)) &&
         (pvVar1 = *(void **)(*(int *)(param_1 + 0x24) + uVar3 * 4), pvVar1 != (void *)0x0)) {
        FUN_1000d620();
        _free(pvVar1);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  FUN_1000c630(0);
  FUN_1000c630(0);
  if ((*(char *)(param_1 + 0x15) != '\0') && (*(void **)(param_1 + 8) != (void *)0x0)) {
    _free(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


/* END FUNCTION 0x1000d8f0 */
