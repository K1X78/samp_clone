/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415950
 * Name: FUN_00415950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_00415950(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2 = FUN_00412930(0x10);
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 0;
    iVar1 = *param_2;
    piVar2[1] = iVar1;
    *piVar2 = iVar1;
    puVar3 = FUN_00412930(*param_2 * 0x14);
    piVar2[3] = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)param_2[3];
      local_8 = 0;
      if (0 < *param_2) {
        do {
          uVar4 = FUN_00420310(param_1,(undefined4 *)*puVar6,param_3);
          *puVar3 = uVar4;
          pcVar5 = FUN_00412a70();
          puVar3[1] = pcVar5;
          pcVar5 = FUN_00412a70();
          puVar3[2] = pcVar5;
          *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar6 + 3);
          *(undefined1 *)((int)puVar3 + 0xd) = 0;
          *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)((int)puVar6 + 0xe);
          *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar6 + 4);
          local_8 = local_8 + 1;
          puVar3 = puVar3 + 5;
          puVar6 = puVar6 + 5;
        } while (local_8 < *param_2);
      }
      return piVar2;
    }
    FUN_00408130(param_1);
  }
  return (int *)0x0;
}


/* END FUNCTION 0x00415950 */
