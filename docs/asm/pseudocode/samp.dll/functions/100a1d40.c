/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1d40
 * Name: FUN_100a1d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a1d40(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 local_c [2];
  
  if (*(int *)(param_1 + 0x4d) == 0) {
    if (*(int *)(param_1 + 0x51) != 0) {
      FUN_100b1f10(&DAT_1011e6b4,*(int *)(param_1 + 0x51));
      *(undefined4 *)(param_1 + 0x51) = 0;
    }
  }
  else {
    iVar1 = FUN_10001010();
    if (iVar1 != 0) {
      FUN_100b1f10(&DAT_1011e72c,*(undefined4 *)(iVar1 + 0x44),(double)*(float *)(param_1 + 0x35),
                   (double)*(float *)(param_1 + 0x39),(double)*(float *)(param_1 + 0x3d),
                   (double)*(float *)(param_1 + 0x41),(double)*(float *)(param_1 + 0x45),
                   (double)*(float *)(param_1 + 0x49),1);
      if (*(int *)(param_1 + 0x51) == 0) {
        local_c[0] = 0;
        FUN_100b1f10(&DAT_1011e6dc,(double)*(float *)(param_1 + 0x35),
                     (double)*(float *)(param_1 + 0x39),(double)*(float *)(param_1 + 0x3d),0,local_c
                    );
        uVar3 = CONCAT44(0x3ed,local_c[0]);
        puVar2 = &DAT_1011e6c8;
        FUN_100b1f10();
        FUN_100b1f10(&DAT_1011e6f0,local_c[0],3,puVar2,uVar3);
        *(undefined4 *)(param_1 + 0x51) = local_c[0];
      }
    }
  }
  if (*(int *)(param_1 + 0x29) == 0) {
    if (*(int *)(param_1 + 0x2d) != 0) {
      FUN_100b1f10(&DAT_1011e6b4,*(int *)(param_1 + 0x2d));
      if (*(int *)(param_1 + 0x31) != 0) {
        FUN_100b1f10(&DAT_1011e77c,*(int *)(param_1 + 0x31));
        *(undefined4 *)(param_1 + 0x31) = 0;
      }
      *(undefined4 *)(param_1 + 0x29) = 0;
      *(undefined4 *)(param_1 + 0x2d) = 0;
    }
  }
  else {
    iVar1 = FUN_10001010();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x2d) == 0)) {
      local_c[0] = 0;
      FUN_100b1f10(&DAT_1011e6dc,(double)*(float *)(param_1 + 0xc),
                   (double)*(float *)(param_1 + 0x10),(double)*(float *)(param_1 + 0x14),0,local_c);
      uVar3 = CONCAT44(0x3ed,local_c[0]);
      puVar2 = &DAT_1011e6c8;
      FUN_100b1f10();
      FUN_100b1f10(&DAT_1011e6f0,local_c[0],3,puVar2,uVar3);
      *(undefined4 *)(param_1 + 0x2d) = local_c[0];
      return;
    }
  }
  return;
}


/* END FUNCTION 0x100a1d40 */
