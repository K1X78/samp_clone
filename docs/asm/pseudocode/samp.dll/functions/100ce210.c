/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce210
 * Name: FUN_100ce210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ce210(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_100e0d50(param_1[0x156]);
  if (iVar1 != 0) {
    iVar1 = param_1[0x156];
    uVar3 = FUN_100e0c10(param_1,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  param_1[0x154] = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1[0x153];
  }
  if (param_1[0x153] == 0) {
    if (param_1[0xa6] == 0) {
      pcVar2 = "host";
      uVar3 = 6;
    }
    else {
      pcVar2 = "proxy";
      uVar3 = 5;
    }
    FUN_100d8ba0(*param_1,"Could not resolve %s: %s",pcVar2,param_1[0x151]);
  }
  FUN_100ce050(param_1 + 0x151);
  if (param_1[0x153] == 0) {
    FUN_100dc080(param_1,1);
  }
  return uVar3;
}


/* END FUNCTION 0x100ce210 */
