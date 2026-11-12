/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110df0
 * Name: FUN_10110df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_10110df0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int *param_5,int *param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = (char *)FUN_10111170(param_1,1);
  iVar2 = FUN_10111170(param_2,0);
  iVar3 = FUN_10111170(param_3,0);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = pcVar1;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar3;
  }
  if (((pcVar1 == (char *)0x0) || (iVar3 == 0)) || (iVar2 == 0)) {
    uVar4 = 0;
  }
  else if ((*pcVar1 == -0x70) && (pcVar1[1] == -0x70)) {
    uVar4 = FUN_101109e0(iVar2,pcVar1,iVar3);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


/* END FUNCTION 0x10110df0 */
