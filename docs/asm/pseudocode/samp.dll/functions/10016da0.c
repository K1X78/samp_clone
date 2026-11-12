/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10016da0
 * Name: FUN_10016da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10016da0(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_3 == 0) || (-1 < param_3 - *(int *)(param_1 + 0x1c9))) {
    *(int *)(param_1 + 0x1c9) = param_3;
    puVar4 = param_2;
    puVar5 = (undefined4 *)(param_1 + 0x3c);
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(float *)(param_1 + 0x1b0) = (float)*(byte *)((int)param_2 + 0x22);
    bVar1 = *(byte *)((int)param_2 + 0x23);
    *(undefined1 *)(param_1 + 0x1c4) = 0x10;
    *(float *)(param_1 + 0x1ac) = (float)bVar1;
    DVar2 = GetTickCount();
    *(DWORD *)(param_1 + 0x1c5) = DVar2;
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((int)param_2 + 0x25);
    if (*(int *)(param_1 + 0x7c) < 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      iVar3 = FUN_100aba90();
      if (((iVar3 != 0) && (*(char *)(param_1 + 0x18) != '\x03')) &&
         (*(char *)(param_1 + 0x18) != '\x04')) {
        iVar3 = FUN_100ac260();
        if (iVar3 == 0) {
          FUN_10014730();
        }
      }
    }
    if (*(char *)(param_1 + 0x1a) != '\x11') {
      *(undefined1 *)(param_1 + 0x1a) = 0x11;
    }
  }
  return;
}


/* END FUNCTION 0x10016da0 */
