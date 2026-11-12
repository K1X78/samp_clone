/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f5190
 * Name: FUN_100f5190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_100f5190(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,int param_12,int *param_13,int *param_14)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  int *piVar4;
  
  iVar3 = (*(code *)PTR__calloc_101554c8)(1,0x40);
  if (iVar3 == 0) {
    return 0;
  }
  *(char **)(iVar3 + 4) = param_1;
  if (param_1 == (char *)0x0) {
    param_2 = 0;
  }
  else if (param_2 == 0) {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    param_2 = (int)param_1 - (int)pcVar1;
  }
  *(int *)(iVar3 + 8) = param_2;
  *(undefined4 *)(iVar3 + 0xc) = param_3;
  *(undefined4 *)(iVar3 + 0x38) = param_4;
  *(undefined4 *)(iVar3 + 0x3c) = param_5;
  *(undefined4 *)(iVar3 + 0x14) = param_6;
  *(undefined4 *)(iVar3 + 0x18) = param_7;
  *(undefined4 *)(iVar3 + 0x1c) = param_8;
  *(undefined4 *)(iVar3 + 0x20) = param_9;
  *(undefined4 *)(iVar3 + 0x2c) = param_10;
  *(undefined4 *)(iVar3 + 0x30) = param_11;
  *(uint *)(iVar3 + 0x28) = in_EAX | 0x80;
  if (param_12 == 0) {
    piVar4 = (int *)*param_14;
    if ((int *)*param_14 == (int *)0x0) {
      piVar4 = param_13;
    }
    *piVar4 = iVar3;
    *param_14 = iVar3;
    return iVar3;
  }
  *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_12 + 0x24);
  *(int *)(param_12 + 0x24) = iVar3;
  return iVar3;
}


/* END FUNCTION 0x100f5190 */
