/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f970
 * Name: FUN_1004f970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_1004f970(undefined4 *param_1)

{
  uint3 uVar1;
  undefined4 uStack_4;
  
  param_1[1] = &PTR_LAB_1011b380;
  *param_1 = &PTR_LAB_1011b388;
  param_1[1] = &PTR_LAB_1011b384;
  uStack_4 = param_1;
  FUN_100216c0();
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  uVar1 = (uint3)uStack_4;
  uStack_4 = (undefined4 *)(uint)(uVar1 & 0xffff);
  FUN_100208c0((int)&uStack_4 + 3,(int)&uStack_4 + 2);
  return param_1;
}


/* END FUNCTION 0x1004f970 */
