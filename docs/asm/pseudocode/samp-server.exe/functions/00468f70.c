/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468f70
 * Name: FUN_00468f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulong __cdecl FUN_00468f70(char *param_1)

{
  int iVar1;
  ulong uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  char *_Source;
  char local_14 [20];
  
  if (((*param_1 != '\0') && (*param_1 == '{')) && (param_1[1] != '\0')) {
    iVar1 = FUN_00468f40(param_1[1]);
    if ((iVar1 != 0) && (*(char *)(extraout_ECX + 2) != '\0')) {
      iVar1 = FUN_00468f40(*(char *)(extraout_ECX + 2));
      if ((iVar1 != 0) && (*(char *)(extraout_ECX_00 + 3) != '\0')) {
        iVar1 = FUN_00468f40(*(char *)(extraout_ECX_00 + 3));
        if ((iVar1 != 0) && (*(char *)(extraout_ECX_01 + 4) != '\0')) {
          iVar1 = FUN_00468f40(*(char *)(extraout_ECX_01 + 4));
          if ((iVar1 != 0) && (*(char *)(extraout_ECX_02 + 5) != '\0')) {
            iVar1 = FUN_00468f40(*(char *)(extraout_ECX_02 + 5));
            if ((iVar1 != 0) && (*(char *)(extraout_ECX_03 + 6) != '\0')) {
              iVar1 = FUN_00468f40(*(char *)(extraout_ECX_03 + 6));
              if ((iVar1 != 0) &&
                 ((*(char *)(extraout_ECX_04 + 7) != '\0' && (*(char *)(extraout_ECX_04 + 7) == '}')
                  ))) {
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
                _strncpy(local_14,_Source,6);
                uVar2 = _strtoul(local_14,(char **)0x0,0x10);
                return uVar2;
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00468f70 */
