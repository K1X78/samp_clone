/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fcc4b
 * Name: wcstoxl
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint wcstoxl(ushort *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  ushort uVar10;
  uint local_8;
  
  p_Var2 = __getptd();
  ptVar3 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (ptVar3 != (pthreadlocinfo)PTR_DAT_10155d74) {
    ptVar3 = ___updatetlocinfo();
  }
  local_8 = 0;
  uVar10 = *param_1;
  puVar1 = param_1;
  while( true ) {
    uVar7 = (uint)uVar10;
    puVar9 = puVar1 + 1;
    iVar4 = ___iswctype_mt(ptVar3,uVar7,8);
    if (iVar4 == 0) break;
    uVar10 = *puVar9;
    puVar1 = puVar9;
  }
  if (uVar10 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100fcca4:
    uVar7 = (uint)*puVar9;
    puVar9 = puVar1 + 2;
  }
  else if (uVar10 == 0x2b) goto LAB_100fcca4;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    iVar4 = __wchartodigit(uVar7);
    if (iVar4 != 0) {
      param_3 = 10;
      goto LAB_100fcd24;
    }
    if ((*puVar9 != 0x78) && (*puVar9 != 0x58)) {
      param_3 = 8;
      goto LAB_100fcd24;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (iVar4 = __wchartodigit(uVar7), iVar4 == 0)) &&
     ((*puVar9 == 0x78 || (*puVar9 == 0x58)))) {
    uVar7 = (uint)puVar9[1];
    puVar9 = puVar9 + 2;
  }
LAB_100fcd24:
  uVar5 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    uVar6 = __wchartodigit(uVar7);
    if (uVar6 == 0xffffffff) {
      uVar10 = (ushort)uVar7;
      if (((uVar10 < 0x41) || (0x5a < uVar10)) && ((uVar10 < 0x61 || (0x7a < uVar10)))) {
LAB_100fcd9d:
        puVar9 = puVar9 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            puVar9 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_8)))))))) {
          puVar8 = (undefined4 *)FUN_100fdc77();
          *puVar8 = 0x22;
          if ((param_4 & 1) == 0) {
            local_8 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = puVar9;
        }
        if ((param_4 & 2) == 0) {
          return local_8;
        }
        return -local_8;
      }
      if ((0x60 < uVar10) && (uVar10 < 0x7b)) {
        uVar7 = uVar7 - 0x20;
      }
      uVar6 = uVar7 - 0x37;
    }
    if (param_3 <= uVar6) goto LAB_100fcd9d;
    if ((local_8 < uVar5) ||
       ((local_8 == uVar5 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_8 = local_8 * param_3 + uVar6;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    uVar7 = (uint)*puVar9;
    puVar9 = puVar9 + 1;
  } while( true );
}


/* END FUNCTION 0x100fcc4b */
