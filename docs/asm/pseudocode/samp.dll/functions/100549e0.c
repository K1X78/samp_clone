/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100549e0
 * Name: FUN_100549e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100549e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint local_8;
  undefined4 local_4;
  
  local_8 = (uint)*(ushort *)(param_1 + 1);
  FUN_1001faa0(&local_8,0x10,1);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar1 = 0;
    do {
      param_2 = *(undefined4 *)(*param_1 + iVar1);
      local_4 = CONCAT22(local_4._2_2_,*(undefined2 *)((undefined4 *)(*param_1 + iVar1) + 1));
      FUN_1001faa0(&param_2,0x20,1);
      param_2 = local_4;
      FUN_1001faa0(&param_2,0x10,1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 6;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}


/* END FUNCTION 0x100549e0 */
