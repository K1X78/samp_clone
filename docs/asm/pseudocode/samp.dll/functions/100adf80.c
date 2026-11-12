/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100adf80
 * Name: FUN_100adf80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100adf80(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if ((*(int *)(param_1 + 0x2a4) != 0) &&
     (iVar2 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44)), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0x2a4);
    if (param_2 != (char *)0x0) {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 != param_2 + 1) {
        pcVar3 = param_2;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (0x1f < (uint)((int)pcVar3 - (int)(param_2 + 1))) {
          return;
        }
        _DAT_102a9280 = 0;
        _DAT_102a9284 = 0;
        _DAT_102a9288 = 0;
        _DAT_102a928c = 0;
        _DAT_102a9290 = 0;
        _DAT_102a9294 = 0;
        _DAT_102a9298 = 0;
        _DAT_102a929c = 0;
        _strncpy(&DAT_102a9280,param_2,0x20);
        *(undefined **)(iVar2 + 0x78c) = &DAT_102a9280;
        return;
      }
    }
    *(undefined1 *)(iVar2 + 0x78c) = 0;
  }
  return;
}


/* END FUNCTION 0x100adf80 */
