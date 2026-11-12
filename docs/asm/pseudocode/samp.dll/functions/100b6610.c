/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6610
 * Name: FUN_100b6610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b6610(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 *_Memory;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  byte local_12e;
  byte local_12d;
  int local_12c;
  uint local_128;
  uint *local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_10c;
  uint *local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8 [5];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  short local_d4;
  byte local_d2;
  byte local_d1;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  byte local_cd;
  byte local_cc;
  byte local_cb;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0 [4];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c;
  char local_88 [68];
  char local_44 [68];
  
  _Memory = operator_new(0x17);
  if (_Memory == (undefined4 *)0x0) {
    _Memory = (undefined4 *)0x0;
  }
  else {
    *_Memory = param_1;
    _Memory[2] = param_2;
    _Memory[1] = 0;
    *(undefined1 *)(_Memory + 3) = 0;
    *(undefined1 *)((int)_Memory + 0xd) = 0;
    *(undefined1 *)((int)_Memory + 0x16) = 0;
    *(undefined4 *)((int)_Memory + 0x12) = 0;
    *(undefined4 *)((int)_Memory + 0xe) = 0;
  }
  uVar7 = 0;
  local_128 = 0;
  FUN_100bc1d0(&local_128,4);
  if ((local_128 == 0) || (uVar8 = local_128, 0x80 < local_128)) {
    if (_Memory != (undefined4 *)0x0) {
      if ((*(char *)((int)_Memory + 0xd) != '\0') && ((void *)*_Memory != (void *)0x0)) {
        _free((void *)*_Memory);
        *_Memory = 0;
      }
      _free(_Memory);
      return;
    }
  }
  else {
    do {
      if (*(char *)(_Memory + 3) != '\0') break;
      FUN_100bc1d0(&local_104,0xc);
      local_128 = 0;
      FUN_100bc1d0(&local_128,4);
      local_124 = (uint *)0x0;
      FUN_100bc1d0(&local_124,4);
      if (local_128 == 0) {
        if (local_124 != (uint *)0x50) {
          bVar10 = local_124 == (uint *)0x4c;
LAB_100b66db:
          if (!bVar10) goto LAB_100b66de;
        }
        uVar7 = uVar7 + 1;
      }
      else if (local_128 == 10) {
        bVar10 = local_124 == (uint *)0x28;
        goto LAB_100b66db;
      }
LAB_100b66de:
      if ((uint)(_Memory[1] + (int)local_124) < (uint)_Memory[2]) {
        _Memory[1] = _Memory[1] + (int)local_124;
      }
      else {
        _Memory[1] = _Memory[2];
        *(undefined1 *)(_Memory + 3) = 1;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (uVar7 != 0) {
      local_128 = uVar7;
      puVar3 = _calloc(1,uVar7 * 0x40 + 4);
      *puVar3 = uVar7;
      local_120 = 0;
      _Memory[1] = 0;
      *(undefined1 *)(_Memory + 3) = 0;
      local_11c = 0;
      local_108 = puVar3;
      FUN_100bc1d0(&local_11c,4);
      local_124 = puVar3 + 1;
      do {
        if (*(char *)(_Memory + 3) != '\0') break;
        FUN_100bc1d0(&local_104,0xc);
        local_10c = 0;
        FUN_100bc1d0(&local_10c,4);
        local_12c = 0;
        FUN_100bc1d0(&local_12c,4);
        iVar6 = local_12c;
        if (local_10c == 0) {
          if ((local_12c != 0x50) && (local_12c != 0x4c)) goto LAB_100b6b2d;
          puVar3 = local_f8;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          local_f8[0] = local_104;
          local_f8[1] = local_100;
          local_f8[2] = local_fc;
          local_f8[3] = 0;
          local_12c = 0;
          FUN_100bc1d0(&local_12c,4);
          local_f8[4] = local_12c;
          local_110 = 0;
          FUN_100bc1d0(&local_110,4);
          local_e4 = local_110;
          local_118 = 0;
          FUN_100bc1d0(&local_118,4);
          local_e0 = local_118;
          local_114 = 0;
          FUN_100bc1d0(&local_114,4);
          local_dc = local_114;
          local_11c = 0;
          FUN_100bc1d0(&local_11c,4);
          local_d8 = local_11c;
          local_12d = 0;
          FUN_100bc1d0(&local_12d,1);
          local_d2 = local_12d;
          local_12d = 0;
          FUN_100bc1d0(&local_12d,1);
          local_d1 = local_12d;
          local_12d = 0;
          FUN_100bc1d0(&local_12d,1);
          local_d0 = local_12d;
          local_12d = 0;
          FUN_100bc1d0(&local_12d,1);
          local_cf = local_12d;
          local_12e = 0;
          FUN_100bc1d0(&local_12e,1);
          pcVar4 = local_88;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + 4;
          }
          *pcVar4 = '\0';
          pcVar4 = local_44;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + 4;
          }
          *pcVar4 = '\0';
          FUN_100bc1d0(local_88,0x18);
          FUN_100bc1d0(local_44,0x18);
          local_12d = 0;
          FUN_100bc1d0(&local_12d,1);
          local_ce = local_12d;
          local_12d = 0;
          FUN_100bc1d0(&local_12d,1);
          bVar2 = local_12e;
          local_12e = 0;
          local_d4 = (ushort)local_12d * 0x100 + (ushort)bVar2;
          if (iVar6 == 0x50) {
            FUN_100bc1d0(&local_12e,1);
            local_cd = local_12e;
            local_12e = 0;
            FUN_100bc1d0(&local_12e,1);
            local_cc = local_12e;
            local_12e = 0;
            FUN_100bc1d0(&local_12e,1);
            local_cb = local_12e;
            local_12e = 0;
            FUN_100bc1d0(&local_12e,1);
          }
          else {
            local_cd = 0;
            local_cc = 0;
            local_cb = 100;
          }
          local_12e = 0;
          FUN_100bc1d0(&local_12e,1);
          pcVar4 = local_88;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          local_12c = (int)pcVar4 - (int)(local_88 + 1);
          if (local_12c != 0) {
            local_c8 = FUN_100b2860("particle",local_88);
          }
          pcVar4 = local_44;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          local_12c = (int)pcVar4 - (int)(local_44 + 1);
          if (local_12c != 0) {
            local_c4 = FUN_100b2860("particle",local_44);
          }
          puVar3 = local_f8;
          puVar9 = local_124;
          for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar9 = puVar9 + 1;
          }
LAB_100b6a5b:
          local_120 = local_120 + 1;
          local_124 = local_124 + 0x10;
          puVar3 = local_108;
        }
        else {
          if ((local_10c == 10) && (local_12c == 0x28)) {
            puVar3 = local_c0;
            for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            }
            *(undefined1 *)puVar3 = 0;
            local_c0[0] = local_104;
            local_c0[1] = local_100;
            local_c0[2] = local_fc;
            local_c0[3] = 10;
            FUN_100bc1d0(local_b0,0xc);
            FUN_100bc1d0(local_a4,0xc);
            FUN_100bc1d0(local_98,0xc);
            local_12c = 0;
            FUN_100bc1d0(&local_12c,4);
            local_8c = (undefined1)local_12c;
            puVar3 = local_c0;
            puVar9 = local_124;
            for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar9 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar9 = puVar9 + 1;
            }
            *(char *)puVar9 = (char)*puVar3;
            goto LAB_100b6a5b;
          }
LAB_100b6b2d:
          if ((uint)(_Memory[1] + local_12c) < (uint)_Memory[2]) {
            _Memory[1] = _Memory[1] + local_12c;
          }
          else {
            _Memory[1] = _Memory[2];
            *(undefined1 *)(_Memory + 3) = 1;
          }
        }
      } while (local_120 != local_128);
      if (local_120 == 0) {
        _free(puVar3);
      }
      else {
        *puVar3 = local_120;
        *(uint **)(param_3 + 0x78) = puVar3;
      }
      if ((*(char *)((int)_Memory + 0xd) != '\0') && ((void *)*_Memory != (void *)0x0)) {
        _free((void *)*_Memory);
        *_Memory = 0;
      }
      _free(_Memory);
    }
  }
  return;
}


/* END FUNCTION 0x100b6610 */
