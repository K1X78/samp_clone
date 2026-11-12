/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f630
 * Name: FUN_1001f630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1001f630(int *param_1,int param_2)

{
  size_t _NewSize;
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (0 < param_2) {
    param_2 = *param_1 + param_2;
    if ((0 < param_2) && ((int)(param_1[1] - 1U & 0xfffffff8) < (int)(param_2 - 1U & 0xfffffff8))) {
      param_2 = param_2 * 2;
      _NewSize = param_2 + 7 >> 3;
      if ((undefined4 *)param_1[3] == (undefined4 *)((int)param_1 + 0x11)) {
        if (0x100 < (int)_NewSize) {
          puVar1 = _malloc(_NewSize);
          uVar3 = param_1[1] + 7 >> 3;
          param_1[3] = (int)puVar1;
          puVar5 = (undefined4 *)((int)param_1 + 0x11);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar1 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar1 = puVar1 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar1 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar1 = (undefined4 *)((int)puVar1 + 1);
          }
        }
      }
      else {
        pvVar2 = _realloc((undefined4 *)param_1[3],_NewSize);
        param_1[3] = (int)pvVar2;
      }
    }
    if (param_1[1] < param_2) {
      param_1[1] = param_2;
    }
  }
  return;
}


/* END FUNCTION 0x1001f630 */
