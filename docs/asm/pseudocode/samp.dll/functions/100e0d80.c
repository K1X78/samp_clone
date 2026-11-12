/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0d80
 * Name: FUN_100e0d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e0d80(char *param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  int _Val;
  undefined4 local_4;
  
  pcVar4 = param_1;
  _Val = (int)*param_1;
  bVar1 = false;
  param_1 = (char *)0x0;
  pbVar3 = (byte *)&local_4;
  local_4 = 0;
  if (_Val != 0) {
    do {
      pcVar4 = pcVar4 + 1;
      pcVar2 = _strchr("0123456789",_Val);
      if (pcVar2 == (char *)0x0) {
        if (_Val != 0x2e) {
          return 0;
        }
        if (!bVar1) {
          return 0;
        }
        if (param_1 == (char *)0x4) {
          return 0;
        }
        pbVar3 = pbVar3 + 1;
        *pbVar3 = 0;
        bVar1 = false;
      }
      else {
        if ((bVar1) && (*pbVar3 == 0)) {
          return 0;
        }
        if ((char *)0xff < pcVar2 + (uint)*pbVar3 * 10 + -0x10125cd8) {
          return 0;
        }
        *pbVar3 = (byte)(pcVar2 + (uint)*pbVar3 * 10 + -0x10125cd8);
        if (!bVar1) {
          param_1 = (char *)((int)param_1 + 1);
          if (4 < (int)param_1) {
            return 0;
          }
          bVar1 = true;
        }
      }
      _Val = (int)*pcVar4;
    } while (_Val != 0);
    if (3 < (int)param_1) {
      *param_2 = local_4;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100e0d80 */
