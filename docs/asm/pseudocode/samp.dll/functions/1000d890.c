/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d890
 * Name: FUN_1000d890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_1000d890(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 9);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x213) = 0;
  *(undefined1 *)((int)param_1 + 0x21f) = 0;
  *(undefined1 *)((int)param_1 + 0x221) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)((int)param_1 + 0x21b) = 0;
  *(undefined4 *)((int)param_1 + 0x217) = 0;
  FUN_1000b990();
  *(undefined4 *)((int)param_1 + 0x2065) = 0;
  *(undefined4 *)((int)param_1 + 0x2069) = 0;
  *(undefined1 *)(param_1 + 0x4d1) = 0;
  return param_1;
}


/* END FUNCTION 0x1000d890 */
