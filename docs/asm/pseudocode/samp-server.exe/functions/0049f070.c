/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f070
 * Name: FUN_0049f070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall FUN_0049f070(void *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049ed40(param_1,param_2);
  if ((-1 < iVar1) && (*(int *)(iVar1 * 0x3d + 0x2d + (int)param_1) == 3)) {
    return (float10)*(float *)((int)param_1 + iVar1 * 0x3d + 0x35);
  }
  return (float10)0.0;
}


/* END FUNCTION 0x0049f070 */
