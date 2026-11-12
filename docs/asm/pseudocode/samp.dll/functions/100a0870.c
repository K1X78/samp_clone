/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0870
 * Name: FUN_100a0870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a0870(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0x4e21) && (-1 < param_1)) {
    iVar1 = FUN_100b1f10(&DAT_1011e6a0,param_1);
    if (iVar1 == 0) {
      (*(code *)0x4087e0)(param_1,2);
      (*(code *)0x40ea10)(0);
      if (*(char *)(param_1 * 0x14 + 0x8e4cd0) != '\x01') {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x14 + 0x8e4cc6) & 2) != 0) {
        (*(code *)0x409c10)(param_1);
        (*(code *)0x409c70)(param_1);
      }
    }
  }
  return 1;
}


/* END FUNCTION 0x100a0870 */
