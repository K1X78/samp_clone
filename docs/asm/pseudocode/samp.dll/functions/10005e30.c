/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005e30
 * Name: FUN_10005e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10005e30(int param_1)

{
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x30a) != 0) {
    *(undefined4 *)(param_1 + 0x143) = 0;
    FUN_1009e950(local_40);
    if (*(int *)(param_1 + 0x302) == *(int *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x23) + -1) {
      *(undefined4 *)(param_1 + 0x302) = 0;
    }
    else {
      *(int *)(param_1 + 0x302) = *(int *)(param_1 + 0x302) + 1;
    }
    FUN_100a20e0(0x41c,local_10,local_c,local_8);
    FUN_10005720(*(undefined4 *)(param_1 + 0x302));
  }
  return;
}


/* END FUNCTION 0x10005e30 */
