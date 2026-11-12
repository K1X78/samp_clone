/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004afe8f
 * Name: ___ld12mul
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ___ld12mul(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  int *local_2c;
  ushort *local_28;
  ushort *local_24;
  int local_20;
  int local_1c;
  short *local_18;
  byte local_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  short local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined1 uStack_a;
  byte bStack_9;
  undefined4 local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_8 = DAT_004ec7b4;
  local_20 = 0;
  local_14 = 0;
  uStack_13 = 0;
  uStack_12 = 0;
  local_10 = 0;
  uStack_e = 0;
  local_c = 0;
  uStack_a = 0;
  bStack_9 = 0;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) goto LAB_004aff3c;
    if (uVar6 == 0) {
      piVar1 = (int *)((int)piVar1 + 1);
      uVar6 = 0;
      if ((((param_1[2] & 0x7fffffffU) != 0) || (param_1[1] != 0)) || (*param_1 != 0))
      goto LAB_004aff26;
    }
    else {
LAB_004aff26:
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) {
LAB_004aff3c:
        piVar4[2] = 0;
        piVar4[1] = 0;
        *piVar4 = 0;
        return;
      }
      local_1c = 0;
      local_18 = &local_10;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_28 = (ushort *)(local_1c * 2 + (int)piVar4);
          local_24 = (ushort *)(piVar5 + 2);
          local_2c = param_2;
          do {
            iVar8 = ___addl(*(uint *)(local_18 + -2),(uint)*local_24 * (uint)*local_28,
                            (uint *)(local_18 + -2));
            if (iVar8 != 0) {
              *local_18 = *local_18 + 1;
            }
            local_28 = local_28 + 1;
            local_24 = local_24 + -1;
            local_2c = (int *)((int)local_2c + -1);
          } while (local_2c != (int *)0x0);
        }
        local_18 = local_18 + 1;
        local_1c = local_1c + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_004afff0:
        iVar8 = (int)param_1 + 0xffff;
        param_1._0_2_ = (ushort)iVar8;
        if ((short)(ushort)param_1 < 0) {
          uVar7 = -iVar8;
          uVar10 = uVar7 & 0xffff;
          param_1._0_2_ = (ushort)param_1 + (short)uVar7;
          do {
            if ((local_14 & 1) != 0) {
              local_20 = local_20 + 1;
            }
            ___shr_12((uint *)&local_14);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          if (local_20 != 0) {
            local_14 = local_14 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_9 & 0x80) != 0) break;
          ___shl_12((uint *)&local_14);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_004afff0;
      }
      if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
         (sVar2 = CONCAT11(bStack_9,uStack_a), iVar3 = CONCAT22(local_c,uStack_e),
         iVar8 = CONCAT22(local_10,uStack_12),
         (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_10,uStack_12) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_c,uStack_e) == -1) {
            if (CONCAT11(bStack_9,uStack_a) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_9,uStack_a) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_9,uStack_a);
            iVar3 = CONCAT22(local_c,uStack_e) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_10,uStack_12) + 1;
          sVar2 = CONCAT11(bStack_9,uStack_a);
          iVar3 = CONCAT22(local_c,uStack_e);
        }
      }
      local_10 = (short)((uint)iVar8 >> 0x10);
      uStack_12 = (undefined2)iVar8;
      local_c = (undefined2)((uint)iVar3 >> 0x10);
      uStack_e = (undefined2)iVar3;
      bStack_9 = (byte)((ushort)sVar2 >> 8);
      uStack_a = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_004b0099;
      *(undefined2 *)piVar4 = uStack_12;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_e,local_10);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_9,CONCAT12(uStack_a,local_c));
      uVar6 = (ushort)param_1 | uVar11;
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_004b0099:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}


/* END FUNCTION 0x004afe8f */
