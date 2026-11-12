/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10077be0
 * Name: FUN_10077be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10077be0(char *param_1,int param_2,char *param_3,va_list param_4)

{
  uint _Count;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0x80070057;
  }
  _Count = param_2 - 1;
  uVar1 = __vsnprintf(param_1,_Count,param_3,param_4);
  if (((int)uVar1 < 0) || (_Count < uVar1)) {
    uVar2 = 0x8007007a;
    param_1[_Count] = '\0';
  }
  else {
    uVar2 = 0;
    if (uVar1 == _Count) {
      param_1[_Count] = '\0';
      return uVar2;
    }
  }
  return uVar2;
}


/* END FUNCTION 0x10077be0 */
