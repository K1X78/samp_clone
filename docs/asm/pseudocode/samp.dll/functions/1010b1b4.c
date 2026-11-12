/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010b1b4
 * Name: ___init_numeric
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  int *_Memory;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined **_Memory_00;
  undefined4 *puVar7;
  uint _Lc_type;
  char *pcVar8;
  void *unaff_EDI;
  undefined **ppuVar9;
  void *_Address;
  void *_Address_00;
  
  if ((DAT_102ad0f0 == 0) && (DAT_102ad0ec == 0)) {
    if (((DAT_102ad300 != (int *)0x0) && (*DAT_102ad300 == 0)) &&
       (DAT_102ad300 != *(int **)(PTR_DAT_10155d74 + 0x2c))) {
      _free(DAT_102ad300);
      _free(DAT_102ad22c);
    }
    DAT_102ad304 = (undefined4 *)0x0;
    DAT_102ad300 = (int *)0x0;
    _Memory_00 = &PTR_DAT_10156464;
    DAT_102ad22c = (undefined **)0x0;
    ppuVar9 = DAT_102ad22c;
    _Memory = DAT_102ad300;
LAB_1010b361:
    DAT_102ad300 = _Memory;
    DAT_102ad22c = ppuVar9;
    DAT_101556dc = **_Memory_00;
    _DAT_101556e0 = 1;
    iVar6 = 0;
    PTR_PTR_10156494 = (undefined *)_Memory_00;
  }
  else {
    _Memory_00 = _calloc(1,0x30);
    if (_Memory_00 != (undefined **)0x0) {
      puVar7 = (undefined4 *)PTR_PTR_10156494;
      ppuVar9 = _Memory_00;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppuVar9 = (undefined *)*puVar7;
        puVar7 = puVar7 + 1;
        ppuVar9 = ppuVar9 + 1;
      }
      _Memory = _malloc(4);
      if (_Memory != (int *)0x0) {
        *_Memory = 0;
        if (DAT_102ad0f0 == 0) {
          DAT_102ad304 = (undefined4 *)0x0;
          *_Memory_00 = PTR_DAT_10156464;
          _Memory_00[1] = PTR_DAT_10156468;
          _Memory_00[2] = PTR_DAT_1015646c;
        }
        else {
          DAT_102ad304 = _malloc(4);
          if (DAT_102ad304 == (undefined4 *)0x0) {
            iVar6 = 1;
LAB_1010b2bf:
            _free(_Memory_00);
            _free(_Memory);
            return iVar6;
          }
          *DAT_102ad304 = 0;
          _Lc_type = (uint)DAT_102ad26e;
          _Address_00 = (void *)0x1;
          iVar6 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xe,(LCTYPE)_Memory_00,unaff_EDI
                                  );
          _Address = (void *)0x1;
          iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xf,(LCTYPE)(_Memory_00 + 1),
                                   _Address_00);
          iVar4 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x10,(LCTYPE)(_Memory_00 + 2),
                                   _Address);
          if (iVar4 != 0 || (iVar6 != 0 || iVar3 != 0)) {
            ___free_lconv_num(_Memory_00);
            iVar6 = -1;
            goto LAB_1010b2bf;
          }
          pcVar5 = _Memory_00[2];
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar8 = pcVar5;
              if (cVar2 != ';') goto LAB_1010b2eb;
              do {
                pcVar1 = pcVar8 + 1;
                *pcVar8 = *pcVar1;
                pcVar8 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_1010b2eb:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        ppuVar9 = _Memory_00;
        if (((DAT_102ad300 != (int *)0x0) && (*DAT_102ad300 == 0)) &&
           (DAT_102ad300 != *(int **)(PTR_DAT_10155d74 + 0x2c))) {
          _free(DAT_102ad300);
          _free(DAT_102ad22c);
        }
        goto LAB_1010b361;
      }
      _free(_Memory_00);
    }
    iVar6 = 1;
  }
  return iVar6;
}


/* END FUNCTION 0x1010b1b4 */
