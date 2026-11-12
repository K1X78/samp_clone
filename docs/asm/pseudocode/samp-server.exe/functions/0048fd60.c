/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048fd60
 * Name: FUN_0048fd60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0048fd60(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *_Str;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  _Str = _strtok(param_1,".");
  uVar5 = 0;
  if (_Str != (char *)0x0) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      if (_Str != "*") {
        uVar5 = _atol(_Str);
        if ((int)uVar5 < 0) goto LAB_0048fde0;
        uVar5 = _atol(_Str);
        if (0xff < (int)uVar5) goto LAB_0048fde0;
      }
      _Str = _strtok((char *)0x0,".");
    } while (_Str != (char *)0x0);
    uVar5 = 0;
    if (iVar6 == 4) {
      *(undefined4 *)param_1 = uVar1;
      *(undefined4 *)(param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
LAB_0048fde0:
  return uVar5 & 0xffffff00;
}


/* END FUNCTION 0x0048fd60 */
