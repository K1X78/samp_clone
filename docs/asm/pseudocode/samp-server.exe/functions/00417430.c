/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417430
 * Name: FUN_00417430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00417430(int param_1)

{
  uint uVar1;
  int unaff_EBX;
  int iVar2;
  uint *puVar3;
  
  if (unaff_EBX != 0) {
    iVar2 = 0;
    if (0 < *(int *)(unaff_EBX + 0x18)) {
      puVar3 = (uint *)(unaff_EBX + 0x28);
      do {
        uVar1 = puVar3[0xf];
        if (uVar1 != 0) {
          if (*(int *)(uVar1 + 0x1c) != 0) {
            FUN_004080d0(*(int *)(uVar1 + 0x18));
          }
          FUN_00408130(param_1);
        }
        if (((*puVar3 & 0x20000000) != 0) && (puVar3[2] != 0)) {
          FUN_00408130(param_1);
          FUN_00408130(param_1);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x10;
      } while (iVar2 < *(int *)(unaff_EBX + 0x18));
    }
    FUN_00416f40(*(undefined4 **)(unaff_EBX + 0x1c));
    FUN_00408130(param_1);
  }
  return;
}


/* END FUNCTION 0x00417430 */
