/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100691b0
 * Name: FUN_100691b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100691b0(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x14dc) < 0x90) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar2 - (int)(param_2 + 1)) < 0x20) {
      *(undefined4 *)(param_1 + 0xc + *(int *)(param_1 + 0x14dc) * 4) = param_3;
      pcVar2 = (char *)(*(int *)(param_1 + 0x14dc) * 0x21 + 0x24c + param_1);
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      *(int *)(param_1 + 0x14dc) = *(int *)(param_1 + 0x14dc) + 1;
    }
  }
  return;
}


/* END FUNCTION 0x100691b0 */
