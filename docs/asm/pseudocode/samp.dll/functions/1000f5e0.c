/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000f5e0
 * Name: FUN_1000f5e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000f5e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint local_95c;
  undefined4 local_958;
  undefined4 local_954;
  undefined4 local_950;
  undefined4 local_94c;
  undefined4 local_948;
  undefined4 local_944;
  undefined4 local_940;
  undefined4 local_93c;
  undefined1 local_938 [280];
  undefined4 local_820 [515];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10112f0b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_c = 0;
  if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x1c) != 0) {
    puVar2 = local_820;
    for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_95c = local_95c & 0xffffff00;
    *(undefined1 *)puVar2 = 0;
    FUN_1001f470(&local_93c,0x10,1);
    FUN_1001f470(&local_944,0x20,1);
    FUN_1001f470(&local_94c,0x20,1);
    FUN_1001f470(&local_954,0x20,1);
    FUN_1001f470(&local_958,0x20,1);
    FUN_1001f470(&local_948,0x20,1);
    FUN_1001f470(&local_95c,8,1);
    FUN_1001f470(&local_940,0x10,1);
    FUN_1001f470(&local_950,0x10,1);
    uVar5 = 0;
    puVar4 = local_938;
    puVar2 = local_820;
    uVar3 = 0x800;
    FUN_100536f0(puVar2,0x800,puVar4,0);
    FUN_10053d90(puVar2,uVar3,puVar4,uVar5);
    if ((ushort)local_93c < 0x800) {
      FUN_100011d0(local_93c,local_820,local_944,local_94c,local_954,local_958,local_948,local_95c,
                   local_940,local_950);
    }
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1000f5e0 */
