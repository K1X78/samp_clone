/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7e10
 * Name: FUN_100b7e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7e10(int param_1,float param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if (((iVar1 != 0) && (param_2 <= 1.0)) && (-1.0 <= param_2)) {
      *(float *)(*(int *)(param_1 + 0x4c) + 0x64c) = param_2;
    }
  }
  return;
}


/* END FUNCTION 0x100b7e10 */
