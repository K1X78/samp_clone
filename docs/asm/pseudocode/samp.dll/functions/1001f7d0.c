/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f7d0
 * Name: FUN_1001f7d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001f7d0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    if (0 < *(int *)(param_1 + 4)) {
      puVar1 = _malloc(*(int *)(param_1 + 4) + 7 >> 3);
      uVar2 = *(int *)(param_1 + 4) + 7 >> 3;
      puVar4 = *(undefined4 **)(param_1 + 0xc);
      puVar5 = puVar1;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(undefined4 **)(param_1 + 0xc) = puVar1;
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* END FUNCTION 0x1001f7d0 */
