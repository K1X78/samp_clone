/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004880a0
 * Name: FUN_004880a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_004880a0(int param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = FUN_0044e910();
  *(int *)(param_1 + 0xd) = (int)uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  return param_1;
}


/* END FUNCTION 0x004880a0 */
