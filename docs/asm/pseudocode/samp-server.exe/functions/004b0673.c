/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b0673
 * Name: ___crtsetenv
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl ___crtsetenv(char **_POption,int _Primary)

{
  uint *_Str;
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint *lpName;
  undefined1 *puVar5;
  BOOL BVar6;
  bool bVar7;
  int local_14;
  
  local_14 = 0;
  if (_POption == (char **)0x0) {
    return -1;
  }
  _Str = (uint *)*_POption;
  if (_Str == (uint *)0x0) {
    return -1;
  }
  puVar1 = (uint *)__mbschr((uchar *)_Str,0x3d);
  if (puVar1 == (uint *)0x0) {
    return -1;
  }
  if (_Str == puVar1) {
    return -1;
  }
  bVar7 = *(char *)((int)puVar1 + 1) == '\0';
  if (DAT_0051c210 == DAT_0051c214) {
    DAT_0051c210 = copy_environ();
  }
  if (DAT_0051c210 == (int *)0x0) {
    if ((_Primary != 0) && (DAT_0051c218 != (undefined4 *)0x0)) {
      iVar2 = ___wtomb_environ();
      if (iVar2 != 0) {
        return -1;
      }
      goto LAB_004b0728;
    }
    if (!bVar7) {
      DAT_0051c210 = _malloc(4);
      if (DAT_0051c210 == (int *)0x0) {
        return -1;
      }
      *DAT_0051c210 = 0;
      if (DAT_0051c218 == (undefined4 *)0x0) {
        DAT_0051c218 = _malloc(4);
        if (DAT_0051c218 == (undefined4 *)0x0) {
          return -1;
        }
        *DAT_0051c218 = 0;
      }
      goto LAB_004b0728;
    }
LAB_004b06f6:
    local_14 = 0;
  }
  else {
LAB_004b0728:
    piVar3 = DAT_0051c210;
    iVar2 = findenv((uchar *)_Str);
    if ((iVar2 < 0) || (*piVar3 == 0)) {
      if (bVar7) {
        _free(_Str);
        *_POption = (char *)0x0;
        goto LAB_004b06f6;
      }
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      piVar3 = _realloc(DAT_0051c210,iVar2 * 4 + 8);
      if (piVar3 == (int *)0x0) {
        return -1;
      }
      piVar3[iVar2] = (int)_Str;
      (piVar3 + iVar2)[1] = 0;
      *_POption = (char *)0x0;
LAB_004b07c5:
      DAT_0051c210 = piVar3;
    }
    else {
      piVar3 = piVar3 + iVar2;
      _free((void *)*piVar3);
      if (bVar7) {
        for (; *piVar3 != 0; piVar3 = piVar3 + 1) {
          *piVar3 = piVar3[1];
          iVar2 = iVar2 + 1;
        }
        piVar3 = _realloc(DAT_0051c210,iVar2 << 2);
        if (piVar3 != (int *)0x0) goto LAB_004b07c5;
      }
      else {
        *piVar3 = (int)_Str;
        *_POption = (char *)0x0;
      }
    }
    if (_Primary != 0) {
      sVar4 = _strlen((char *)_Str);
      lpName = _malloc(sVar4 + 2);
      if (lpName != (uint *)0x0) {
        FUN_004a68f0(lpName,_Str);
        puVar5 = (undefined1 *)(((int)lpName - (int)_Str) + (int)puVar1);
        *puVar5 = 0;
        BVar6 = SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(puVar5 + 1)))
        ;
        if (BVar6 == 0) {
          local_14 = -1;
        }
        _free(lpName);
      }
    }
    if (bVar7) {
      _free(_Str);
    }
  }
  return local_14;
}


/* END FUNCTION 0x004b0673 */
