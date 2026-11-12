/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b8c30
 * Name: FUN_100b8c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b8c30(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  while( true ) {
    iVar1 = *(int *)(param_2 + 0x44);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 8) == 0) {
        *(int *)(param_1 + 8) = iVar1;
      }
      if (*(int *)(iVar1 + 0x1c) != 0) {
        piVar2 = *(int **)(iVar1 + 8);
        iVar5 = *piVar2;
        uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,*(undefined4 *)(param_1 + 4),iVar1 + 0x2c);
        (**(code **)(iVar5 + 0x2c))(*(undefined4 *)(iVar1 + 8),0x220,uVar3);
        uVar4 = (**(code **)(**(int **)(iVar1 + 0x1c) + 0x24))(*(int **)(iVar1 + 0x1c));
        if (*(uint *)(param_1 + 0x24) < uVar4) {
          uVar3 = (**(code **)(**(int **)(iVar1 + 0x1c) + 0x24))(*(int **)(iVar1 + 0x1c));
          *(undefined4 *)(param_1 + 0x24) = uVar3;
        }
        uVar4 = 0;
        iVar5 = (**(code **)(**(int **)(iVar1 + 0x1c) + 0x24))(*(int **)(iVar1 + 0x1c));
        if (iVar5 != 0) {
          do {
            uVar3 = (**(code **)(**(int **)(iVar1 + 0x1c) + 0x3c))(*(int **)(iVar1 + 0x1c),uVar4);
            iVar5 = D3DXFrameFind(*(undefined4 *)(param_1 + 0xc),uVar3);
            *(int *)(*(int *)(iVar1 + 0x34) + uVar4 * 4) = iVar5 + 0x50;
            uVar4 = uVar4 + 1;
            uVar6 = (**(code **)(**(int **)(iVar1 + 0x1c) + 0x24))(*(int **)(iVar1 + 0x1c));
          } while (uVar4 < uVar6);
        }
      }
    }
    if (*(int *)(param_2 + 0x48) != 0) {
      FUN_100b8c30(*(int *)(param_2 + 0x48),param_3);
    }
    if (*(int *)(param_2 + 0x4c) == 0) break;
    param_3 = param_2 + 0x50;
    param_2 = *(int *)(param_2 + 0x4c);
  }
  return;
}


/* END FUNCTION 0x100b8c30 */
