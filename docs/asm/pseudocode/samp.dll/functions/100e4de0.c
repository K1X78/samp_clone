/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4de0
 * Name: FUN_100e4de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e4de0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (((param_1[0xa6] == 0) || (param_1[0xa9] == 0)) && (param_1[0xa8] == 0)) {
    *(undefined4 *)(iVar2 + 0x4968) = 1;
    *(undefined4 *)(iVar2 + 0x4980) = 1;
    return 0;
  }
  iVar1 = *(int *)(iVar2 + 0x495c);
  if ((iVar1 != 0) && (*(int *)(iVar2 + 0x4960) == 0)) {
    *(int *)(iVar2 + 0x4960) = iVar1;
  }
  iVar1 = *(int *)(iVar2 + 0x4974);
  if ((iVar1 != 0) && (*(int *)(iVar2 + 0x4978) == 0)) {
    *(int *)(iVar2 + 0x4978) = iVar1;
  }
  if ((param_1[0xa6] == 0) || (param_1[0xb1] != param_4)) {
    *(undefined4 *)(iVar2 + 0x4980) = 1;
  }
  else {
    iVar1 = FUN_100e4c40((int *)(iVar2 + 0x4974),param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if ((((*(int *)(iVar2 + 0x4868) != 0) && (param_1[0xb7] == 0)) && (*(int *)(iVar2 + 0x486c) != 0))
     && ((*(int *)(iVar2 + 0x52c) == 0 &&
         (iVar1 = FUN_100de830(*(int *)(iVar2 + 0x486c),param_1[0x28]), iVar1 == 0)))) {
    *(undefined4 *)(iVar2 + 0x4968) = 1;
    return 0;
  }
  iVar2 = FUN_100e4c40((int *)(iVar2 + 0x495c),param_2,param_3);
  return iVar2;
}


/* END FUNCTION 0x100e4de0 */
