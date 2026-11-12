/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10016250
 * Name: FUN_10016250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 * __fastcall FUN_10016250(undefined2 *param_1)

{
  DWORD DVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = 0xffff;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0xff;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0x1f9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x1cd) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x1e1) = DVar1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x1e5) = DVar1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x1c5) = DVar1;
  FUN_10015c60();
  return param_1;
}


/* END FUNCTION 0x10016250 */
