/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c1a00
 * Name: FUN_100c1a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c1a00(undefined1 *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 1;
  puVar5 = (undefined4 *)(param_1 + 2);
  uVar3 = 2;
  do {
    uVar4 = 1 << ((char)(uVar3 >> 1) - 1U & 0x1f);
    if (uVar4 != 0) {
      uVar2 = (undefined1)uVar3;
      puVar6 = puVar5;
      for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar6 = puVar6 + 1;
      }
      for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar6 = uVar2;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    puVar5 = (undefined4 *)((int)puVar5 + uVar4);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x16);
  return;
}


/* END FUNCTION 0x100c1a00 */
