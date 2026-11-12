/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abe20
 * Name: FUN_100abe20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100abe20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  if ((*(char *)(iVar1 + 0x530) == '2') && (iVar2 = *(int *)(iVar1 + 0x58c), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0x460) == iVar1) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x464) == iVar1) {
      return 1;
    }
    if (*(int *)(iVar2 + 0x468) == iVar1) {
      return 2;
    }
    if (*(int *)(iVar2 + 0x46c) == iVar1) {
      return 3;
    }
    if (*(int *)(iVar2 + 0x470) == iVar1) {
      return 4;
    }
    if (*(int *)(iVar2 + 0x474) == iVar1) {
      return 5;
    }
    if (*(int *)(iVar2 + 0x478) == iVar1) {
      return 6;
    }
    if (*(int *)(iVar2 + 0x47c) == iVar1) {
      return 7;
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x100abe20 */
