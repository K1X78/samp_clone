/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6fa0
 * Name: FUN_100b6fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b6fa0(int param_1)

{
  short sVar1;
  
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     ((((sVar1 = *(short *)(*(int *)(param_1 + 0x4c) + 0x22), sVar1 == 0x21a || (sVar1 == 0x23a)) ||
       (sVar1 == 0x219)) || ((sVar1 == 0x239 || (sVar1 == 0x1c1)))))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100b6fa0 */
