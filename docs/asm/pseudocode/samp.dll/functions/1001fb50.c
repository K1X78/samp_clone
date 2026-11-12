/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001fb50
 * Name: FUN_1001fb50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1001fb50(byte *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_3 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((*param_1 & 7) == 0) {
      FUN_1001f630(param_3 * 8);
      puVar2 = (undefined4 *)((*(int *)param_1 + 7 >> 3) + *(int *)(param_1 + 0xc));
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)param_1 = *(int *)param_1 + param_3 * 8;
      return;
    }
    FUN_1001faa0(param_2,param_3 * 8,1);
  }
  return;
}


/* END FUNCTION 0x1001fb50 */
