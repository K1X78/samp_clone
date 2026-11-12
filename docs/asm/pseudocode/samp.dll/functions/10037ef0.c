/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037ef0
 * Name: FUN_10037ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10037ef0(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (0xff < (int)param_3) {
    param_3 = 0xff;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (0 < (int)param_3) {
      puVar2 = (undefined4 *)(param_1 + 0x233);
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
    }
    *(char *)(param_1 + 0x333) = (char)param_3;
    return;
  }
  *(undefined1 *)(param_1 + 0x333) = 0;
  return;
}


/* END FUNCTION 0x10037ef0 */
