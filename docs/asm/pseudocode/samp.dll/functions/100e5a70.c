/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5a70
 * Name: FUN_100e5a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e5a70(uint param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = *(int *)(unaff_EBX + 0x58) + param_1;
  if (*(uint *)(in_EAX + 0x850) <= uVar3) {
    if (0x19000 < uVar3) {
      FUN_100d8ba0();
      return 0x1b;
    }
    uVar4 = uVar3 * 3 >> 1;
    uVar3 = *(uint *)(in_EAX + 0x850) * 2;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    iVar1 = *(int *)(in_EAX + 0x84c);
    iVar2 = *(int *)(unaff_EBX + 0x54);
    iVar5 = (*(code *)PTR__realloc_101554c0)(iVar1,uVar3);
    if (iVar5 == 0) {
      FUN_100d8ba0();
      return 0x1b;
    }
    *(int *)(in_EAX + 0x84c) = iVar5;
    *(uint *)(in_EAX + 0x850) = uVar3;
    *(int *)(unaff_EBX + 0x54) = iVar5 + (iVar2 - iVar1);
  }
  puVar6 = *(undefined4 **)(unaff_EBX + 0x60);
  puVar8 = *(undefined4 **)(unaff_EBX + 0x54);
  for (uVar3 = param_1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = param_1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  puVar7 = (undefined1 *)(*(int *)(unaff_EBX + 0x54) + param_1);
  *(undefined1 **)(unaff_EBX + 0x54) = puVar7;
  *(uint *)(unaff_EBX + 0x58) = *(int *)(unaff_EBX + 0x58) + param_1;
  *puVar7 = 0;
  return 0;
}


/* END FUNCTION 0x100e5a70 */
