/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d3800
 * Name: FUN_100d3800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100d3800(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  byte *_Str;
  byte *_Str2;
  int *piVar8;
  int local_10;
  char *local_c;
  int local_8;
  char *local_4;
  
  local_10 = 0;
  local_c = (char *)0x0;
  pcVar3 = _strstr((char *)param_1,"://");
  _Str = param_1;
  if (pcVar3 != (char *)0x0) {
    _Str = (byte *)(pcVar3 + 3);
    iVar4 = thunk_FUN_100de8c0("https",param_1,5);
    if (iVar4 == 0) {
      iVar4 = thunk_FUN_100de8c0("socks5h",param_1,7);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_100de8c0("socks5",param_1,6);
        if (iVar4 == 0) {
          iVar4 = thunk_FUN_100de8c0("socks4a",param_1,7);
          if (iVar4 == 0) {
            iVar4 = thunk_FUN_100de8c0("socks4",param_1,6);
            if ((iVar4 == 0) && (iVar4 = thunk_FUN_100de8c0("socks",param_1,5), iVar4 == 0)) {
              iVar4 = thunk_FUN_100de8c0("http:",param_1,5);
              if (iVar4 == 0) {
                FUN_100d8ba0(param_2,"Unsupported proxy scheme for \'%s\'",param_1);
                return 7;
              }
            }
            else {
              in_EAX = 4;
            }
          }
          else {
            in_EAX = 6;
          }
        }
        else {
          in_EAX = 5;
        }
      }
      else {
        in_EAX = 7;
      }
    }
    else {
      in_EAX = 2;
    }
  }
  if (((PTR_DAT_10155510[8] & 0x10) == 0) && (in_EAX == 2)) {
    FUN_100d8ba0(param_2,
                 "Unsupported proxy \'%s\', libcurl is built without the HTTPS-proxy support.",
                 param_1);
    return 4;
  }
  if ((((in_EAX == 7) || (in_EAX == 5)) || (in_EAX == 6)) || (local_8 = 0, in_EAX == 4)) {
    local_8 = 1;
  }
  pcVar3 = _strchr((char *)_Str,0x40);
  if (pcVar3 != (char *)0x0) {
    iVar4 = FUN_100d18c0(_Str,(int)pcVar3 - (int)_Str,&local_10,&local_c,0);
    if (iVar4 != 0) {
      return iVar4;
    }
    _Str = (byte *)(pcVar3 + 1);
  }
  _Str2 = _Str;
  if (*_Str == 0x5b) {
    bVar1 = _Str[1];
    _Str = _Str + 1;
    for (_Str2 = _Str;
        (bVar1 != 0 &&
        (((iVar4 = _isxdigit((uint)*_Str2), iVar4 != 0 || (*_Str2 == 0x3a)) || (*_Str2 == 0x2e))));
        _Str2 = _Str2 + 1) {
      bVar1 = _Str2[1];
    }
    if (*_Str2 == 0x25) {
      iVar4 = _strncmp("%25",(char *)_Str2,3);
      if (iVar4 != 0) {
        FUN_100d8ae0(param_2,"Please URL encode %% as %%25, see RFC 6874.\n");
      }
      bVar1 = _Str2[1];
      while ((_Str2 = _Str2 + 1, bVar1 != 0 &&
             (((iVar4 = _isalpha((uint)bVar1), iVar4 != 0 ||
               (iVar4 = _isxdigit((uint)*_Str2), iVar4 != 0)) ||
              ((bVar1 = *_Str2, bVar1 == 0x2d ||
               (((bVar1 == 0x2e || (bVar1 == 0x5f)) || (bVar1 == 0x7e))))))))) {
        bVar1 = _Str2[1];
      }
    }
    if (*_Str2 == 0x5d) {
      *_Str2 = 0;
      _Str2 = _Str2 + 1;
    }
    else {
      FUN_100d8ae0(param_2,"Invalid IPv6 address format\n");
    }
  }
  pcVar3 = _strchr((char *)_Str2,0x3a);
  if (pcVar3 == (char *)0x0) {
    if (*_Str == 0x2f) {
      (*(code *)PTR__free_101554bc)(local_10);
      (*(code *)PTR__free_101554bc)(local_c);
      return 5;
    }
    pcVar3 = _strchr((char *)_Str,0x2f);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    iVar4 = *(int *)(param_2 + 0x154);
    if (iVar4 == 0) {
      iVar4 = ((in_EAX != 2) - 1 & 0xfffffd83) + 0x438;
    }
  }
  else {
    *pcVar3 = '\0';
    local_4 = (char *)0x0;
    iVar4 = _strtol(pcVar3 + 1,&local_4,10);
    if ((((local_4 == (char *)0x0) || (cVar2 = *local_4, cVar2 == '\0')) ||
        ((cVar2 == '/' || (cVar2 == ' ')))) && ((-1 < iVar4 && (iVar4 < 0x10000)))) {
      *(int *)(param_3 + 0xfc) = iVar4;
    }
    else {
      FUN_100d8ae0(param_2,"No valid port number in proxy string (%s)\n",pcVar3 + 1);
    }
  }
  iVar7 = local_10;
  if (*_Str == 0) goto LAB_100d3c90;
  piVar8 = (int *)(param_3 + 0xbc);
  if (local_8 == 0) {
    piVar8 = (int *)(param_3 + 0xdc);
  }
  piVar8[5] = in_EAX;
  if (local_10 != 0) {
    (*(code *)PTR__free_101554bc)(piVar8[6]);
    piVar8[6] = 0;
    iVar5 = FUN_100eb140(param_2,iVar7,0,0);
    piVar8[6] = iVar5;
    (*(code *)PTR__free_101554bc)(iVar7);
    local_10 = 0;
    if (piVar8[6] == 0) {
      (*(code *)PTR__free_101554bc)(local_c);
      return 0x1b;
    }
    (*(code *)PTR__free_101554bc)(piVar8[7]);
    pcVar3 = local_c;
    piVar8[7] = 0;
    if (local_c == (char *)0x0) {
LAB_100d3bf6:
      iVar7 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
    }
    else {
      pcVar6 = local_c;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (0xff < (uint)((int)pcVar6 - (int)(local_c + 1))) goto LAB_100d3bf6;
      iVar7 = FUN_100eb140(param_2,local_c,0,0);
    }
    piVar8[7] = iVar7;
    (*(code *)PTR__free_101554bc)(pcVar3);
    local_c = (char *)0x0;
    if (piVar8[7] == 0) {
      return 0x1b;
    }
    *(undefined4 *)(param_3 + 0x2a4) = 1;
  }
  iVar7 = local_10;
  if ((-1 < iVar4) &&
     (((piVar8[4] = iVar4, *(int *)(param_3 + 0xfc) < 0 || (local_8 != 0)) ||
      (*(int *)(param_3 + 0xbc) == 0)))) {
    *(int *)(param_3 + 0xfc) = iVar4;
  }
  (*(code *)PTR__free_101554bc)(*piVar8);
  *piVar8 = 0;
  iVar4 = (*(code *)PTR___strdup_101554c4)(_Str);
  *piVar8 = iVar4;
  piVar8[2] = iVar4;
  if (iVar4 == 0) {
    return 0x1b;
  }
LAB_100d3c90:
  (*(code *)PTR__free_101554bc)(iVar7);
  (*(code *)PTR__free_101554bc)(local_c);
  return 0;
}


/* END FUNCTION 0x100d3800 */
