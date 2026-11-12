/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10091400
 * Name: FUN_10091400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10091400(int param_1,int *param_2,char param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x208) == 0) {
    return 0x80004005;
  }
  if ((param_3 != '\0') && (uVar1 = 0, *(int *)(param_1 + 0x20c) != 0)) {
    iVar2 = 0;
    do {
      if (*(char *)(param_1 + 0x218) == '\0') {
LAB_10091476:
        (**(code **)(**(int **)(param_1 + 0x208) + 0xc))(*(int **)(param_1 + 0x208),uVar1);
      }
      else if (1.0 <= *(float *)(*(int *)(param_1 + 0x210) + 0xc + iVar2)) {
        (**(code **)(*param_2 + 0xc4))(param_2,*(int *)(param_1 + 0x210) + iVar2);
        (**(code **)(*param_2 + 0x104))
                  (param_2,0,*(undefined4 *)(*(int *)(param_1 + 0x214) + uVar1 * 4));
        goto LAB_10091476;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x44;
    } while (uVar1 < *(uint *)(param_1 + 0x20c));
  }
  if (((param_4 != '\0') && (*(char *)(param_1 + 0x218) != '\0')) &&
     (uVar1 = 0, *(int *)(param_1 + 0x20c) != 0)) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x210) + 0xc + iVar2) != 0x3f800000) {
        (**(code **)(*param_2 + 0xc4))(param_2,*(int *)(param_1 + 0x210) + iVar2);
        (**(code **)(*param_2 + 0x104))
                  (param_2,0,*(undefined4 *)(*(int *)(param_1 + 0x214) + uVar1 * 4));
        (**(code **)(**(int **)(param_1 + 0x208) + 0xc))(*(int **)(param_1 + 0x208),uVar1);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x44;
    } while (uVar1 < *(uint *)(param_1 + 0x20c));
  }
  return 0;
}


/* END FUNCTION 0x10091400 */
