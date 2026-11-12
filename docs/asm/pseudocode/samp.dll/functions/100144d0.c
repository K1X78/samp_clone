/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100144d0
 * Name: FUN_100144d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100144d0(int param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_f0 [12];
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  undefined1 *puStack_b8;
  float *pfStack_b4;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined4 local_80 [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40 [64];
  
  if ((((*(char *)(param_1 + 0x1a) == '\x11') && (uVar2 = *(ushort *)(param_1 + 0x7a), uVar2 != 0))
      && (uVar2 != 0xffff)) && (uVar2 < 0x1004)) {
    iVar3 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
    iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
    if (uVar2 < 2000) {
      if (*(int *)(iVar3 + 0x3074 + (uint)uVar2 * 4) == 0) {
        return;
      }
      iVar3 = *(int *)(iVar3 + 0x1134 + (uint)uVar2 * 4);
    }
    else {
      uVar2 = uVar2 - 2000;
      if (0x834 < uVar2) {
        return;
      }
      if (*(int *)(iVar1 + 4 + (uint)uVar2 * 4) == 0) {
        return;
      }
      iVar3 = *(int *)(iVar1 + 0x20d4 + (uint)uVar2 * 4);
    }
    if (((((iVar3 != 0) && (*(float *)(param_1 + 0x6e) <= 100.0)) &&
         ((-100.0 <= *(float *)(param_1 + 0x6e) &&
          ((*(float *)(param_1 + 0x72) <= 100.0 && (-100.0 <= *(float *)(param_1 + 0x72))))))) &&
        (*(float *)(param_1 + 0x76) <= 100.0)) && (-100.0 <= *(float *)(param_1 + 0x76))) {
      pfStack_b4 = (float *)local_40;
      puStack_b8 = (undefined1 *)0x100145e8;
      FUN_1009e950();
      pfStack_b4 = (float *)local_8c;
      puStack_b8 = (undefined1 *)0x100145f4;
      FUN_1009eb20();
      pfStack_b4 = (float *)local_98;
      puStack_b8 = (undefined1 *)0x10014600;
      FUN_1009ec70();
      pfStack_b4 = (float *)local_80;
      puStack_b8 = (undefined1 *)0x1001460d;
      FUN_1009e950();
      puStack_b8 = local_40;
      puStack_bc = &local_a4;
      uStack_c0 = 0x1001461d;
      pfStack_b4 = (float *)(param_1 + 0x6e);
      FUN_100b4850();
      local_48 = local_9c;
      local_50 = local_a4;
      local_4c = local_a0;
      puVar4 = local_80;
      puVar5 = auStack_f0;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_1009fb40();
    }
  }
  return;
}


/* END FUNCTION 0x100144d0 */
