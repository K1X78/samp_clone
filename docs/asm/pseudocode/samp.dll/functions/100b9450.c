/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b9450
 * Name: FUN_100b9450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b9450(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_8 [8];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_100b92e0(*(int *)(param_1 + 0xc));
    iVar1 = *(int *)(param_1 + 8);
    if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 0x1c), piVar2 != (int *)0x0)) {
      uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2);
      uVar5 = 0;
      if (uVar3 != 0) {
        iVar4 = 0;
        do {
          D3DXMatrixMultiply(*(int *)(param_1 + 0x10) + iVar4,*(int *)(iVar1 + 0x30) + iVar4,
                             *(undefined4 *)(*(int *)(iVar1 + 0x34) + uVar5 * 4));
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 0x40;
        } while (uVar5 < uVar3);
      }
      puVar7 = auStack_8;
      uVar6 = 0x10;
      (**(code **)(**(int **)(iVar1 + 8) + 0x3c))(*(int **)(iVar1 + 8),0x10,puVar7);
      (**(code **)(**(int **)(iVar1 + 0x2c) + 0x3c))(*(int **)(iVar1 + 0x2c),0,&stack0xffffffe8);
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x60))
                (*(int **)(iVar1 + 0x1c),*(undefined4 *)(param_1 + 0x10),0,puVar7,uVar6);
      (**(code **)(**(int **)(iVar1 + 0x2c) + 0x40))(*(int **)(iVar1 + 0x2c));
      (**(code **)(**(int **)(iVar1 + 8) + 0x40))(*(int **)(iVar1 + 8));
    }
  }
  return;
}


/* END FUNCTION 0x100b9450 */
