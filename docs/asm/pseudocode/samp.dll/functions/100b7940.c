/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7940
 * Name: FUN_100b7940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b7940(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar2 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if ((iVar2 != 0) &&
       ((((sVar1 = *(short *)(*(int *)(param_1 + 0x4c) + 0x22), sVar1 == 0x1b9 || (sVar1 == 0x1d0))
         || (sVar1 == 0x1d1)) || (((sVar1 == 0x252 || (sVar1 == 0x1f5)) || (sVar1 == 0x234)))))) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b7940 */
