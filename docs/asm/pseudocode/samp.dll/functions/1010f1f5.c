/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010f1f5
 * Name: ___crtsetenv
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl ___crtsetenv(char **_POption,int _Primary)

{
  uchar *_Str;
  uchar *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  BOOL BVar5;
  bool bVar6;
  int local_14;
  
  local_14 = 0;
  if (_POption == (char **)0x0) {
    return -1;
  }
  _Str = (uchar *)*_POption;
  if (_Str == (uchar *)0x0) {
    return -1;
  }
  puVar1 = __mbschr(_Str,0x3d);
  if (puVar1 == (uchar *)0x0) {
    return -1;
  }
  if (_Str == puVar1) {
    return -1;
  }
  bVar6 = puVar1[1] == '\0';
  if (DAT_102acd64 == DAT_102acd68) {
    DAT_102acd64 = (int *)copy_environ();
  }
  if (DAT_102acd64 == (int *)0x0) {
    if ((_Primary != 0) && (DAT_102acd6c != (undefined4 *)0x0)) {
      iVar2 = ___wtomb_environ();
      if (iVar2 != 0) {
        return -1;
      }
      goto LAB_1010f2aa;
    }
    if (!bVar6) {
      DAT_102acd64 = _malloc(4);
      if (DAT_102acd64 == (int *)0x0) {
        return -1;
      }
      *DAT_102acd64 = 0;
      if (DAT_102acd6c == (undefined4 *)0x0) {
        DAT_102acd6c = _malloc(4);
        if (DAT_102acd6c == (undefined4 *)0x0) {
          return -1;
        }
        *DAT_102acd6c = 0;
      }
      goto LAB_1010f2aa;
    }
LAB_1010f278:
    local_14 = 0;
  }
  else {
LAB_1010f2aa:
    piVar3 = DAT_102acd64;
    iVar2 = findenv(_Str);
    if ((iVar2 < 0) || (*piVar3 == 0)) {
      if (bVar6) {
        _free(_Str);
        *_POption = (char *)0x0;
        goto LAB_1010f278;
      }
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      piVar3 = _realloc(DAT_102acd64,iVar2 * 4 + 8);
      if (piVar3 == (int *)0x0) {
        return -1;
      }
      piVar3[iVar2] = (int)_Str;
      (piVar3 + iVar2)[1] = 0;
      *_POption = (char *)0x0;
LAB_1010f347:
      DAT_102acd64 = piVar3;
    }
    else {
      piVar3 = piVar3 + iVar2;
      _free((void *)*piVar3);
      if (bVar6) {
        for (; *piVar3 != 0; piVar3 = piVar3 + 1) {
          *piVar3 = piVar3[1];
          iVar2 = iVar2 + 1;
        }
        piVar3 = _realloc(DAT_102acd64,iVar2 << 2);
        if (piVar3 != (int *)0x0) goto LAB_1010f347;
      }
      else {
        *piVar3 = (int)_Str;
        *_POption = (char *)0x0;
      }
    }
    if (_Primary != 0) {
      sVar4 = _strlen((char *)_Str);
      lpName = _malloc(sVar4 + 2);
      if (lpName != (LPCSTR)0x0) {
        FUN_10103c90(lpName,_Str);
        puVar1[(int)lpName - (int)_Str] = '\0';
        BVar5 = SetEnvironmentVariableA
                          (lpName,(LPCSTR)(~-(uint)bVar6 &
                                          (uint)(puVar1 + ((int)lpName - (int)_Str) + 1)));
        if (BVar5 == 0) {
          local_14 = -1;
        }
        _free(lpName);
      }
    }
    if (bVar6) {
      _free(_Str);
    }
  }
  return local_14;
}


/* END FUNCTION 0x1010f1f5 */
