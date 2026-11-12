/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110ec0
 * Name: FUN_10110ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_10110ec0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  pcVar1 = (char *)FUN_10111170(param_1,1);
  iVar2 = FUN_10111170(param_2,0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = pcVar1;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((pcVar1 == (char *)0x0) || (iVar2 == 0)) {
    uVar4 = 0;
  }
  else if (((*pcVar1 == -0x70) &&
           (((pcVar1[1] == -0x70 && (pcVar1[2] == -0x18)) && (pcVar1[7] == -1)))) &&
          (pcVar1[8] == -0x20)) {
    uVar3 = 0;
    uVar4 = (*(code *)(pcVar1 + *(int *)(pcVar1 + 3) + 7))(0,uVar4);
    uVar4 = FUN_10111170(uVar4,uVar3);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar4;
    }
    uVar4 = FUN_101109e0(uVar4,pcVar1,iVar2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


/* END FUNCTION 0x10110ec0 */
