/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac630
 * Name: FUN_100ac630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ac630(int param_1)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined1 local_34 [52];
  
  if ((*(int *)(param_1 + 0x2a4) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 0x100) == 0)) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x2a4);
      local_4c = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x30);
      local_48 = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x34);
      local_44 = *(float *)(*(int *)(iVar1 + 0x14) + 0x38) - 0.25;
      local_38 = local_44 - 1.75;
      local_40 = local_4c;
      local_3c = local_48;
      FUN_100b3710(&local_4c,&local_40,local_34,&local_50,0,1,0,1,0,0,0,0);
      return local_50;
    }
  }
  return 0;
}


/* END FUNCTION 0x100ac630 */
