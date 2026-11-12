/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100438e0
 * Name: FUN_100438e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100438e0(int param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  *(undefined8 *)(param_1 + 0x6e2) = param_2;
  *(int *)(param_1 + 0x6ea) = param_3;
  *(int *)(param_1 + 0x6ee) = param_4;
  uVar1 = (param_3 + param_4) * 2;
  if (*(uint *)(param_1 + 0x2cd) < uVar1) {
    *(uint *)(param_1 + 0x2cd) = uVar1;
  }
  return;
}


/* END FUNCTION 0x100438e0 */
