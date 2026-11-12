/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100653a0
 * Name: FUN_100653a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100653a0(undefined4 param_1,uint param_2,byte *param_3,byte param_4)

{
  byte *_Memory;
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  
  _Memory = param_3;
  if ((param_4 != 0) && (_Memory = operator_new(param_2), param_2 != 0)) {
    pbVar1 = _Memory;
    uVar3 = param_2;
    do {
      *pbVar1 = pbVar1[(int)param_3 - (int)_Memory] ^ param_4;
      pbVar1 = pbVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar2 = FUN_100650e0();
  FUN_10065290(uVar2,_Memory,param_2,0,0,param_1);
  if (param_4 != 0) {
    _free(_Memory);
  }
  return;
}


/* END FUNCTION 0x100653a0 */
