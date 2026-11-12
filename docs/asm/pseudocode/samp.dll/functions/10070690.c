/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070690
 * Name: FUN_10070690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10070690(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    iVar2 = (**(code **)(*DAT_102ac9d4 + 0x1c))(0xbaddea6b);
    if (iVar2 != -1) {
      uVar3 = (**(code **)(*DAT_102ac9d4 + 0x14))(iVar2);
      uVar4 = (**(code **)(*DAT_102ac9d4 + 0x10))(iVar2);
      D3DXCreateTextureFromFileInMemory
                (*(undefined4 *)(param_1 + 0xc),uVar3,uVar4,(undefined4 *)(param_1 + 0x10));
    }
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(param_1 + 0xc) + 0xf0))(*(int **)(param_1 + 0xc));
      (**(code **)(**(int **)(param_1 + 0xc) + 0x104))
                (*(int **)(param_1 + 0xc),0,*(undefined4 *)(param_1 + 0x10));
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x1b,1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x13,5);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x14,6);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0xf,1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x18,8);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x19,7);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),8,3);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x16,3);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x34,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x88,1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x98,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x97,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0xa7,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0x1c,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0xe4))(*(int **)(param_1 + 0xc),0xa8,0xf);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),0,1,4);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),0,2,2);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),0,3,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),0,4,4);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),0,5,2);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),0,6,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),0,0xb,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),0,0x18,0);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),1,1,1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10c))(*(int **)(param_1 + 0xc),1,4,1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x114))(*(int **)(param_1 + 0xc),0,6,1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x114))(*(int **)(param_1 + 0xc),0,5,1);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x114))(*(int **)(param_1 + 0xc),0,7,0);
      iVar5 = param_1 + 0x14;
      if (iVar2 != 0) {
        iVar5 = param_1 + 0x18;
      }
      (**(code **)(**(int **)(param_1 + 0xc) + 0xf4))(*(int **)(param_1 + 0xc),iVar5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != DAT_102aca2c)) {
    FUN_1006ac00();
    return;
  }
  return;
}


/* END FUNCTION 0x10070690 */
