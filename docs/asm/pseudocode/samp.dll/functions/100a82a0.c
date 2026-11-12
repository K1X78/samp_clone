/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a82a0
 * Name: FUN_100a82a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100a82a0(int param_1,int param_2,char *param_3,undefined1 param_4,char *param_5,
            undefined1 param_6,char param_7,undefined4 param_8,undefined4 param_9,
            undefined1 param_10)

{
  char cVar1;
  int *piVar2;
  void *_Memory;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_2 < 0x11) {
    iVar4 = *(int *)(param_1 + 0x217 + param_2 * 4);
    if (iVar4 != 0) {
      FUN_100b3560(iVar4);
      *(undefined4 *)(param_1 + 0x217 + param_2 * 4) = 0;
      if (*(int *)(param_1 + 0x110b + param_2 * 4) != 0) {
        *(undefined4 *)(param_1 + 0x110b + param_2 * 4) = 0;
      }
    }
    piVar2 = *(int **)(param_1 + 0x114b + param_2 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(param_1 + 0x114b + param_2 * 4) = 0;
      *(undefined4 *)(param_1 + 0x31b + param_2 * 4) = 0;
    }
    _Memory = *(void **)(param_1 + 0x10cb + param_2 * 4);
    if (_Memory != (void *)0x0) {
      _free(_Memory);
      *(undefined4 *)(param_1 + 0x10cb + param_2 * 4) = 0;
    }
    uVar3 = FUN_100b12d0(2,2,0,0);
    iVar4 = FUN_100b1320(uVar3);
    *(int *)(param_1 + 0x217 + param_2 * 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
      pcVar5 = param_3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = _calloc(1,(size_t)(pcVar5 + (1 - (int)(param_3 + 1))));
      *(char **)(param_1 + 0x10cb + param_2 * 4) = pcVar5;
      do {
        cVar1 = *param_3;
        param_3 = param_3 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = param_2 * 0xd7 + param_1;
      *(char *)((param_2 + 4) * 0xd7 + param_1) = (char)param_2;
      *(undefined1 *)(iVar4 + 0x3e5) = param_4;
      iVar6 = (iVar4 + 0x3e6) - (int)param_5;
      do {
        cVar1 = *param_5;
        param_5[iVar6] = cVar1;
        param_5 = param_5 + 1;
      } while (cVar1 != '\0');
      *(undefined1 *)(iVar4 + 0x427) = param_6;
      *(bool *)(iVar4 + 0x428) = param_7 != '\0';
      *(undefined4 *)(iVar4 + 0x429) = param_8;
      *(undefined4 *)(iVar4 + 0x42d) = param_9;
      *(undefined1 *)(iVar4 + 0x431) = param_10;
      *(undefined4 *)(param_1 + 599 + param_2 * 4) = 0;
      *(undefined4 *)(param_1 + 0x2db + param_2 * 4) = 2;
      iVar4 = **(int **)(param_1 + 0x217 + param_2 * 4);
      if (iVar4 != 0) {
        uVar3 = FUN_100b1130(iVar4);
        *(undefined4 *)(param_1 + 0x110b + param_2 * 4) = uVar3;
      }
      *(undefined4 *)(param_1 + 0x118b) = 1;
    }
  }
  return;
}


/* END FUNCTION 0x100a82a0 */
