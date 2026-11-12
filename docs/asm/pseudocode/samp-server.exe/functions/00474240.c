/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00474240
 * Name: FUN_00474240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00474240(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined **_Str;
  char *pcVar3;
  char local_40 [64];
  
  _Str = FUN_0048f870(*(short *)(param_2 + 4));
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[0x20] = '\0';
  local_40[0x21] = '\0';
  local_40[0x22] = '\0';
  local_40[0x23] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[0x24] = '\0';
  local_40[0x25] = '\0';
  local_40[0x26] = '\0';
  local_40[0x27] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0x28] = '\0';
  local_40[0x29] = '\0';
  local_40[0x2a] = '\0';
  local_40[0x2b] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  local_40[0x2c] = '\0';
  local_40[0x2d] = '\0';
  local_40[0x2e] = '\0';
  local_40[0x2f] = '\0';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  local_40[0x12] = '\0';
  local_40[0x13] = '\0';
  local_40[0x30] = '\0';
  local_40[0x31] = '\0';
  local_40[0x32] = '\0';
  local_40[0x33] = '\0';
  local_40[0x14] = '\0';
  local_40[0x15] = '\0';
  local_40[0x16] = '\0';
  local_40[0x17] = '\0';
  local_40[0x34] = '\0';
  local_40[0x35] = '\0';
  local_40[0x36] = '\0';
  local_40[0x37] = '\0';
  local_40[0x18] = '\0';
  local_40[0x19] = '\0';
  local_40[0x1a] = '\0';
  local_40[0x1b] = '\0';
  local_40[0x38] = '\0';
  local_40[0x39] = '\0';
  local_40[0x3a] = '\0';
  local_40[0x3b] = '\0';
  local_40[0x1c] = '\0';
  local_40[0x1d] = '\0';
  local_40[0x1e] = '\0';
  local_40[0x1f] = '\0';
  local_40[0x3c] = '\0';
  local_40[0x3d] = '\0';
  local_40[0x3e] = '\0';
  local_40[0x3f] = '\0';
  if (_Str != (undefined **)0x0) {
    pcVar3 = _strchr((char *)_Str,0x3a);
    if (pcVar3 != (char *)0x0) {
      _strncpy(local_40,(char *)_Str,(int)pcVar3 - (int)_Str);
      pcVar3 = pcVar3 + 1;
      iVar2 = 0x20 - (int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(local_40 + iVar2)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_0046fcb0(param_1,*(int *)(param_2 + 8),local_40,*(int *)(param_2 + 0xc));
      FUN_0046fcb0(param_1,*(int *)(param_2 + 0x10),local_40 + 0x20,*(int *)(param_2 + 0x14));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00474240 */
