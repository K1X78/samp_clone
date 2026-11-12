/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e690
 * Name: FUN_1009e690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009e690(char *param_1)

{
  char *_Str;
  long lVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    _strtok(param_1,",");
    _Str = _strtok((char *)0x0,",");
    lVar1 = _atol(_Str);
    iVar2 = FUN_10001010();
    if (iVar2 != 0) {
      FUN_100acf60(lVar1,1);
    }
  }
  return;
}


/* END FUNCTION 0x1009e690 */
