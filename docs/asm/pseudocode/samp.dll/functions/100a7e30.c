/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7e30
 * Name: FUN_100a7e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a7e30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100b1f10(&DAT_1011ee24,*(undefined4 *)(param_1 + 0x44));
  if (iVar1 == 0) {
    FUN_100b1f10(&DAT_1011ee10,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_2 + 0x44),
                 (double)*(float *)(param_1 + 0xc2),(double)*(float *)(param_1 + 0xc6),
                 (double)*(float *)(param_1 + 0xca),(double)*(float *)(param_1 + 0xce),
                 (double)*(float *)(param_1 + 0xd2),(double)*(float *)(param_1 + 0xd6));
  }
  return;
}


/* END FUNCTION 0x100a7e30 */
