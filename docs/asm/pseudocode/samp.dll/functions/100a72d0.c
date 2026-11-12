/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a72d0
 * Name: FUN_100a72d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __thiscall FUN_100a72d0(int param_1,byte param_2,byte param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = ((uint)param_3 + (uint)param_2 * 2) * 0x20;
  pcVar2 = &DAT_1013c0c8 + iVar1;
  if (*(char *)(iVar1 + 0x21 + param_1) == '\0') {
    pcVar2 = "DUMMY";
  }
  return pcVar2;
}


/* END FUNCTION 0x100a72d0 */
