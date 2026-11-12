/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005c20
 * Name: FUN_10005c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10005c20(int param_1,ushort param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_128 [4];
  uint local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011284b;
  local_c = ExceptionList;
  iVar4 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if (((param_2 < 2000) && (*(int *)(iVar4 + 0x3074 + (uint)param_2 * 4) != 0)) &&
     (*(int *)(iVar4 + 0x1134 + (uint)param_2 * 4) != 0)) {
    if (param_2 == *(ushort *)(param_1 + 0x31c)) {
      ExceptionList = &local_c;
      iVar4 = FUN_100b76c0();
      if (((*(int *)(param_1 + 0x31e) != iVar4) ||
          (iVar4 = FUN_100b76f0(), *(int *)(param_1 + 0x322) != iVar4)) ||
         ((cVar2 = FUN_100b7720(), *(char *)(param_1 + 0x326) != cVar2 ||
          (cVar2 = FUN_100b7570(), *(char *)(param_1 + 0x327) != cVar2)))) {
        uVar3 = FUN_100b76c0();
        *(undefined4 *)(param_1 + 0x31e) = uVar3;
        uVar3 = FUN_100b76f0();
        *(undefined4 *)(param_1 + 0x322) = uVar3;
        uVar1 = FUN_100b7720();
        *(undefined1 *)(param_1 + 0x326) = uVar1;
        uVar1 = FUN_100b7570();
        *(undefined1 *)(param_1 + 0x327) = uVar1;
        FUN_1001f1f0();
        local_124 = (uint)*(ushort *)(param_1 + 0x31c);
        local_4 = 0;
        FUN_1001faa0(&local_124,0x10,1);
        local_124 = *(uint *)(param_1 + 0x31e);
        FUN_1001faa0(&local_124,0x20,1);
        local_124 = *(uint *)(param_1 + 0x322);
        FUN_1001faa0(&local_124,0x20,1);
        local_128[0] = *(undefined1 *)(param_1 + 0x326);
        FUN_1001faa0(local_128,8,1);
        local_128[0] = *(undefined1 *)(param_1 + 0x327);
        FUN_1001faa0(local_128,8,1);
        (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117968,local_120,1,8,0,0);
        local_4 = 0xffffffff;
        FUN_1001f390();
      }
    }
    else {
      ExceptionList = &local_c;
      uVar3 = FUN_100b76c0();
      *(undefined4 *)(param_1 + 0x31e) = uVar3;
      uVar3 = FUN_100b76f0();
      *(undefined4 *)(param_1 + 0x322) = uVar3;
      uVar1 = FUN_100b7720();
      *(undefined1 *)(param_1 + 0x326) = uVar1;
      uVar1 = FUN_100b7570();
      *(undefined1 *)(param_1 + 0x327) = uVar1;
      *(ushort *)(param_1 + 0x31c) = param_2;
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10005c20 */
