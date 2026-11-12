/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b3df0
 * Name: FUN_100b3df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __fastcall FUN_100b3df0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (_DAT_00c1703c == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar1 = (*(code *)((-(uint)(DAT_102ac9b8 != 1) & 0x40) + 0x7ee2d0))(_DAT_00c1703c);
  return CONCAT44(param_3,uVar1);
}


/* END FUNCTION 0x100b3df0 */
