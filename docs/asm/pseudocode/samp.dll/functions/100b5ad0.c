/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5ad0
 * Name: FUN_100b5ad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulong FUN_100b5ad0(short *param_1)

{
  int iVar1;
  ulong uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  undefined8 uVar3;
  wchar_t local_24 [18];
  
  if (((*param_1 != 0) && (*param_1 == 0x7b)) && (param_1[1] != 0)) {
    iVar1 = FUN_100b5980(param_1[1]);
    if ((iVar1 != 0) && (*(short *)(extraout_ECX + 4) != 0)) {
      iVar1 = FUN_100b5980(*(short *)(extraout_ECX + 4));
      if ((iVar1 != 0) && (*(short *)(extraout_ECX_00 + 6) != 0)) {
        iVar1 = FUN_100b5980(*(short *)(extraout_ECX_00 + 6));
        if ((iVar1 != 0) && (*(short *)(extraout_ECX_01 + 8) != 0)) {
          iVar1 = FUN_100b5980(*(short *)(extraout_ECX_01 + 8));
          if ((iVar1 != 0) && (*(short *)(extraout_ECX_02 + 10) != 0)) {
            iVar1 = FUN_100b5980(*(short *)(extraout_ECX_02 + 10));
            if ((iVar1 != 0) && (*(short *)(extraout_ECX_03 + 0xc) != 0)) {
              uVar3 = FUN_100b5980(*(short *)(extraout_ECX_03 + 0xc));
              if (((int)uVar3 != 0) &&
                 ((*(short *)(extraout_ECX_04 + 0xe) != 0 &&
                  (*(short *)(extraout_ECX_04 + 0xe) == 0x7d)))) {
                local_24[0] = L'\0';
                local_24[1] = L'\0';
                local_24[2] = L'\0';
                local_24[3] = L'\0';
                local_24[4] = L'\0';
                local_24[5] = L'\0';
                local_24[6] = L'\0';
                local_24[7] = L'\0';
                local_24[8] = L'\0';
                local_24[9] = L'\0';
                local_24[10] = L'\0';
                local_24[0xb] = L'\0';
                local_24[0xc] = L'\0';
                local_24[0xd] = L'\0';
                local_24[0xe] = L'\0';
                local_24[0xf] = L'\0';
                local_24[0x10] = 0;
                _wcsncpy(local_24,(wchar_t *)((ulonglong)uVar3 >> 0x20),6);
                uVar2 = _wcstoul(local_24,(wchar_t **)0x0,0x10);
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


/* END FUNCTION 0x100b5ad0 */
