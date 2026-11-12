/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ce00
 * Name: FUN_0042ce00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042ce00(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  iVar1 = *param_1;
  iVar6 = 0;
  local_8 = 0;
  if (0 < *(int *)(iVar1 + 4)) {
    do {
      piVar2 = *(int **)(*(int *)(iVar1 + 8) + 4 + iVar6);
      bVar3 = false;
      if (piVar2 != (int *)0x0) {
        bVar4 = FUN_0040d070((int)piVar2);
        if (CONCAT31(extraout_var,bVar4) == 0) {
          uVar5 = FUN_00427d80(piVar2,0);
          if ((uVar5 == 7) || (uVar5 == 0xc0a)) {
            *(undefined1 *)(iVar1 + 0x1e) = 1;
          }
          if (uVar5 != 0) {
            return;
          }
          bVar3 = true;
        }
        FUN_0040cff0(1,&local_4);
        if (local_4 != **(int **)(*(int *)(iVar1 + 8) + 0xc + iVar6)) {
          param_1[1] = 0x11;
        }
        if (bVar3) {
          FUN_0042ace0();
        }
      }
      local_8 = local_8 + 1;
      iVar6 = iVar6 + 0x10;
    } while (local_8 < *(int *)(iVar1 + 4));
  }
  return;
}


/* END FUNCTION 0x0042ce00 */
