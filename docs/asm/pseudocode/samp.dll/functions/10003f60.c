/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003f60
 * Name: FUN_10003f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10003f60(int *param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)param_1 + 0x143) = 0;
  if (*param_1 != 0) {
    FUN_100ab7f0();
    FUN_100ab990(0x42c80000);
    FUN_100ac3b0(0);
  }
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x14b) = DVar1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x147) = DVar1;
  return;
}


/* END FUNCTION 0x10003f60 */
