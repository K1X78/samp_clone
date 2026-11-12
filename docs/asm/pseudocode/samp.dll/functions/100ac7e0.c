/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac7e0
 * Name: FUN_100ac7e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ac7e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_1009f210();
    if (iVar1 != 0) {
      iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
      if (iVar1 != 0) {
        (*(code *)0x5e4390)(param_2,1);
      }
    }
  }
  return;
}


/* END FUNCTION 0x100ac7e0 */
