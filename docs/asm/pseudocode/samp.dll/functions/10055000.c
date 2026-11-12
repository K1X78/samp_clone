/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055000
 * Name: FUN_10055000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10055000(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_c [4];
  int local_8;
  int local_4;
  
  piVar1 = (int *)FUN_10026f80();
  FUN_10026f90();
  local_8 = FUN_10027060();
  local_4 = piVar1[1];
  FUN_1001faa0(&local_4,0x20,1);
  uVar3 = 0;
  if (piVar1[1] != 0) {
    iVar4 = 0;
    do {
      uVar8 = 0;
      iVar2 = *piVar1 + iVar4;
      uVar6 = 0x20;
      uVar7 = param_2;
      FUN_100536f0(iVar2,0x20,param_2,0);
      FUN_10053c60(iVar2,uVar6,uVar7,uVar8);
      local_c[0] = *(undefined1 *)(*piVar1 + 0x20 + iVar4);
      FUN_1001faa0(local_c,8,1);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x24;
    } while (uVar3 < (uint)piVar1[1]);
  }
  FUN_10026f90();
  local_4 = FUN_10028040();
  FUN_1001faa0(&local_4,0x20,1);
  for (; local_8 != 0; local_8 = *(int *)(local_8 + 0x85)) {
    uVar3 = 0;
    if (*(int *)(local_8 + 1) != 0) {
      puVar5 = (undefined4 *)(local_8 + 0x45);
      do {
        FUN_10054f10(*puVar5,puVar5[-0x10],piVar1,param_2);
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 < *(uint *)(local_8 + 1));
    }
  }
  return;
}


/* END FUNCTION 0x10055000 */
