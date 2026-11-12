/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008ded0
 * Name: FUN_1008ded0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1008ded0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    uVar1 = **(undefined4 **)(param_1 + 0x20);
    FUN_10085f40(*(char *)(param_1 + 0x3c) == '\0',param_3,0x3f333333);
    FUN_1008cae0(param_1 + 0x4d,uVar1,param_1 + 0x3d,1,0xffffffff);
  }
  return;
}


/* END FUNCTION 0x1008ded0 */
