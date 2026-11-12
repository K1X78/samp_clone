/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10078240
 * Name: FUN_10078240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10078240(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10099260();
  puVar2 = param_1;
  for (iVar1 = 0x1ef; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10140bf4 = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  *(undefined1 *)((int)param_1 + 0x215) = 1;
  *(undefined1 *)(param_1 + 0x83) = 1;
  *(undefined1 *)((int)param_1 + 0x1e1) = 1;
  *(undefined1 *)((int)param_1 + 0x225) = 1;
  *(undefined4 *)((int)param_1 + 0x23a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x23e) = 0xffffffff;
  param_1[0x8d] = 0xffffffff;
  return;
}


/* END FUNCTION 0x10078240 */
