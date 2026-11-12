/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10016310
 * Name: FUN_10016310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10016310(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined4 auStack_e0 [7];
  undefined4 uStack_c4;
  char *pcStack_c0;
  char *pcStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined1 local_80 [48];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1a) == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      return;
    }
    local_a4 = (undefined4 *)0x10016c2a;
    FUN_10015c60();
    local_a4 = *(undefined4 **)(param_1 + 4);
    local_a8 = (undefined4 *)0x10016c39;
    FUN_100a0050();
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  local_a4 = (undefined4 *)0x1001633a;
  DVar4 = GetTickCount();
  iVar6 = DVar4 - *(int *)(param_1 + 0x1c5);
  if ((*(char *)(param_1 + 0x1a) == '\x11') && (*(char *)(param_1 + 0x1c4) == '\x10')) {
    local_a4 = (undefined4 *)0x1001636d;
    iVar5 = FUN_100aba90();
    if (iVar5 != 0) goto LAB_100164ea;
    local_a4 = (undefined4 *)0x1001637c;
    iVar5 = FUN_10014470();
    if (iVar5 == 0) {
      local_a4 = (undefined4 *)(param_1 + 0x62);
      local_a8 = (undefined4 *)(param_1 + 0x42);
      local_ac = (undefined1 *)0x1001638f;
      FUN_10014e50();
      local_a4 = (undefined4 *)0x10016396;
      FUN_100149f0();
    }
    else {
      local_a4 = (undefined4 *)(param_1 + 0x62);
      local_a8 = (undefined4 *)(param_1 + 0x42);
      local_ac = (undefined1 *)0x100163a7;
      FUN_10014e50();
    }
    local_a4 = (undefined4 *)0x100163af;
    iVar5 = FUN_1009f210();
    if (iVar5 != 0) {
      bVar1 = *(byte *)(param_1 + 0x60);
      local_a4 = (undefined4 *)0x100163be;
      bVar2 = FUN_100ab870();
      if (bVar2 != (bVar1 & 0x3f)) {
        local_a4 = (undefined4 *)0x0;
        local_a8 = (undefined4 *)(bVar1 & 0x3f);
        local_ac = (undefined1 *)0x100163d4;
        FUN_100abc80();
        bVar1 = *(byte *)(param_1 + 0x60);
        local_a4 = (undefined4 *)0x100163df;
        bVar2 = FUN_100ab870();
        if (bVar2 != (bVar1 & 0x3f)) {
          local_a4 = (undefined4 *)0x270f;
          local_a8 = (undefined4 *)(bVar1 & 0x3f);
          local_ac = (undefined1 *)0x100163f9;
          FUN_100af390();
          local_a4 = (undefined4 *)0x0;
          local_a8 = (undefined4 *)(*(byte *)(param_1 + 0x60) & 0x3f);
          local_ac = (undefined1 *)0x1001640b;
          FUN_100abc80();
        }
      }
    }
    if (*(char *)(param_1 + 0x40) < '\0') {
      local_a4 = (undefined4 *)0x1001641f;
      cVar3 = FUN_100ab870();
      if (cVar3 != '\"') {
        local_a4 = (undefined4 *)0x1001642b;
        cVar3 = FUN_100ab870();
        if (cVar3 != '#') {
          local_a4 = (undefined4 *)0x10016437;
          cVar3 = FUN_100ab870();
          if (cVar3 != '$') goto LAB_10016452;
        }
      }
      local_a4 = (undefined4 *)0xc;
LAB_1001644a:
      local_a8 = (undefined4 *)0x10016452;
      FUN_100aba70();
    }
    else {
      local_a4 = (undefined4 *)0x10016444;
      cVar3 = FUN_100aba60();
      if (cVar3 == '\f') {
        local_a4 = (undefined4 *)0x1;
        goto LAB_1001644a;
      }
    }
LAB_10016452:
    local_a4 = *(undefined4 **)(param_1 + 0x7c);
    if ((undefined4 *)*(int *)(param_1 + 0x1c0) != local_a4) {
      if (local_a4 != (undefined4 *)0x0) {
        local_a8 = (undefined4 *)0x1001646a;
        FUN_100ae3d0();
      }
      if ((*(int *)(param_1 + 0x7c) == 0) && (*(int *)(param_1 + 0x1c0) == 0x1804067c)) {
        local_a4 = (undefined4 *)0xffffffff;
        local_a8 = (undefined4 *)0x0;
        local_ac = (undefined1 *)0x0;
        uStack_b0 = 0;
        uStack_b4 = 0;
        uStack_b8 = 0x40800000;
        pcStack_bc = "VENDING";
        pcStack_c0 = "VEND_EAT_P";
        uStack_c4 = 0x10016498;
        FUN_100ace50();
        *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
      }
      local_a4 = *(undefined4 **)(param_1 + 0x7c);
      *(undefined4 **)(param_1 + 0x1c0) = local_a4;
      *(undefined4 *)(param_1 + 0x1cd) = 0;
    }
    if ((*(int *)(param_1 + 0x1cd) == 0) && (local_a4 == (undefined4 *)0x0)) {
      local_a4 = (undefined4 *)0x100164c2;
      iVar5 = FUN_100ad640();
      if (iVar5 != 0) {
        local_a4 = (undefined4 *)0x0;
        local_a8 = (undefined4 *)0x0;
        local_ac = (undefined1 *)0x0;
        uStack_b0 = 0;
        uStack_b4 = 0;
        uStack_b8 = 0x40800000;
        pcStack_bc = "CARRY";
        pcStack_c0 = "crry_prtial";
        uStack_c4 = 0x100164e2;
        FUN_100ace50();
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
LAB_10016815:
    *(undefined1 *)(param_1 + 0x1c4) = 0;
  }
  else {
LAB_100164ea:
    if ((*(char *)(param_1 + 0x1a) == '\x13') && (*(char *)(param_1 + 0x1c4) == '\x11')) {
      local_a4 = (undefined4 *)0x10016509;
      iVar5 = FUN_100aba90();
      if (iVar5 != 0) {
        if (*(int *)(param_1 + 8) == 0) {
          return;
        }
        local_a4 = (undefined4 *)0x10016521;
        iVar5 = FUN_100b7c70();
        if (iVar5 == 0) {
          return;
        }
        local_a8 = (undefined4 *)0x10016535;
        local_a4 = (undefined4 *)(param_1 + 0x88);
        FUN_100b5040();
        local_a8 = (undefined4 *)local_80;
        uStack_b0 = 0x10016540;
        local_ac = (undefined1 *)(param_1 + 0x88);
        FUN_100b65c0();
        local_50 = *(undefined4 *)(param_1 + 0x98);
        local_4c = *(undefined4 *)(param_1 + 0x9c);
        local_48 = *(undefined4 *)(param_1 + 0xa0);
        local_a4 = (undefined4 *)0x10016567;
        iVar5 = FUN_1009ee70();
        if (iVar5 == 0x21a) {
LAB_100165a9:
          local_a4 = *(undefined4 **)(param_1 + 0xbb);
          local_a8 = (undefined4 *)(param_1 + 0xa4);
          local_ac = local_80;
          uStack_b0 = 0x100165c3;
          FUN_100153a0();
        }
        else {
          local_a4 = (undefined4 *)0x10016576;
          iVar5 = FUN_1009ee70();
          if (iVar5 == 0x219) goto LAB_100165a9;
          local_a4 = (undefined4 *)0x10016585;
          iVar5 = FUN_1009ee70();
          if (iVar5 == 0x1c1) goto LAB_100165a9;
          local_a4 = (undefined4 *)(param_1 + 0xa4);
          local_ac = local_80;
          uStack_b0 = 0x100165a0;
          local_a8 = (undefined4 *)(param_1 + 0x98);
          FUN_10015330();
          local_a4 = (undefined4 *)0x100165a7;
          FUN_10014ec0();
        }
        local_a4 = (undefined4 *)0x100165cb;
        iVar5 = FUN_1009ee70();
        if (iVar5 == 0x208) {
          local_a4 = *(undefined4 **)(param_1 + 0xbb);
          local_a8 = (undefined4 *)0x100165e1;
          FUN_100b71e0();
        }
        local_a4 = (undefined4 *)0x100165e9;
        iVar5 = FUN_100b6ed0();
        if (iVar5 == 2) {
LAB_100165fb:
          local_a4 = *(undefined4 **)(param_1 + 0xbb);
          local_a8 = (undefined4 *)0x1001660a;
          FUN_100b7e10();
        }
        else {
          local_a4 = (undefined4 *)0x100165f6;
          iVar5 = FUN_100b6ed0();
          if (iVar5 == 6) goto LAB_100165fb;
        }
        local_a4 = (undefined4 *)(uint)*(byte *)(param_1 + 0xb7);
        local_a8 = (undefined4 *)0x1001661a;
        FUN_100b7080();
        local_a4 = (undefined4 *)(uint)*(byte *)(param_1 + 0xb8);
        local_a8 = (undefined4 *)0x1001662a;
        FUN_100b70e0();
        local_a4 = *(undefined4 **)(param_1 + 0xb0);
        local_a8 = (undefined4 *)0x10016639;
        FUN_100b6e00();
        if ((*(ushort *)(param_1 + 0xb9) == 0) || (1999 < *(ushort *)(param_1 + 0xb9))) {
          local_a4 = (undefined4 *)0x10016653;
          iVar5 = FUN_100b77d0();
          if (iVar5 != 0) {
            local_a4 = (undefined4 *)0x1001665f;
            FUN_100b7770();
            local_a4 = (undefined4 *)0x0;
            local_a8 = (undefined4 *)0x10016668;
            FUN_100b77c0();
          }
        }
        bVar1 = *(byte *)(param_1 + 0xb6);
        local_a4 = (undefined4 *)0x10016676;
        bVar2 = FUN_100ab870();
        if (bVar2 != (bVar1 & 0x3f)) {
          local_a4 = (undefined4 *)0x0;
          local_a8 = (undefined4 *)(bVar1 & 0x3f);
          local_ac = (undefined1 *)0x1001668c;
          FUN_100abc80();
          bVar1 = *(byte *)(param_1 + 0xb6);
          local_a4 = (undefined4 *)0x1001669a;
          bVar2 = FUN_100ab870();
          if (bVar2 != (bVar1 & 0x3f)) {
            local_a4 = (undefined4 *)0x270f;
            local_a8 = (undefined4 *)(bVar1 & 0x3f);
            local_ac = (undefined1 *)0x100166b4;
            FUN_100af390();
            local_a4 = (undefined4 *)0x0;
            local_a8 = (undefined4 *)(*(byte *)(param_1 + 0xb6) & 0x3f);
            local_ac = (undefined1 *)0x100166c9;
            FUN_100abc80();
          }
        }
        goto LAB_10016815;
      }
    }
    if ((*(char *)(param_1 + 0x1a) == '\x12') && (*(char *)(param_1 + 0x1c4) == '\x12')) {
      local_a4 = (undefined4 *)0x100166f1;
      iVar5 = FUN_100aba90();
      if (iVar5 != 0) {
        if (*(int *)(param_1 + 8) == 0) {
          return;
        }
        local_a4 = (undefined4 *)0x10016709;
        iVar5 = FUN_100b7c70();
        if (iVar5 == 0) {
          return;
        }
        local_a4 = (undefined4 *)0x10016719;
        iVar5 = FUN_1009f210();
        if (iVar5 != 0) {
          bVar1 = *(byte *)(param_1 + 0x27);
          local_a4 = (undefined4 *)0x10016728;
          bVar2 = FUN_100ab870();
          if (bVar2 != (bVar1 & 0x3f)) {
            local_a4 = (undefined4 *)0x0;
            local_a8 = (undefined4 *)(bVar1 & 0x3f);
            local_ac = (undefined1 *)0x1001673e;
            FUN_100abc80();
            bVar1 = *(byte *)(param_1 + 0x27);
            local_a4 = (undefined4 *)0x10016749;
            bVar2 = FUN_100ab870();
            if (bVar2 != (bVar1 & 0x3f)) {
              local_a4 = (undefined4 *)0x270f;
              local_a8 = (undefined4 *)(bVar1 & 0x3f);
              local_ac = (undefined1 *)0x10016763;
              FUN_100af390();
              local_a4 = (undefined4 *)0x0;
              local_a8 = (undefined4 *)(*(byte *)(param_1 + 0x27) & 0x3f);
              local_ac = (undefined1 *)0x10016775;
              FUN_100abc80();
            }
          }
        }
        local_a4 = (undefined4 *)0x1001677d;
        cVar3 = FUN_100aba60();
        if (cVar3 == '2') {
          if ((*(byte *)(param_1 + 0x26) & 0x40) != 0) {
            local_a4 = (undefined4 *)0x10016792;
            iVar5 = FUN_100acc50();
            if (iVar5 == 0) {
              local_a4 = (undefined4 *)0x1001679e;
              iVar5 = FUN_1009f210();
              if (iVar5 != 0) {
                local_a4 = (undefined4 *)0x100167aa;
                iVar5 = FUN_100acbb0();
                if (iVar5 != 0) {
                  *(undefined4 *)(param_1 + 0x20) = 1;
                }
              }
            }
            if ((*(byte *)(param_1 + 0x26) & 0x40) != 0) goto LAB_100167dd;
          }
          local_a4 = (undefined4 *)0x100167c2;
          iVar5 = FUN_100acc50();
          if (iVar5 != 0) {
            local_a4 = (undefined4 *)0x100167ce;
            iVar5 = FUN_1009f210();
            if (iVar5 != 0) {
              local_a4 = (undefined4 *)0x100167da;
              FUN_100acca0();
              *(undefined4 *)(param_1 + 0x20) = 0;
            }
          }
        }
LAB_100167dd:
        if ((*(byte *)(param_1 + 0x26) & 0x80) == 0) {
LAB_100167fb:
          local_a4 = (undefined4 *)0x10016803;
          iVar5 = FUN_100acb10();
          if (iVar5 == 0) goto LAB_10016815;
          local_a4 = (undefined4 *)0x0;
        }
        else {
          local_a4 = (undefined4 *)0x100167ee;
          iVar5 = FUN_100acb10();
          if (iVar5 != 0) {
            if ((*(byte *)(param_1 + 0x26) & 0x80) != 0) goto LAB_10016815;
            goto LAB_100167fb;
          }
          local_a4 = (undefined4 *)0x1;
        }
        local_a8 = (undefined4 *)0x10016810;
        FUN_100acb20();
        goto LAB_10016815;
      }
    }
  }
  if (*(char *)(param_1 + 0x1a) == '\x11') {
    local_a4 = (undefined4 *)0x1001682e;
    iVar5 = FUN_100aba90();
    if (iVar5 == 0) {
      local_a4 = (undefined4 *)0x1001683d;
      FUN_10014d80();
      local_a4 = (undefined4 *)0x10016844;
      FUN_10014240();
      local_a4 = (undefined4 *)0x1001684b;
      FUN_10014780();
      local_a4 = (undefined4 *)(uint)*(ushort *)(param_1 + 0x3e);
      local_a8 = (undefined4 *)(uint)*(ushort *)(param_1 + 0x3c);
      local_ac = (undefined1 *)(uint)*(ushort *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x20) = 0;
      uStack_b0 = 0x1001686b;
      FUN_100aef40();
      local_a4 = (undefined4 *)0x10016872;
      iVar5 = FUN_10014470();
      if (iVar5 == 0) {
        if (*(char *)(param_1 + 0x18) == '\x03') {
          local_a4 = (undefined4 *)0x0;
          local_a8 = (undefined4 *)0x10016899;
          FUN_1009f4c0();
          local_a4 = (undefined4 *)0x0;
        }
        else {
          local_a4 = (undefined4 *)0x1;
          local_a8 = (undefined4 *)0x100168a3;
          FUN_1009f4c0();
          local_a4 = (undefined4 *)0x1;
        }
LAB_100168a5:
        local_a8 = (undefined4 *)0x100168ad;
        FUN_1009f470();
      }
      else if (*(ushort *)(param_1 + 0x7a) < 2000) {
        local_a4 = (undefined4 *)0x0;
        local_a8 = (undefined4 *)0x10016887;
        FUN_1009f4c0();
        local_a4 = (undefined4 *)0x0;
        goto LAB_100168a5;
      }
      if (((*(float *)(param_1 + 0x62) == 0.0) && (*(float *)(param_1 + 0x66) == 0.0)) &&
         (*(float *)(param_1 + 0x6a) == 0.0)) {
        local_ac = *(undefined1 **)(param_1 + 0x62);
        local_a8 = *(undefined4 **)(param_1 + 0x66);
        local_a4 = *(undefined4 **)(param_1 + 0x6a);
        uStack_b0 = 0x10016901;
        FUN_1009eb50();
        if (*(int *)(param_1 + 0x1d1) != 2) {
          bVar9 = SBORROW4(iVar6,3000);
          iVar5 = -3000;
LAB_1001691f:
          if (bVar9 == iVar6 + iVar5 < 0) {
            *(undefined4 *)(param_1 + 0x1d1) = 2;
          }
        }
      }
      else if (*(int *)(param_1 + 0x1d1) != 2) {
        bVar9 = SBORROW4(iVar6,0x5dc);
        iVar5 = -0x5dc;
        goto LAB_1001691f;
      }
      local_a4 = (undefined4 *)0x1001692d;
      DVar4 = GetTickCount();
      if (3000 < DVar4 - *(int *)(param_1 + 0x1c5)) {
        *(undefined2 *)(param_1 + 0x3c) = 0;
        *(undefined2 *)(param_1 + 0x3e) = 0;
        local_ac = (undefined1 *)0x0;
        local_a8 = (undefined4 *)0x0;
        local_a4 = (undefined4 *)0x0;
        uStack_b0 = 0x10016981;
        FUN_1009eb50();
        local_a4 = local_40;
        local_a8 = (undefined4 *)0x1001698e;
        FUN_1009e950();
        local_c = *(undefined4 *)(param_1 + 0x46);
        local_10 = *(undefined4 *)(param_1 + 0x42);
        local_8 = *(undefined4 *)(param_1 + 0x4a);
        puVar7 = local_40;
        puVar8 = auStack_e0;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_1009ea00();
      }
      goto LAB_10016beb;
    }
  }
  if (*(char *)(param_1 + 0x1a) == '\x13') {
    local_a4 = (undefined4 *)0x100169e9;
    iVar5 = FUN_100aba90();
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 8) != 0) {
        local_a4 = (undefined4 *)0x100169fd;
        iVar5 = FUN_1009ee70();
        if (iVar5 != 0x21a) {
          local_a4 = (undefined4 *)0x10016a0c;
          iVar5 = FUN_1009ee70();
          if (iVar5 != 0x219) {
            local_a4 = (undefined4 *)0x10016a1b;
            iVar5 = FUN_1009ee70();
            if (iVar5 != 0x1c1) {
              local_a4 = (undefined4 *)0x10016a29;
              FUN_100151c0();
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      local_a4 = (undefined4 *)0x10016a34;
      FUN_100ad000();
      if (*(int *)(param_1 + 8) != 0) {
        local_a4 = (undefined4 *)0x10016a40;
        iVar5 = FUN_100b7940();
        if (iVar5 != 0) {
          local_a4 = (undefined4 *)0x10016a4c;
          (**(code **)(**(int **)(param_1 + 4) + 8))();
        }
      }
      if ((((*(int *)(param_1 + 0x1c) != 0) && (*(float *)(param_1 + 0xa4) == 0.0)) &&
          (*(float *)(param_1 + 0xa8) == 0.0)) &&
         ((*(float *)(param_1 + 0xac) == 0.0 && (*(int *)(param_1 + 8) != 0)))) {
        local_ac = *(undefined1 **)(param_1 + 0xa4);
        local_a8 = *(undefined4 **)(param_1 + 0xa8);
        local_a4 = *(undefined4 **)(param_1 + 0xac);
        uStack_b0 = 0x10016abb;
        FUN_1009eb50();
      }
      local_a4 = (undefined4 *)(uint)*(ushort *)(param_1 + 0x84);
      local_a8 = (undefined4 *)(uint)*(ushort *)(param_1 + 0x82);
      local_ac = (undefined1 *)(uint)*(ushort *)(param_1 + 0x86);
      uStack_b0 = 0x10016ae1;
      FUN_100aef40();
      local_a4 = (undefined4 *)0x10016ae9;
      FUN_100ade70();
      if (((*(float *)(param_1 + 0xa4) == 0.0) && (*(float *)(param_1 + 0xa8) == 0.0)) &&
         (*(float *)(param_1 + 0xac) == 0.0)) {
        if (*(int *)(param_1 + 0x1d1) != 2) {
          bVar10 = SBORROW4(iVar6,3000);
          iVar5 = -3000;
          bVar9 = iVar6 == 3000;
LAB_10016b46:
          if (!bVar9 && bVar10 == iVar6 + iVar5 < 0) {
            *(undefined4 *)(param_1 + 0x1d1) = 2;
          }
        }
      }
      else if (*(int *)(param_1 + 0x1d1) != 2) {
        bVar10 = SBORROW4(iVar6,0x5dc);
        iVar5 = -0x5dc;
        bVar9 = iVar6 == 0x5dc;
        goto LAB_10016b46;
      }
      local_a4 = (undefined4 *)0x10016b55;
      FUN_10014240();
      goto LAB_10016beb;
    }
  }
  if (*(char *)(param_1 + 0x1a) == '\x12') {
    local_a4 = (undefined4 *)0x10016b68;
    iVar5 = FUN_100aba90();
    if (iVar5 != 0) {
      local_a4 = (undefined4 *)0x10016b74;
      FUN_100ad000();
      local_ac = (undefined1 *)(uint)*(ushort *)(param_1 + 0x2e);
      local_a4 = (undefined4 *)0x0;
      local_a8 = (undefined4 *)0x0;
      uStack_b0 = 0x10016b85;
      FUN_100aef40();
      if ((*(int *)(param_1 + 0x1d1) != 2) && (2999 < iVar6)) {
        *(undefined4 *)(param_1 + 0x1d1) = 2;
      }
      local_a4 = (undefined4 *)0x10016ba2;
      FUN_10014240();
      goto LAB_10016beb;
    }
  }
  local_ac = (undefined1 *)0x0;
  local_a8 = (undefined4 *)0x0;
  local_a4 = (undefined4 *)0x0;
  uStack_b0 = 0x10016bdd;
  FUN_1009eb50();
  local_a4 = (undefined4 *)0x0;
  local_a8 = (undefined4 *)0x0;
  local_ac = (undefined1 *)0x0;
  uStack_b0 = 0x10016be8;
  FUN_100aef40();
  *(undefined4 *)(param_1 + 0x20) = 0;
LAB_10016beb:
  if (*(char *)(param_1 + 0x1a) != ' ') {
    local_a4 = (undefined4 *)0x447a0000;
    local_a8 = (undefined4 *)0x10016bfe;
    FUN_100ab990();
  }
  if ((*(int *)(param_1 + 0x1d1) == 2) && (iVar6 < 0x5dc)) {
    *(undefined4 *)(param_1 + 0x1d1) = 0;
    return;
  }
  return;
}


/* END FUNCTION 0x10016310 */
