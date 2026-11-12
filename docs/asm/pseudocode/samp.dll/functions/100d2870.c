/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2870
 * Name: FUN_100d2870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d2870(int param_1,int param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x4b0c) = 0;
  *(undefined4 *)(param_1 + 0x4ac8) = 0;
  if ((*(int *)(param_1 + 0x4ac0) != 0) &&
     ((*(uint *)(*(int *)(param_2 + 800) + 0x44) & 0x1000) == 0)) {
    *(undefined4 *)(param_1 + 0x4ac0) = 0;
  }
  if (*(int *)(param_1 + 0x53c) == 0) {
    if (*(int *)(param_1 + 1000) == 6) {
      *(undefined4 *)(param_1 + 1000) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 1000) = 6;
  }
  uVar1 = FUN_100d8500();
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x854);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x84c);
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_100eb4f0(param_1);
  FUN_100e32a0(param_1,0,0);
  FUN_100e3210(param_1,0,0);
  return 0;
}


/* END FUNCTION 0x100d2870 */
