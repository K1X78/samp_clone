/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100afc80
 * Name: FUN_100afc80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100afc80(int param_1,undefined1 param_2,ushort param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100acdb0(param_2);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0xc) = (uint)param_3;
    }
  }
  return;
}


/* END FUNCTION 0x100afc80 */
