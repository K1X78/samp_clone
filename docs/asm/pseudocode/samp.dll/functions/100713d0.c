/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100713d0
 * Name: FUN_100713d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100713d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_10086cf0(0x1e,5);
    if (*(int *)(iVar1 + 0x4d) != 0) {
      FUN_10072f00(0,(float)*(int *)(iVar1 + 0x4d) * 0.001);
    }
    iVar1 = FUN_10086cf0(0x20,5);
    if (*(int *)(iVar1 + 0x4d) != 0) {
      FUN_10072f00(1,(float)*(int *)(iVar1 + 0x4d) * 0.001);
    }
    iVar1 = FUN_10086cf0(0x22,5);
    if (*(int *)(iVar1 + 0x4d) != 0) {
      FUN_10072f00(2,(float)*(int *)(iVar1 + 0x4d) * 0.001);
    }
  }
  return;
}


/* END FUNCTION 0x100713d0 */
