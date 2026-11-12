/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee2c0
 * Name: FUN_100ee2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ee2c0(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  if (param_2 == -1) {
    iVar2 = -1;
  }
  else {
    iVar2 = param_1[param_2 + 0x66];
  }
  param_1[0xcb] = iVar2;
  if (param_7 == -1) {
    iVar2 = -1;
  }
  else {
    iVar2 = param_1[param_7 + 0x66];
  }
  param_1[0xcc] = iVar2;
  *(undefined4 *)(iVar1 + 0x78) = param_6;
  *(undefined4 *)(iVar1 + 0x88) = param_8;
  *(int *)(iVar1 + 0x138) = param_5;
  *(int *)(iVar1 + 0x70) = param_3;
  *(int *)(iVar1 + 0x74) = param_4;
  if (((param_5 == 0) && (*(undefined4 *)(iVar1 + 0xb8) = 0, -1 < param_4)) &&
     ((0 < param_4 || (param_3 != 0)))) {
    FUN_100e3330(iVar1,param_3,param_4);
  }
  if ((*(int *)(iVar1 + 0x138) != 0) || (*(int *)(iVar1 + 0x53c) == 0)) {
    if (param_1[0xcb] != -1) {
      *(uint *)(iVar1 + 0x110) = *(uint *)(iVar1 + 0x110) | 1;
    }
    if (param_1[0xcc] != -1) {
      if (*(int *)(iVar1 + 0x4ac8) != 0) {
        if (((*(byte *)(param_1[200] + 0x40) & 3) != 0) &&
           (*(int *)(*(int *)(iVar1 + 0x140) + 0x1b0) == 2)) {
          *(undefined4 *)(iVar1 + 0xf4) = 1;
          uVar3 = FUN_100d8500();
          *(undefined8 *)(iVar1 + 0xec) = uVar3;
          FUN_100d66d0(iVar1,*(undefined4 *)(iVar1 + 0x6e4),0);
          return;
        }
        if (*(int *)(iVar1 + 0x4ac8) != 0) {
          *(undefined4 *)(iVar1 + 0xf4) = 2;
        }
      }
      *(uint *)(iVar1 + 0x110) = *(uint *)(iVar1 + 0x110) | 2;
    }
  }
  return;
}


/* END FUNCTION 0x100ee2c0 */
