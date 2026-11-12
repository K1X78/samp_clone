/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008a470
 * Name: FUN_1008a470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1008a470(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x143);
    *(int *)(param_1 + 0x143) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x143) = 0;
    }
    if (iVar1 <= *(int *)(param_1 + 0x143)) {
      *(int *)(param_1 + 0x143) = iVar1 + -1;
    }
    if (iVar2 != *(int *)(param_1 + 0x143)) {
      if ((*(byte *)(param_1 + 0x13f) & 1) != 0) {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14c) + *(int *)(param_1 + 0x143) * 4) + 0x298)
             = 1;
      }
      *(undefined4 *)(param_1 + 0x147) = *(undefined4 *)(param_1 + 0x143);
      FUN_10084e30(*(undefined4 *)(param_1 + 0x143));
    }
    FUN_10084460(0x702,1,param_1);
  }
  return;
}


/* END FUNCTION 0x1008a470 */
