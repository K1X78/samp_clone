/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100310a0
 * Name: FUN_100310a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100310a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      cVar4 = FUN_100331a0(&param_2);
      if (cVar4 != '\0') {
        if (param_4 == 0) {
          puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + -10 + *(int *)(param_1 + 0x14) * 10);
          puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar6 * 10);
          *puVar1 = *puVar2;
          *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar2 + 1);
          *(undefined4 *)((int)puVar1 + 6) = *(undefined4 *)((int)puVar2 + 6);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          return 0;
        }
        iVar5 = FUN_10030c70(param_4);
        if (iVar5 == -1) {
          return -1;
        }
        puVar3 = (uint *)(*(int *)(param_1 + 0x10) + 6 + uVar6 * 10);
        *puVar3 = *puVar3 & (1 << ((byte)iVar5 & 0x1f) ^ 0xffffU);
        return iVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x14));
  }
  return -1;
}


/* END FUNCTION 0x100310a0 */
