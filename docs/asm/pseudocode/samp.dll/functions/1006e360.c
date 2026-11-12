/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006e360
 * Name: FUN_1006e360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006e360(int param_1)

{
  tagRECT local_10;
  
  GetClientRect(_DAT_00c97c1c,&local_10);
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(float *)(param_1 + 8) = (float)local_10.right * 0.5 - *(float *)(param_1 + 0x14) * 0.5;
  *(float *)(param_1 + 0xc) = (float)local_10.bottom * 0.5 - *(float *)(param_1 + 0x18) * 0.5;
  return;
}


/* END FUNCTION 0x1006e360 */
