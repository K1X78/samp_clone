/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac3b0
 * Name: FUN_100ac3b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ac3b0(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
  if (iVar1 != 0) {
    if (param_2 == 0) {
      FUN_100b1f10(&DAT_1011ef2c,*(undefined1 *)(param_1 + 0x2b0),0);
      FUN_100b1f10(&DAT_1011f044,*(undefined4 *)(param_1 + 0x44),1);
      return;
    }
    FUN_100b1f10(&DAT_1011ef2c,*(undefined1 *)(param_1 + 0x2b0),1);
    FUN_100b1f10(&DAT_1011f044,*(undefined4 *)(param_1 + 0x44),0);
    if ((*(int *)(param_1 + 0x2a4) == 0) ||
       ((*(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 0x100) == 0)) {
      FUN_1009e950(local_40);
      FUN_1009ee80(local_10,local_c,local_8);
    }
  }
  return;
}


/* END FUNCTION 0x100ac3b0 */
