/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004afa5a
 * Name: _I10_OUTPUT
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl
_I10_OUTPUT(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  short *local_34;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  local_8 = DAT_004ec7b4;
  uVar3 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar3 == 0) && (param_2 == 0)) && (param_1 == 0)) {
LAB_004afbd0:
    *(undefined1 *)(param_6 + 2) = 0x30;
LAB_004afcd3:
    *param_6 = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
  else {
    if ((short)uVar3 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_004afb46;
          pcVar8 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_004afb46:
            pcVar8 = "1#QNAN";
            goto LAB_004afb4b;
          }
          pcVar8 = "1#IND";
        }
        FUN_004a68f0((uint *)(param_6 + 2),(uint *)pcVar8);
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
      else {
        pcVar8 = "1#SNAN";
LAB_004afb4b:
        FUN_004a68f0((uint *)(param_6 + 2),(uint *)pcVar8);
        *(undefined1 *)((int)param_6 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    sVar6 = (short)(((uVar3 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar3 * 0x4d10 >>
                   0x10);
    local_a = (undefined1)uVar3;
    cStack_9 = (char)(uVar3 >> 8);
    local_12 = param_1;
    local_e = param_2;
    ___multtenpow12((int *)&local_14,-(int)sVar6,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar6 = sVar6 + 1;
      ___ld12mul((int *)&local_14,(int *)&local_20);
    }
    *param_6 = sVar6;
    if (((param_5 & 1) != 0) && (param_4 = param_4 + sVar6, param_4 < 1)) goto LAB_004afbd0;
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar7 = CONCAT11(cStack_9,local_a) - 0x3ffe;
    local_a = 0;
    cStack_9 = '\0';
    param_3 = 8;
    do {
      ___shl_12((uint *)&local_14);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    if (iVar7 < 0) {
      for (uVar3 = -iVar7 & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
        ___shr_12((uint *)&local_14);
      }
    }
    param_3 = param_4 + 1;
    psVar4 = param_6 + 2;
    local_34 = psVar4;
    iVar7 = local_12;
    uVar3 = local_e;
    if (0 < (int)param_3) {
      do {
        local_e._2_2_ = (undefined2)(uVar3 >> 0x10);
        local_e._0_2_ = (undefined2)uVar3;
        local_12._2_2_ = (undefined2)((uint)iVar7 >> 0x10);
        local_12._0_2_ = (undefined2)iVar7;
        local_2c = CONCAT22((undefined2)local_12,local_14);
        uStack_28 = CONCAT22((undefined2)local_e,local_12._2_2_);
        uStack_24 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
        local_12 = iVar7;
        local_e = uVar3;
        ___shl_12((uint *)&local_14);
        ___shl_12((uint *)&local_14);
        ___add_12((uint *)&local_14,&local_2c);
        ___shl_12((uint *)&local_14);
        psVar4 = (short *)((int)local_34 + 1);
        param_3 = param_3 - 1;
        *(char *)local_34 = cStack_9 + '0';
        cStack_9 = '\0';
        local_34 = psVar4;
        iVar7 = local_12;
        uVar3 = local_e;
      } while (param_3 != 0);
    }
    psVar5 = psVar4 + -1;
    psVar1 = param_6 + 2;
    if (*(char *)((int)psVar4 + -1) < '5') {
      for (; (psVar1 <= psVar5 && ((char)*psVar5 == '0')); psVar5 = (short *)((int)psVar5 + -1)) {
      }
      if (psVar5 < psVar1) {
        *(char *)psVar1 = '0';
        goto LAB_004afcd3;
      }
    }
    else {
      for (; (psVar1 <= psVar5 && ((char)*psVar5 == '9')); psVar5 = (short *)((int)psVar5 + -1)) {
        *(char *)psVar5 = '0';
      }
      if (psVar5 < psVar1) {
        psVar5 = (short *)((int)psVar5 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar5 = (char)*psVar5 + '\x01';
    }
    cVar2 = ((char)psVar5 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar2;
    *(undefined1 *)(cVar2 + 4 + (int)param_6) = 0;
  }
  return 1;
}


/* END FUNCTION 0x004afa5a */
