/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423a70
 * Name: FUN_00423a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x00423b2a) */

void __cdecl FUN_00423a70(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  short extraout_var_00;
  uint uVar6;
  undefined3 extraout_var;
  int iVar7;
  undefined1 *puVar8;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  uint uVar9;
  undefined4 extraout_EDX;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  longlong local_28;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_c;
  undefined4 local_4;
  undefined2 extraout_var_01;
  
  local_34 = FUN_0040d020();
  uVar5 = FUN_0040cbe0();
  uVar9 = CONCAT22(extraout_var_00,uVar5);
  uVar5 = FUN_0040cbe0();
  uVar6 = CONCAT22(extraout_var_01,uVar5);
  local_3c = uVar9;
  if ((int)uVar6 <= (int)uVar9) {
    local_3c = uVar6;
  }
  local_2c = (int)extraout_var_00 >> 0xf;
  local_38 = uVar6;
  local_30 = uVar9;
  local_28 = __allmul(param_2,0,uVar9,local_2c);
  param_2 = 0;
  lVar2 = local_28;
  if (uVar9 != uVar6) {
    uVar4 = FUN_0040b960();
    lVar2 = CONCAT44(extraout_EDX,extraout_ECX);
    if (CONCAT31(extraout_var,uVar4) != 0) {
      param_2 = 8;
      lVar2 = CONCAT44(extraout_EDX,extraout_ECX);
    }
  }
  lVar3 = lVar2 - CONCAT44(local_2c,uVar9);
  local_c = (uint)((ulonglong)lVar3 >> 0x20);
  while( true ) {
    if (param_2 != 0) {
      return;
    }
    uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar11 = (uint)lVar3;
    if (lVar2 <= lVar3) break;
    local_1c = (int)uVar6 >> 0x1f;
    local_40 = 0;
    local_20 = uVar6;
    uVar15 = __alldvrm(uVar11,uVar13,uVar6,local_1c);
    local_4 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar1 = (int)uVar15 + 1;
    uVar10 = (uint)*(ushort *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x16);
    local_14 = uVar9;
    if (uVar1 != DAT_004ca204 / (int)uVar10 + 1U) {
      local_18 = extraout_ECX_00;
      param_2 = FUN_004234f0(uVar1,&local_40,0);
      uVar10 = local_40;
      if ((param_2 == 0) && (param_2 = FUN_00423650(local_40), param_2 == 0)) {
        uVar15 = __allrem(uVar11,uVar13,local_30,local_2c);
        iVar7 = FUN_0040b9a0();
        puVar12 = (undefined4 *)((int)uVar15 + param_3);
        puVar14 = (undefined4 *)(iVar7 + local_18);
        for (uVar9 = local_3c >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar9 = local_3c & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        puVar8 = (undefined1 *)FUN_0040b9b0();
        *puVar8 = 0;
        uVar13 = local_c;
        uVar6 = local_20;
      }
      FUN_00427080(uVar10);
    }
    local_c = uVar13 + local_1c + (uint)CARRY4(uVar11,uVar6);
    lVar3 = CONCAT44(local_c,uVar11 + uVar6);
    uVar9 = uVar10;
    uVar6 = local_38;
    lVar2 = local_28;
  }
  return;
}


/* END FUNCTION 0x00423a70 */
