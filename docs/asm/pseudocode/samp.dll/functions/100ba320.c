/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ba320
 * Name: FUN_100ba320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ba320(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 local_10;
  short local_c;
  undefined4 local_8;
  short local_4;
  
  iVar2 = param_2;
  iVar5 = *(int *)(param_1 + 0x1c);
  while (iVar5 != 0) {
    FUN_100ba320(param_2);
    param_1 = *(int *)(param_1 + 0x20);
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3 != 0)) {
    *(undefined2 *)(*(int *)(param_2 + 0x9c) * 0x1c + 0x18 + *(int *)(param_2 + 0x98)) =
         *(undefined2 *)(param_2 + 0x8c);
    if (*(int *)(param_1 + 0x28) == 0) {
      sVar3 = 0;
    }
    else {
      sVar3 = (short)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3);
    }
    *(short *)(*(int *)(param_2 + 0x9c) * 0x1c + 0x1a + *(int *)(param_2 + 0x98)) =
         *(short *)(param_2 + 0x8c) + sVar3 + -1;
    puVar6 = *(ushort **)(param_1 + 0x28);
    puVar1 = (undefined4 *)(*(int *)(param_2 + 0x90) + (uint)*puVar6 * 6);
    local_10 = *puVar1;
    local_c = *(short *)(puVar1 + 1);
    puVar1 = (undefined4 *)(*(int *)(param_2 + 0x90) + (uint)*puVar6 * 6);
    local_8 = *puVar1;
    local_4 = *(short *)(puVar1 + 1);
    for (param_2 = 0;
        (*(int *)(param_1 + 0x28) != 0 &&
        (param_2 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3)));
        param_2 = param_2 + 1) {
      iVar5 = *(int *)(iVar2 + 0x88);
      iVar4 = *(int *)(iVar2 + 0x8c) + param_2;
      *(undefined4 *)(iVar5 + iVar4 * 8) = *(undefined4 *)(puVar6 + param_2 * 4);
      *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = *(undefined4 *)(puVar6 + param_2 * 4 + 2);
      puVar6 = *(ushort **)(param_1 + 0x28);
      iVar5 = *(int *)(iVar2 + 0x90);
      FUN_100b99c0(&local_10,iVar5 + (uint)puVar6[param_2 * 4] * 6);
      FUN_100b99c0(&local_10,iVar5 + (uint)puVar6[param_2 * 4 + 1] * 6);
      FUN_100b99c0(&local_10,iVar5 + (uint)puVar6[param_2 * 4 + 2] * 6);
      FUN_100b9a00(&local_8,iVar5 + (uint)puVar6[param_2 * 4] * 6);
      FUN_100b9a00(&local_8,iVar5 + (uint)puVar6[param_2 * 4 + 1] * 6);
      FUN_100b9a00(&local_8,iVar5 + (uint)puVar6[param_2 * 4 + 2] * 6);
    }
    *(float *)(*(int *)(iVar2 + 0x9c) * 0x1c + *(int *)(iVar2 + 0x98)) =
         (float)(int)(short)local_10 * 0.0078125;
    *(float *)(*(int *)(iVar2 + 0x9c) * 0x1c + 4 + *(int *)(iVar2 + 0x98)) =
         (float)(int)local_10._2_2_ * 0.0078125;
    *(float *)(*(int *)(iVar2 + 0x9c) * 0x1c + 8 + *(int *)(iVar2 + 0x98)) =
         (float)(int)local_c * 0.0078125;
    *(float *)(*(int *)(iVar2 + 0x9c) * 0x1c + 0xc + *(int *)(iVar2 + 0x98)) =
         (float)(int)(short)local_8 * 0.0078125;
    *(float *)(*(int *)(iVar2 + 0x9c) * 0x1c + 0x10 + *(int *)(iVar2 + 0x98)) =
         (float)(int)local_8._2_2_ * 0.0078125;
    *(float *)(*(int *)(iVar2 + 0x9c) * 0x1c + 0x14 + *(int *)(iVar2 + 0x98)) =
         (float)(int)local_4 * 0.0078125;
    *(int *)(iVar2 + 0x9c) = *(int *)(iVar2 + 0x9c) + 1;
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3;
    }
    *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + iVar5;
  }
  return;
}


/* END FUNCTION 0x100ba320 */
