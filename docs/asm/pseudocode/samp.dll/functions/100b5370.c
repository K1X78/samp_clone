/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5370
 * Name: FUN_100b5370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5370(undefined4 param_1,int param_2,undefined4 *param_3)

{
  param_2 = param_2 * 0xc;
  _DAT_102abe34 = *(undefined4 *)(&DAT_101553d8 + param_2);
  _DAT_102abe38 = *(undefined4 *)(&DAT_101553dc + param_2);
  _DAT_102abe3c = *(undefined4 *)(&DAT_101553e0 + param_2);
  (*(code *)((-(uint)(DAT_102ac9b8 != 1) & 0x40) + 0x7f2720))
            (param_1,&DAT_102abe34,&DAT_102aae14,&DAT_102abe28);
  *param_3 = _DAT_102aae14;
  return;
}


/* END FUNCTION 0x100b5370 */
