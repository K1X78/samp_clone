/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b3e40
 * Name: FUN_100b3e40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_100b3e40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_1c = *param_1;
  local_18 = param_1[1];
  local_14 = param_1[2];
  local_10 = param_2;
  local_8 = _DAT_00c1703c;
  if (_DAT_00c1703c == 0) {
    return ZEXT48(&local_1c) << 0x20;
  }
  local_c = &local_1c;
  uVar1 = (*(code *)((-(uint)(DAT_102ac9b8 != 1) & 0x40) + 0x7ee2d0))(_DAT_00c1703c);
  return CONCAT44(&local_1c,uVar1);
}


/* END FUNCTION 0x100b3e40 */
