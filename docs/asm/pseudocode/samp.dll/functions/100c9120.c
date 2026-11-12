/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c9120
 * Name: FUN_100c9120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c9120(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_24 [9];
  
  iVar3 = param_1;
  uVar7 = (param_2 & 1) << 1 | param_2 & 4;
  *(uint *)(param_1 + 0x110) = uVar7 << 3 | *(uint *)(param_1 + 0x110) & 0xffffffcf;
  if (((param_2 & 1) == 0) && (iVar1 = *(int *)(param_1 + 0x487c), iVar1 != 0)) {
    param_1 = 0;
    if (iVar1 != 0) {
      puVar6 = local_24;
      puVar4 = (undefined4 *)(iVar3 + 0x4880);
      do {
        *puVar6 = *puVar4;
        uVar2 = puVar4[2];
        puVar6[1] = puVar4[1];
        puVar6[2] = uVar2;
        *puVar4 = 0;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 3;
        puVar4 = puVar4 + 3;
      } while (param_1 < *(uint *)(iVar3 + 0x487c));
    }
    iVar5 = 0;
    *(undefined4 *)(iVar3 + 0x487c) = 0;
    if (iVar1 != 0) {
      puVar4 = local_24;
      param_1 = iVar1;
      do {
        if (iVar5 == 0) {
          iVar5 = FUN_100d8e30(*(undefined4 *)(iVar3 + 8),puVar4[2],*puVar4,puVar4[1]);
        }
        (*(code *)PTR__free_101554bc)(*puVar4);
        puVar4 = puVar4 + 3;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
  }
  if ((char)(uVar7 << 3) != '0') {
    FUN_100d66d0(iVar3,0,6);
  }
  return 0;
}


/* END FUNCTION 0x100c9120 */
