/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d1f40
 * Name: FUN_100d1f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d1f40(undefined4 param_1,int *param_2,long *param_3)

{
  byte bVar1;
  char *in_EAX;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  byte *_Str2;
  byte *pbVar6;
  byte *pbVar7;
  char *pcStack_4;
  
  lVar5 = -1;
  *param_2 = 0;
  *param_3 = -1;
  if ((in_EAX == (char *)0x0) || (*in_EAX == '\0')) {
    return 0;
  }
  pbVar2 = (byte *)(*(code *)PTR___strdup_101554c4)();
  if (pbVar2 == (byte *)0x0) {
    return 0x1b;
  }
  _Str2 = pbVar2;
  pbVar7 = pbVar2;
  if (*pbVar2 == 0x5b) {
    bVar1 = pbVar2[1];
    pbVar7 = pbVar2 + 1;
    for (_Str2 = pbVar7;
        (bVar1 != 0 &&
        (((iVar3 = _isxdigit((uint)*_Str2), iVar3 != 0 || (*_Str2 == 0x3a)) || (*_Str2 == 0x2e))));
        _Str2 = _Str2 + 1) {
      bVar1 = _Str2[1];
    }
    if (*_Str2 == 0x25) {
      iVar3 = _strncmp("%25",(char *)_Str2,3);
      if (iVar3 != 0) {
        FUN_100d8ae0(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
      }
      bVar1 = _Str2[1];
      pbVar6 = _Str2;
      while ((_Str2 = pbVar6 + 1, bVar1 != 0 &&
             ((((iVar3 = _isalpha((uint)bVar1), iVar3 != 0 ||
                (iVar3 = _isxdigit((uint)*_Str2), iVar3 != 0)) ||
               ((bVar1 = *_Str2, bVar1 == 0x2d || ((bVar1 == 0x2e || (bVar1 == 0x5f)))))) ||
              (bVar1 == 0x7e))))) {
        bVar1 = pbVar6[2];
        pbVar6 = _Str2;
      }
    }
    if (*_Str2 == 0x5d) {
      *_Str2 = 0;
      _Str2 = _Str2 + 1;
    }
    else {
      FUN_100d8ae0(param_1,"Invalid IPv6 address format\n");
    }
  }
  pcVar4 = _strchr((char *)_Str2,0x3a);
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    pcStack_4 = (char *)0x0;
    if ((pcVar4[1] != '\0') &&
       ((((lVar5 = _strtol(pcVar4 + 1,&pcStack_4,10), pcStack_4 != (char *)0x0 &&
          (*pcStack_4 != '\0')) || (lVar5 < 0)) || (0xffff < lVar5)))) {
      FUN_100d8ae0(param_1,"No valid port number in connect to host string (%s)\n",pcVar4 + 1);
      lVar5 = -1;
      goto LAB_100d20d9;
    }
  }
  iVar3 = (*(code *)PTR___strdup_101554c4)(pbVar7);
  *param_2 = iVar3;
  if (iVar3 == 0) {
    (*(code *)PTR__free_101554bc)(pbVar2);
    return 0x1b;
  }
LAB_100d20d9:
  *param_3 = lVar5;
  (*(code *)PTR__free_101554bc)(pbVar2);
  return 0;
}


/* END FUNCTION 0x100d1f40 */
