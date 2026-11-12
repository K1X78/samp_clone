/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c10b0
 * Name: FUN_100c10b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100c10b0(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = (0x300 << ((char)param_2[1] + (char)*param_2 & 0x1fU)) + 0x736;
  if (uVar1 != 0) {
    puVar3 = (undefined4 *)param_2[4];
    for (uVar2 = uVar1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0x4000400;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = (uint)((uVar1 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar3 = 0x400;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    }
  }
  param_2[0x11] = 1;
  param_2[0x10] = 1;
  param_2[0xf] = 1;
  param_2[0xe] = 1;
  param_2[0xd] = 0;
  param_2[0x14] = 0;
  return;
}


/* END FUNCTION 0x100c10b0 */
