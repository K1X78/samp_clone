/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004637d0
 * Name: FUN_004637d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_004637d0(int param_1)

{
  uint uVar1;
  
  FUN_0044e1a0(param_1);
  uVar1 = DAT_004ce690 ^ 0x5e94a3cf;
  *(uint *)(param_1 + 0x270) = uVar1;
  *(uint *)(param_1 + 0x26c) = uVar1 << 5;
  *(undefined1 *)(param_1 + 600) = 0;
  return param_1;
}


/* END FUNCTION 0x004637d0 */
