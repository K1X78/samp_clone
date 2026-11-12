/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006e460
 * Name: FUN_1006e460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_1006e460(undefined4 *param_1,undefined4 param_2)

{
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[1] = 0;
  if ((DAT_102aca3c == 0) || (_DAT_00c17044 < 0x321)) {
    param_1[5] = 0x44200000;
    param_1[6] = 0x43f00000;
  }
  else {
    param_1[5] = 0x44480000;
    param_1[6] = 0x44160000;
  }
  param_1[7] = 0x42700000;
  param_1[8] = 0;
  param_1[9] = 0x3dae147b;
  param_1[10] = 0x3e880000;
  param_1[0xb] = 0x3ee00000;
  FUN_1006e360();
  *param_1 = 0;
  return param_1;
}


/* END FUNCTION 0x1006e460 */
