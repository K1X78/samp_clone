/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0dd0
 * Name: FUN_100d0dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d0dd0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1[0xa7] != 0) {
    if (param_1[0xa6] == 0) {
      if (param_1[0xa3] == 0) {
        if (param_2 == 1) {
          uVar1 = param_1[0x2a];
        }
        else {
          uVar1 = param_1[0x28];
        }
      }
      else {
        uVar1 = param_1[0x2d];
      }
    }
    else {
      uVar1 = param_1[0x39];
    }
    if (param_1[0xa6] == 0) {
      if (param_2 == 1) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x42);
      }
      else if (param_1[0xa4] == 0) {
        uVar2 = param_1[0x40];
      }
      else {
        uVar2 = param_1[0x41];
      }
    }
    else {
      uVar2 = param_1[0x3b];
    }
    param_1[0xc3] = 1;
    switch(param_1[0x34]) {
    case 4:
    case 6:
      uVar1 = FUN_100e91d0(param_1[0x35],uVar1,uVar2,param_2,param_1);
      param_1[0xc3] = 0;
      return uVar1;
    case 5:
    case 7:
      uVar1 = FUN_100e96e0(param_1[0x35],param_1[0x36],uVar1,uVar2,param_2,param_1);
      param_1[0xc3] = 0;
      return uVar1;
    default:
      FUN_100d8ba0(*param_1,"unknown proxytype option given");
      uVar1 = 7;
      param_1[0xc3] = 0;
    }
  }
  return uVar1;
}


/* END FUNCTION 0x100d0dd0 */
