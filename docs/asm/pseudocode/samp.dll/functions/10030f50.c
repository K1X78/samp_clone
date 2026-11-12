/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030f50
 * Name: FUN_10030f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10030f50(int param_1,int param_2,char *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [4];
  undefined2 *puVar8;
  uint local_208;
  undefined1 local_204 [4];
  char local_200 [511];
  undefined1 local_1;
  
  if ((param_2 != 0) && (param_3 != (char *)0x0)) {
    iVar3 = FUN_10030c70(param_2);
    if (iVar3 == -1) {
      FUN_10030f20(param_2);
    }
    __vsnprintf(local_200,0x200,param_3,&stack0x00000010);
    pcVar4 = local_200;
    local_1 = 0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)(local_200 + 1);
    if (iVar5 != 0) {
      if (local_200[iVar5 + -1] == '\n') {
        local_200[iVar5 + -1] = '\0';
      }
      if (iVar5 < 0x1fc) {
        puVar2 = (undefined2 *)(local_204 + 3);
        do {
          puVar8 = puVar2;
          puVar2 = (undefined2 *)((int)puVar8 + 1);
        } while (*(char *)((int)puVar8 + 1) != '\0');
        *(undefined2 *)((int)puVar8 + 1) = 0xa0d;
        *(undefined1 *)((int)puVar8 + 3) = 0;
      }
      else {
        local_200[iVar5 + -3] = '\r';
        local_200[iVar5 + -2] = '\n';
        local_200[iVar5 + -1] = '\0';
      }
      local_208 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        auVar7 = (undefined1  [4])(1 << ((byte)iVar3 & 0x1f));
        iVar3 = 0;
        local_204 = auVar7;
        do {
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar3);
          if (((uint)auVar7 & *(uint *)(*(int *)(param_1 + 0x10) + 6 + iVar3)) != 0) {
            (**(code **)(**(int **)(param_1 + 0x9c) + 8))
                      (*(int **)(param_1 + 0x9c),*puVar6,*(undefined2 *)(puVar6 + 1),local_200);
            auVar7 = local_204;
          }
          local_208 = local_208 + 1;
          iVar3 = iVar3 + 10;
        } while (local_208 < *(uint *)(param_1 + 0x14));
      }
    }
  }
  return;
}


/* END FUNCTION 0x10030f50 */
