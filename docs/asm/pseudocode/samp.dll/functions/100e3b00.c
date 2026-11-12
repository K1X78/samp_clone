/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3b00
 * Name: FUN_100e3b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e3b00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x720) = 0;
  iVar2 = FUN_100e33f0(param_1);
  if (iVar2 == 0) {
    if (((*(byte *)(iVar1 + 0x758) & 0x10) == 0) && (*(int *)(iVar1 + 0x750) == 0)) {
      FUN_100cd390(*(undefined4 *)(iVar1 + 0x148),&DAT_10118ae0);
    }
    *(undefined4 *)(iVar1 + 0x830) = 0;
    iVar2 = 0;
  }
  return iVar2;
}


/* END FUNCTION 0x100e3b00 */
