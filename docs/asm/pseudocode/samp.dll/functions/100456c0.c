/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100456c0
 * Name: FUN_100456c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100456c0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x2d3) < param_2) {
    *(undefined4 *)(param_1 + 0x2cd) = 500;
  }
  else {
    *(uint *)(param_1 + 0x2cd) = param_2;
  }
  if (*(uint *)(param_1 + 0x2cd) < 0x1e) {
    *(undefined4 *)(param_1 + 0x2cd) = 0x1e;
  }
  uVar1 = (*(int *)(param_1 + 0x6ee) + *(int *)(param_1 + 0x6ea)) * 2;
  if (*(uint *)(param_1 + 0x2cd) < uVar1) {
    *(uint *)(param_1 + 0x2cd) = uVar1;
  }
  FUN_10043b30();
  return;
}


/* END FUNCTION 0x100456c0 */
