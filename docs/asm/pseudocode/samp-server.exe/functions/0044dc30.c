/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044dc30
 * Name: FUN_0044dc30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044dc30(void *this,int param_1)

{
  size_t _NewSize;
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (0 < param_1) {
    iVar5 = *(int *)this + param_1;
    if ((0 < iVar5) &&
       ((int)(*(int *)((int)this + 4) - 1U & 0xfffffff8) < (int)(iVar5 - 1U & 0xfffffff8))) {
      iVar5 = iVar5 * 2;
      _NewSize = iVar5 + 7 >> 3;
      if (*(undefined4 **)((int)this + 0xc) == (undefined4 *)((int)this + 0x11)) {
        if (0x100 < (int)_NewSize) {
          puVar1 = _malloc(_NewSize);
          uVar3 = *(int *)((int)this + 4) + 7 >> 3;
          *(undefined4 **)((int)this + 0xc) = puVar1;
          puVar6 = (undefined4 *)((int)this + 0x11);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar1 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar1 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar1 = (undefined4 *)((int)puVar1 + 1);
          }
        }
      }
      else {
        pvVar2 = _realloc(*(undefined4 **)((int)this + 0xc),_NewSize);
        *(void **)((int)this + 0xc) = pvVar2;
      }
    }
    if (*(int *)((int)this + 4) < iVar5) {
      *(int *)((int)this + 4) = iVar5;
    }
  }
  return;
}


/* END FUNCTION 0x0044dc30 */
