/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100febe4
 * Name: strtoxq
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100fed2c) */
/* WARNING: Removing unreachable block (ram,0x100fedbd) */

ulonglong strtoxq(byte *param_1,int *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  _ptiddata p_Var3;
  pthreadlocinfo ptVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint extraout_ECX;
  ulonglong uVar8;
  longlong lVar9;
  int local_14;
  int local_10;
  byte *local_c;
  byte local_5;
  
  p_Var3 = __getptd();
  ptVar4 = (pthreadlocinfo)p_Var3->_tfpecode;
  if (ptVar4 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar4 = ___updatetlocinfo();
  }
  uVar2 = 0;
  local_5 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_c = pbVar1 + 1;
    if ((int)ptVar4->lc_category[1].refcount < 2) {
      uVar5 = *(byte *)((int)ptVar4->lc_category[3].refcount + (uint)local_5 * 2) & 8;
    }
    else {
      uVar5 = ___isctype_mt(ptVar4,(uint)local_5,8);
    }
    if (uVar5 == 0) break;
    local_5 = *local_c;
    pbVar1 = local_c;
  }
  if (local_5 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100fec59:
    local_5 = *local_c;
    local_c = pbVar1 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_100fec59;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (local_5 != 0x30) {
      param_3 = 10;
      goto LAB_100fecca;
    }
    if ((*local_c != 0x78) && (*local_c != 0x58)) {
      param_3 = 8;
      goto LAB_100fecca;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (local_5 == 0x30)) && ((*local_c == 0x78 || (*local_c == 0x58)))) {
    local_5 = local_c[1];
    local_c = local_c + 2;
  }
LAB_100fecca:
  uVar8 = __aulldvrm(0xffffffff,0xffffffff,param_3,(int)param_3 >> 0x1f);
  do {
    iVar6 = _isdigit((uint)local_5);
    if (iVar6 == 0) {
      iVar6 = _isalpha((uint)local_5);
      if (iVar6 == 0) {
LAB_100fed80:
        local_c = local_c + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_c = param_1;
          }
          uVar2 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x8000000000000000 < uVar2)) ||
                  (((param_4 & 2) == 0 &&
                   ((0x7ffffffeffffffff < uVar2 && (0x7fffffffffffffff < uVar2)))))))))) {
          puVar7 = (undefined4 *)FUN_100fdc77();
          *puVar7 = 0x22;
          if ((param_4 & 1) == 0) {
            if ((param_4 & 2) == 0) {
              uVar2 = 0x7fffffffffffffff;
            }
            else {
              uVar2 = 0x8000000000000000;
            }
          }
          else {
            uVar2 = 0xffffffffffffffff;
          }
        }
        local_10 = (int)(uVar2 >> 0x20);
        local_14 = (int)uVar2;
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_c;
        }
        if ((param_4 & 2) == 0) {
          return uVar2;
        }
        return CONCAT44(-(local_10 + (uint)(local_14 != 0)),-local_14);
      }
      iVar6 = _toupper((int)(char)local_5);
      uVar5 = iVar6 - 0x37;
    }
    else {
      uVar5 = (int)(char)local_5 - 0x30;
    }
    if (param_3 <= uVar5) goto LAB_100fed80;
    if ((uVar2 < uVar8) ||
       ((uVar8 == uVar2 && ((param_1 != (byte *)0x0 || (uVar5 <= extraout_ECX)))))) {
      lVar9 = __allmul(param_3,(int)param_3 >> 0x1f,uVar2);
      uVar2 = lVar9 + (ulonglong)uVar5;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
}


/* END FUNCTION 0x100febe4 */
