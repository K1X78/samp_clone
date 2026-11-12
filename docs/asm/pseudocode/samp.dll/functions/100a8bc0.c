/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8bc0
 * Name: FUN_100a8bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a8bc0(int param_1)

{
  int iVar1;
  undefined1 local_4c [12];
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(int **)(param_1 + 0x40) != (int *)0x0) && (**(int **)(param_1 + 0x40) != 0x863c40)) {
    FUN_1009e950(local_40);
    iVar1 = FUN_100b5f50(*(undefined4 *)(param_1 + 0x4e),local_4c);
    if (iVar1 != 0) {
      FUN_100b4850(param_1 + 0x5c,local_40,local_4c);
      return;
    }
    *(undefined4 *)(param_1 + 0x5c) = local_10;
    *(undefined4 *)(param_1 + 0x60) = local_c;
    *(undefined4 *)(param_1 + 100) = local_8;
  }
  return;
}


/* END FUNCTION 0x100a8bc0 */
