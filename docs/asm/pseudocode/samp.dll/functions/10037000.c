/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037000
 * Name: FUN_10037000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x10037020) */

void __fastcall FUN_10037000(int param_1)

{
  undefined4 uVar1;
  
  FUN_10036bc0();
  uVar1 = 0;
  (**(code **)(**(int **)(param_1 + 4) + 8))(0,0,0);
  (**(code **)(**(int **)(param_1 + 4) + 4))(8,uVar1,0xfa,0);
  return;
}


/* END FUNCTION 0x10037000 */
