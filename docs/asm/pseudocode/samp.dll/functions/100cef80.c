/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cef80
 * Name: FUN_100cef80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cef80(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((*(int *)(param_1 + 0x4874) != 0) &&
     ((*(byte **)(param_1 + 0x6c) == (byte *)0x0 || ((**(byte **)(param_1 + 0x6c) & 0x10) == 0)))) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x4c4) != 0) {
      iVar2 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x4874) + 0xc + iVar2);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4874) + iVar2);
        if (iVar1 != 0) {
          (**(code **)(PTR_DAT_10155510 + 0x44))(iVar1);
          puVar4[3] = 0;
          puVar4[5] = 0;
          FUN_100ce770(puVar4 + 8);
          (*(code *)PTR__free_101554bc)(*puVar4);
          *puVar4 = 0;
          (*(code *)PTR__free_101554bc)(puVar4[1]);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x50;
      } while (uVar3 < *(uint *)(param_1 + 0x4c4));
    }
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x4874));
    *(undefined4 *)(param_1 + 0x4874) = 0;
  }
  (**(code **)(PTR_DAT_10155510 + 0x40))(param_1);
  return;
}


/* END FUNCTION 0x100cef80 */
