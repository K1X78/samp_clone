/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6490
 * Name: FUN_100b6490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __fastcall FUN_100b6490(undefined4 param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  
  _DAT_102a9da0 = *(int *)(_DAT_00b7cd98 + 0x14);
  _DAT_102a9da4 = *(int *)(param_3 + 0x14);
  if ((_DAT_102a9da0 != 0) && (_DAT_102a9da4 != 0)) {
    param_2 = *(float *)(_DAT_102a9da0 + 0x34);
    fVar2 = *(float *)(_DAT_102a9da0 + 0x30) - *(float *)(_DAT_102a9da4 + 0x30);
    fVar1 = param_2 - *(float *)(_DAT_102a9da4 + 0x34);
    _DAT_102a9a4c = fVar2 * fVar2 + fVar1 * fVar1;
    if (_DAT_102a9a4c < 40000.0 != (_DAT_102a9a4c == 40000.0)) {
      cVar3 = (*(code *)0x410ce0)(_DAT_102a9da4 + 0x30);
      param_2 = 0.0;
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return (ulonglong)(uint)param_2 << 0x20;
}


/* END FUNCTION 0x100b6490 */
