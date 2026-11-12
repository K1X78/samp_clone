/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100afed0
 * Name: FUN_100afed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100afed0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_48 [48];
  float local_18;
  float local_14;
  float local_10;
  
  puVar1 = (undefined4 *)(param_1 + 0x2c5);
  if (*(int *)(param_1 + 0x2c5) != 0) {
    FUN_100ad800();
  }
  FUN_1009e950(local_48);
  if (param_2 == 4) {
    FUN_100b1f10(&DAT_1011efa4,0x5cd,(double)local_18,(double)local_14,(double)local_10,puVar1);
    iVar2 = FUN_100b3830(*puVar1);
    if (iVar2 != 0) {
      FUN_100b1f10(&DAT_1011f238,*(undefined4 *)(param_1 + 0x44),*puVar1,0,0,0,6,0x10,&DAT_1011f320,
                   &DAT_1011f320,0xffffffff);
      *(undefined4 *)(param_1 + 0x2c1) = 4;
      return;
    }
  }
  else if (param_2 == 1) {
    FUN_100b1f10(&DAT_1011efa4,0x607,(double)local_18,(double)local_14,(double)local_10,puVar1);
    iVar2 = FUN_100b3830(*puVar1);
    if (iVar2 != 0) {
      FUN_100b1f10(&DAT_1011f238,*(undefined4 *)(param_1 + 0x44),*puVar1,0x3fa99999a0000000,
                   0x3f9eb851e0000000,0xbfd3333340000000,6,0x10,&DAT_1011f320,&DAT_1011f320,
                   0xffffffff);
      *(undefined4 *)(param_1 + 0x2c1) = 1;
      return;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        FUN_100b1f10(&DAT_1011efa4,0x60a,(double)local_18,(double)local_14,(double)local_10,puVar1);
        iVar2 = FUN_100b3830(*puVar1);
        if (iVar2 == 0) goto LAB_100b0117;
        FUN_100b1f10(&DAT_1011f238,*(undefined4 *)(param_1 + 0x44),*puVar1,0x3fa47ae140000000,
                     0x3fb99999a0000000,0xbf947ae140000000,6,0x10,&DAT_1011f320,&DAT_1011f320,
                     0xffffffff);
        *(undefined4 *)(param_1 + 0x2c1) = 3;
      }
      return;
    }
    FUN_100b1f10(&DAT_1011efa4,0x5ce,(double)local_18,(double)local_14,(double)local_10,puVar1);
    iVar2 = FUN_100b3830(*puVar1);
    if (iVar2 != 0) {
      FUN_100b1f10(&DAT_1011f238,*(undefined4 *)(param_1 + 0x44),*puVar1,0x3fa99999a0000000,
                   0x3f9eb851e0000000,0xbfa99999a0000000,6,0x10,&DAT_1011f320,&DAT_1011f320,
                   0xffffffff);
      *(undefined4 *)(param_1 + 0x2c1) = 2;
      return;
    }
  }
LAB_100b0117:
  *puVar1 = 0;
  return;
}


/* END FUNCTION 0x100afed0 */
