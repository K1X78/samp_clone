/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ddbc0
 * Name: FUN_100ddbc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ddbc0(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    (**(code **)(param_1 + 0x1c))(*(undefined4 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x20) = param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 != (char *)0x0) {
    if (param_3 == 0xffffffff) {
      pcVar2 = param_2;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      param_3 = (int)pcVar2 - (int)(param_2 + 1);
    }
    pcVar2 = (char *)(*(code *)PTR__malloc_101554b8)(param_3 + 1);
    *(char **)(param_1 + 0x10) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      return 0x1b;
    }
    *(uint *)(param_1 + 0x40) = param_3;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (param_3 != 0) {
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar2 = *param_2;
        param_2 = param_2 + 1;
        pcVar2 = pcVar2 + 1;
      }
    }
    *(undefined1 *)(param_3 + *(int *)(param_1 + 0x10)) = 0;
    *(undefined1 **)(param_1 + 0x14) = &LAB_100dd160;
    *(undefined1 **)(param_1 + 0x18) = &LAB_100dd1a0;
    *(code **)(param_1 + 0x1c) = FUN_100dd200;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return 0;
}


/* END FUNCTION 0x100ddbc0 */
