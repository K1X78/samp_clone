/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc110
 * Name: FUN_100bc110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100bc110(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = _malloc(param_1[2]);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = param_1[2];
  puVar4 = (undefined4 *)*param_1;
  puVar5 = puVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *param_1 = puVar1;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  return 1;
}


/* END FUNCTION 0x100bc110 */
