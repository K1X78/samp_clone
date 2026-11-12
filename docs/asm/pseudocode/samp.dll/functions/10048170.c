/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10048170
 * Name: FUN_10048170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10048170(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_100478d0(param_2,&param_2);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x23) = 0;
    *(undefined4 *)(param_2 + 0x27) = 0;
    return *(undefined4 *)(param_2 + 0x33);
  }
  *(int *)(param_1 + 0x3c7) = *(int *)(param_1 + 0x3c7) + 1;
  return 0xffffffff;
}


/* END FUNCTION 0x10048170 */
