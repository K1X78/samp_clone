/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100011d0
 * Name: FUN_100011d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100011d0(int param_1,ushort param_2,char *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9,
            undefined2 param_10,undefined2 param_11)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  if (param_2 < 0x800) {
    uVar5 = (uint)param_2;
    if (*(int *)(param_1 + 0xe800 + uVar5 * 4) != 0) {
      puVar1 = (undefined4 *)(uVar5 * 0x1d + param_1);
      if ((void *)*puVar1 != (void *)0x0) {
        _free((void *)*puVar1);
      }
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
    }
    pcVar3 = param_3;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pcVar3 = _calloc(1,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    puVar1 = (undefined4 *)(uVar5 * 0x1d + param_1);
    *puVar1 = pcVar3;
    do {
      cVar2 = *param_3;
      param_3 = param_3 + 1;
      *pcVar3 = cVar2;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pcVar3 = (char *)*puVar1;
    pcVar4 = pcVar3;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if ((uint)((int)pcVar4 - (int)(pcVar3 + 1)) < 400) {
      FUN_100b5c40(pcVar3,399);
    }
    puVar1[1] = param_4 << 0x18 | param_4 >> 8;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    puVar1[4] = param_7;
    puVar1[5] = param_8;
    *(undefined1 *)(puVar1 + 6) = param_9;
    *(undefined2 *)((int)puVar1 + 0x19) = param_10;
    *(undefined2 *)((int)puVar1 + 0x1b) = param_11;
    *(undefined4 *)(param_1 + 0xe800 + uVar5 * 4) = 1;
  }
  return;
}


/* END FUNCTION 0x100011d0 */
