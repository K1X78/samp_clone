/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038260
 * Name: FUN_10038260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10038260(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 local_4;
  
  uVar6 = 0;
  local_4 = DAT_1013c7d0;
  uVar5 = DAT_1013c7cc;
  if (*(short *)(param_1 + 7) != 0) {
    iVar4 = 0;
    do {
      cVar2 = FUN_100331a0(&stack0x00000008);
      if (cVar2 == '\0') {
        cVar2 = FUN_100331a0(&DAT_1013c7cc);
        if (cVar2 != '\0') goto LAB_100382ae;
      }
      else {
LAB_100382ae:
        iVar3 = *(int *)(param_1 + 0x334) + iVar4;
        if (*(char *)(*(int *)(param_1 + 0x334) + iVar4) != '\0') {
          puVar1 = (undefined4 *)(uVar6 * 0xc69 + 7 + *(int *)(param_1 + 0x334));
          *param_2 = *puVar1;
          *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar1 + 1);
          return;
        }
        local_4 = *(undefined2 *)(iVar3 + 0xb);
        uVar5 = *(undefined4 *)(iVar3 + 7);
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0xc69;
    } while (uVar6 < *(ushort *)(param_1 + 7));
  }
  *param_2 = uVar5;
  *(undefined2 *)(param_2 + 1) = local_4;
  return;
}


/* END FUNCTION 0x10038260 */
