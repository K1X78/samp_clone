/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100853a0
 * Name: FUN_100853a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 * FUN_100853a0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)&DAT_10180400;
  for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  uVar1 = FUN_100fca0e(param_1);
  if ((int)uVar1 < 0x100) {
    uVar3 = 0;
    if (uVar1 != 0) {
      puVar5 = (undefined4 *)&DAT_10180400;
      for (uVar3 = uVar1 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0x25cf25cf;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = (uint)((uVar1 & 1) != 0); uVar3 = uVar1, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2 *)puVar5 = 0x25cf;
        puVar5 = (undefined4 *)((int)puVar5 + 2);
      }
    }
    (&DAT_10180400)[uVar3] = 0;
  }
  return &DAT_10180400;
}


/* END FUNCTION 0x100853a0 */
