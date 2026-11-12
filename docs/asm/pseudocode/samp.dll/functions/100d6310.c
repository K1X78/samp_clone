/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6310
 * Name: FUN_100d6310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d6310(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if (param_2 < 0x271c) {
    if (param_2 == 0x271b) {
      uVar1 = FUN_100e8d00();
      return uVar1;
    }
    if (param_2 < 9) {
      if (param_2 == 8) {
        param_1[0x2e] = param_3;
        return uVar1;
      }
      if (param_2 == 3) {
        param_1[0x1e] = param_3;
        return uVar1;
      }
      if (param_2 == 6) {
        param_1[0x2b] = param_3;
        return uVar1;
      }
      if (param_2 == 7) {
        param_1[0x2c] = param_3;
        return uVar1;
      }
    }
    else {
      if (param_2 == 0xd) {
        param_1[0x2d] = param_3;
        return uVar1;
      }
      if (param_2 == 0x2712) {
        param_1[0xe] = param_3;
        return uVar1;
      }
      if (param_2 == 0x2715) {
        param_1[0x3a] = param_3;
        return uVar1;
      }
    }
  }
  else if (param_2 < 0x4e25) {
    if (param_2 == 0x4e24) {
      param_1[0x39] = param_3;
      return uVar1;
    }
    if (param_2 == 0x271c) {
      uVar1 = FUN_100e8e50();
      return uVar1;
    }
    if (param_2 == 0x271f) {
      param_1[0x10] = param_3;
      return uVar1;
    }
    if (param_2 == 0x4e21) {
      param_1[0xd] = param_3;
      return uVar1;
    }
  }
  else {
    if (param_2 == 0x4e2e) {
      param_1[0xf] = param_3;
      return uVar1;
    }
    if (param_2 == 0x7539) {
      param_1[0x2f] = param_3;
      return uVar1;
    }
    if (param_2 == 0x753a) {
      param_1[0x30] = param_3;
      return uVar1;
    }
  }
  return 6;
}


/* END FUNCTION 0x100d6310 */
