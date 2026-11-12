/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f999e
 * Name: strtoxl
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint strtoxl(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  uint local_8;
  
  p_Var2 = __getptd();
  ptVar3 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (ptVar3 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar3 = ___updatetlocinfo();
  }
  local_8 = 0;
  bVar8 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    pbVar9 = pbVar1 + 1;
    if ((int)ptVar3->lc_category[1].refcount < 2) {
      uVar4 = *(byte *)((int)ptVar3->lc_category[3].refcount + (uint)bVar8 * 2) & 8;
    }
    else {
      uVar4 = ___isctype_mt(ptVar3,(uint)bVar8,8);
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar1 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100f9a05:
    bVar8 = *pbVar9;
    pbVar9 = pbVar1 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_100f9a05;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar8 != 0x30) {
      param_3 = 10;
      goto LAB_100f9a68;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_3 = 8;
      goto LAB_100f9a68;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar8 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_100f9a68:
  uVar4 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if ((*(ushort *)(PTR_DAT_10155f00 + (uint)bVar8 * 2) & 4) == 0) {
      if ((*(ushort *)(PTR_DAT_10155f00 + (uint)bVar8 * 2) & 0x103) == 0) {
LAB_100f9ad4:
        pbVar9 = pbVar9 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pbVar9 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_8)))))))) {
          puVar5 = (undefined4 *)FUN_100fdc77();
          *puVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            local_8 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pbVar9;
        }
        if ((param_4 & 2) == 0) {
          return local_8;
        }
        return -local_8;
      }
      if (((char)bVar8 < 'a') || ('z' < (char)bVar8)) {
        iVar7 = (int)(char)bVar8;
      }
      else {
        iVar7 = (char)bVar8 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if (param_3 <= uVar6) goto LAB_100f9ad4;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_8 = local_8 * param_3 + uVar6;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


/* END FUNCTION 0x100f999e */
