/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abbe0
 * Name: FUN_100abbe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100abbe0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  iVar2 = *(int *)(iVar1 + 0x58c);
  if (((iVar2 != 0) && ((*(uint *)(iVar1 + 0x46c) & 0x100) != 0)) &&
     ((*(int *)(iVar2 + 0x460) != iVar1 ||
      ((*(short *)(iVar2 + 0x22) == 0x23a || (*(short *)(iVar2 + 0x22) == 0x239)))))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100abbe0 */
