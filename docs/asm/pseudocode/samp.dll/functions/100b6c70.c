/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6c70
 * Name: FUN_100b6c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b6c70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((iVar1 != 0) &&
     (((((*(int *)(iVar1 + 0x460) != 0 || (*(int *)(iVar1 + 0x464) != 0)) ||
        (*(int *)(iVar1 + 0x468) != 0)) ||
       ((*(int *)(iVar1 + 0x46c) != 0 || (*(int *)(iVar1 + 0x470) != 0)))) ||
      ((*(int *)(iVar1 + 0x474) != 0 ||
       ((*(int *)(iVar1 + 0x478) != 0 || (*(int *)(iVar1 + 0x47c) != 0)))))))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100b6c70 */
