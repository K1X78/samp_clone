/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10031cd0
 * Name: FUN_10031cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10031cd0(int param_1)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  void *_Memory;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined1 *puStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  uint local_150;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint local_128;
  int local_124;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114acb;
  local_c = ExceptionList;
  uVar11 = 0;
  if (*(int *)(param_1 + 0xd) != 0) {
    ExceptionList = &local_c;
    local_124 = param_1;
    uVar8 = FUN_1002e2b0();
    local_128 = uVar8;
    FUN_1001f1f0();
    local_4 = 0;
    if (*(int *)(param_1 + 0xd) != 0) {
      piVar1 = (int *)(param_1 + 9);
      do {
        puVar3 = *(uint **)(*piVar1 + uVar11 * 4);
        iVar10 = param_1;
        if (*(uint *)((int)puVar3 + 0xb) < uVar8) {
          _free(*(void **)((int)puVar3 + 0x15));
          _Memory = *(void **)(*piVar1 + uVar11 * 4);
LAB_1003201d:
          local_150 = 0x10032023;
          _free(_Memory);
          FUN_10031be0();
        }
        else {
          if ((char)puVar3[1] == '\0') {
            if ((*puVar3 != 0) && (*puVar3 <= uVar8)) {
              cVar7 = FUN_100331d0();
              iVar10 = local_124;
              piVar5 = *(int **)(param_1 + 5);
              iVar4 = *piVar5;
              iVar6 = *(int *)(*piVar1 + uVar11 * 4);
              if (cVar7 == '\0') {
                local_154 = *(undefined4 *)(iVar6 + 0x1d);
                local_150 = CONCAT22(local_150._2_2_,*(undefined2 *)(iVar6 + 0x21));
                local_158 = 0x100320c9;
                local_158 = (**(code **)(*piVar5 + 0xb8))();
                uStack_15c = 0x100320d0;
                (**(code **)(iVar4 + 0x74))();
              }
              else {
                local_150 = (uint)*(ushort *)(iVar6 + 9);
                local_158 = *(undefined4 *)(iVar6 + 5);
                local_154 = CONCAT22(local_154._2_2_,*(undefined2 *)(iVar6 + 9));
                uStack_15c = 0x10032094;
                uStack_15c = (**(code **)(*piVar5 + 0xb8))();
                puStack_160 = (undefined1 *)0x1003209b;
                (**(code **)(iVar4 + 0x20))();
              }
              _free(*(void **)(*(int *)(*piVar1 + uVar11 * 4) + 0x15));
              local_150 = 0x100320e9;
              _free(*(void **)(*piVar1 + uVar11 * 4));
              FUN_10031be0();
              goto LAB_10031dc7;
            }
          }
          else if (*puVar3 <= uVar8) {
            if (*(byte *)((int)puVar3 + 0x23) < 5) {
              pcVar2 = (char *)(*(int *)(*piVar1 + uVar11 * 4) + 0x23);
              *pcVar2 = *pcVar2 + '\x01';
              local_150 = 0x10031d94;
              (**(code **)(**(int **)(param_1 + 5) + 0x78))();
              iVar4 = *(int *)(*piVar1 + uVar11 * 4);
              local_154 = *(undefined4 *)(iVar4 + 0x1d);
              local_150 = CONCAT22(local_150._2_2_,*(undefined2 *)(iVar4 + 0x21));
              local_158 = 0x10031db8;
              (**(code **)(**(int **)(param_1 + 5) + 0x78))();
              **(int **)(*piVar1 + uVar11 * 4) = local_128 + 100;
            }
            else {
              if (*(byte *)((int)puVar3 + 0x23) != 5) {
                local_150 = 0x10031e95;
                (**(code **)(**(int **)(param_1 + 5) + 0x7c))();
                iVar4 = *(int *)(*piVar1 + uVar11 * 4);
                local_154 = *(undefined4 *)(iVar4 + 0x1d);
                local_150 = CONCAT22(local_150._2_2_,*(undefined2 *)(iVar4 + 0x21));
                local_158 = 0x10031ebd;
                (**(code **)(**(int **)(param_1 + 5) + 0x7c))();
                local_158 = 0x10031edc;
                FUN_100f9324();
                local_158 = 0x10031ee7;
                FUN_1001f3b0();
                local_158 = 1;
                uStack_15c = 8;
                puStack_160 = &stack0xfffffebc;
                FUN_1001faa0();
                local_158 = 1;
                uStack_15c = 0x20;
                puStack_160 = &stack0xfffffec4;
                FUN_1001faa0();
                local_158 = 1;
                uStack_15c = 8;
                puStack_160 = &stack0xfffffebc;
                FUN_1001faa0();
                iVar4 = *(int *)(*piVar1 + uVar11 * 4);
                local_158 = 0;
                puStack_160 = *(undefined1 **)(iVar4 + 0x1d);
                uStack_15c = CONCAT22(uStack_15c._2_2_,*(undefined2 *)(iVar4 + 0x21));
                (**(code **)(**(int **)(param_1 + 5) + 0x30))(&uStack_130,0,8,0);
                FUN_1001f3b0();
                puStack_160._0_1_ = 0x28;
                FUN_1001faa0(&puStack_160,8,1);
                local_158 = uStack_15c;
                FUN_1001faa0(&local_158,0x20,1);
                uVar12 = 0;
                puStack_160 = (undefined1 *)CONCAT31(puStack_160._1_3_,0x55);
                FUN_1001faa0(&puStack_160,8,1);
                iVar4 = *(int *)(*piVar1 + uVar11 * 4);
                FUN_100212c0(*(undefined4 *)(iVar4 + 0x1d),
                             CONCAT22(uVar12,*(undefined2 *)(iVar4 + 0x21)));
                iVar4 = *(int *)(*piVar1 + uVar11 * 4);
                (**(code **)(**(int **)(param_1 + 5) + 0x30))
                          (&stack0xfffffeb4,0,8,0,*(undefined4 *)(iVar4 + 5),
                           *(undefined2 *)(iVar4 + 9),0);
                _free(*(void **)(*(int *)(*piVar1 + uVar11 * 4) + 0x15));
                _Memory = *(void **)(*piVar1 + uVar11 * 4);
                goto LAB_1003201d;
              }
              local_150 = 0x10031e20;
              (**(code **)(**(int **)(param_1 + 5) + 0x7c))();
              iVar4 = *(int *)(*piVar1 + uVar11 * 4);
              local_154 = *(undefined4 *)(iVar4 + 0x1d);
              local_150 = CONCAT22(local_150._2_2_,*(undefined2 *)(iVar4 + 0x21));
              local_158 = 0x10031e48;
              uStack_12c = (**(code **)(**(int **)(param_1 + 5) + 0x7c))();
              uVar9 = FUN_100f9324();
              **(undefined4 **)(*piVar1 + uVar11 * 4) = uVar9;
              pcVar2 = (char *)(*(int *)(*piVar1 + uVar11 * 4) + 0x23);
              *pcVar2 = *pcVar2 + '\x01';
            }
          }
          uVar11 = uVar11 + 1;
        }
LAB_10031dc7:
        uVar8 = local_128;
        param_1 = iVar10;
      } while (uVar11 < *(uint *)(iVar10 + 0xd));
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10031cd0 */
