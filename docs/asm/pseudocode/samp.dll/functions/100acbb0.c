/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100acbb0
 * Name: FUN_100acbb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100acbb0(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x46c) & 0x100) != 0)) && (*(int *)(iVar1 + 0x58c) != 0))
  {
    cVar2 = FUN_100ab870();
    if (cVar2 != '.') {
      FUN_100abc80(cVar2,0);
      FUN_100b1f10(&DAT_1011f030,*(undefined4 *)(param_1 + 0x44),0xffffffff,0xffffffff,0,0,0,
                   0x4072c00000000000,8,1,0x14);
      return 1;
    }
    FUN_100abc80(0,0);
  }
  return 0;
}


/* END FUNCTION 0x100acbb0 */
