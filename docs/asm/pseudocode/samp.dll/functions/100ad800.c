/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad800
 * Name: FUN_100ad800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ad800(int param_1)

{
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x2c5) != 0) {
    FUN_100b1f10(&DAT_1011f238,*(undefined4 *)(param_1 + 0x44),*(int *)(param_1 + 0x2c5),0,0,0,6,
                 0x10,&DAT_1011f320,&DAT_1011f320,0);
    *(undefined4 *)(param_1 + 0x2c5) = 0;
  }
  FUN_1009e950(local_40);
  FUN_1009ee80(local_10,local_c,local_8);
  *(undefined4 *)(param_1 + 0x2c1) = 0;
  return;
}


/* END FUNCTION 0x100ad800 */
