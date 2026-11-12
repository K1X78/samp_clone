/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b59c0
 * Name: FUN_100b59c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulong FUN_100b59c0(char *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined8 uVar4;
  char local_14 [20];
  
  if (((((*param_1 != '\0') && (*param_1 == '{')) && (cVar1 = param_1[1], cVar1 != '\0')) &&
      (((('/' < cVar1 && (cVar1 < ':')) || (('@' < cVar1 && (cVar1 < 'G')))) ||
       (('`' < cVar1 && (cVar1 < 'g')))))) && (param_1[2] != '\0')) {
    iVar2 = FUN_100b5950(param_1[2]);
    if ((iVar2 != 0) && (*(char *)(extraout_ECX + 3) != '\0')) {
      iVar2 = FUN_100b5950(*(char *)(extraout_ECX + 3));
      if ((iVar2 != 0) && (*(char *)(extraout_ECX_00 + 4) != '\0')) {
        iVar2 = FUN_100b5950(*(char *)(extraout_ECX_00 + 4));
        if ((iVar2 != 0) && (*(char *)(extraout_ECX_01 + 5) != '\0')) {
          iVar2 = FUN_100b5950(*(char *)(extraout_ECX_01 + 5));
          if ((iVar2 != 0) && (*(char *)(extraout_ECX_02 + 6) != '\0')) {
            uVar4 = FUN_100b5950(*(char *)(extraout_ECX_02 + 6));
            if ((((int)uVar4 != 0) && (*(char *)(extraout_ECX_03 + 7) != '\0')) &&
               (*(char *)(extraout_ECX_03 + 7) == '}')) {
              local_14[0] = '\0';
              local_14[1] = '\0';
              local_14[2] = '\0';
              local_14[3] = '\0';
              local_14[4] = '\0';
              local_14[5] = '\0';
              local_14[6] = '\0';
              local_14[7] = '\0';
              local_14[8] = '\0';
              local_14[9] = '\0';
              local_14[10] = '\0';
              local_14[0xb] = '\0';
              local_14[0xc] = '\0';
              local_14[0xd] = '\0';
              local_14[0xe] = '\0';
              local_14[0xf] = '\0';
              local_14[0x10] = 0;
              _strncpy(local_14,(char *)((ulonglong)uVar4 >> 0x20),6);
              uVar3 = _strtoul(local_14,(char **)0x0,0x10);
              return uVar3;
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x100b59c0 */
