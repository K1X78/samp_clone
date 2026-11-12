/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10006c10
 * Name: FUN_10006c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10006c10(int *param_1,undefined4 param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float local_c;
  uint local_4;
  
  GetTickCount();
  iVar3 = *(int *)(param_3 + 0x4c);
  puVar1 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if (((iVar3 != 0) && (*param_1 != 0)) && (iVar2 = FUN_100b6fa0(), iVar2 == 0)) {
    if (((*(int *)(iVar3 + 0x460) == 0) ||
        ((*(uint *)(*(int *)(iVar3 + 0x460) + 0x46c) & 0x100) == 0)) &&
       ((fVar7 = (float10)FUN_1009ef00(), fVar7 <= (float10)90.0 &&
        ((iVar2 = FUN_1009fc20(), iVar2 == 0 && (iVar2 = FUN_100b7830(), iVar2 == 0)))))) {
      piVar4 = (int *)(iVar3 + 0x464);
      iVar3 = 0;
      do {
        iVar2 = *piVar4;
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x598) == 0)) {
          if (iVar2 != *(int *)(*param_1 + 0x2a4)) {
            return 0;
          }
          FUN_10004bd0(param_2,(char)iVar3 + '\x01');
          return 1;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 8);
      local_4 = 0;
      local_c = 100000.0;
      uVar5 = *(uint *)(puVar1 + 0x11);
      if ((int)*(uint *)(puVar1 + 0x11) < (int)(uint)*puVar1) {
        uVar5 = (uint)*puVar1;
      }
      uVar6 = 0;
      if (-1 < (int)uVar5) {
        do {
          if (uVar6 == *puVar1) {
            iVar3 = *param_1;
LAB_10006d49:
            if ((iVar3 != 0) && (iVar3 = FUN_1009f210(), iVar3 != 0)) {
              FUN_100abdc0(param_3);
              if (uVar6 == 0) {
                local_c = (float)extraout_ST0;
              }
              else if (extraout_ST0 < (float10)local_c) {
                local_c = (float)extraout_ST0;
                local_4 = uVar6;
              }
            }
          }
          else if ((((ushort)uVar6 < 0x3ed) && (*(int *)(puVar1 + (uVar6 & 0xffff) * 2 + 0x13) != 0)
                   ) && (iVar3 = *(int *)(*(int *)(puVar1 + (uVar6 & 0xffff) * 2 + 0x13) + 8),
                        iVar3 != 0)) {
            iVar3 = *(int *)(iVar3 + 4);
            goto LAB_10006d49;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 <= (int)uVar5);
      }
      if (local_4 != *puVar1) {
        return 0;
      }
      if (local_c < 90.0 == (local_c == 90.0)) {
        return 0;
      }
      FUN_10004bd0(param_2,0);
      return 1;
    }
    *(undefined4 *)(param_3 + 0x7f) = 0;
    *(undefined4 *)(param_3 + 0x83) = 0;
  }
  return 0;
}


/* END FUNCTION 0x10006c10 */
