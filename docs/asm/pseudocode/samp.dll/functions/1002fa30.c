/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002fa30
 * Name: FUN_1002fa30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002fa30(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int local_14;
  uint local_10;
  undefined1 local_8 [8];
  
  local_14 = 0;
  local_10 = 0;
  iVar2 = thunk_FUN_1002f110();
  if (iVar2 != 0) {
    do {
      piVar3 = (int *)FUN_1002f560(local_10);
      iVar2 = *piVar3;
      if (*(char *)(iVar2 + 0x65) != '\0') {
        if (local_14 == 0) {
          local_14 = FUN_1002e2b0();
        }
        FUN_10026f90();
        for (iVar4 = FUN_10027060(); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x85)) {
          uVar5 = 0;
          if (*(int *)(iVar4 + 1) != 0) {
            puVar6 = (undefined4 *)(iVar4 + 0x45);
            do {
              FUN_10026e40(local_8,0);
              cVar1 = FUN_100331a0(param_2 + 2);
              if (cVar1 != '\0') {
                *(int *)(*(int *)(*(int *)*puVar6 + *(int *)(iVar2 + 0x90) * 4) + 1) = local_14;
              }
              uVar5 = uVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar5 < *(uint *)(iVar4 + 1));
          }
        }
      }
      local_10 = local_10 + 1;
      uVar5 = thunk_FUN_1002f110();
    } while (local_10 < uVar5);
  }
  return;
}


/* END FUNCTION 0x1002fa30 */
