/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d2a0
 * Name: FUN_0046d2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_0046d2a0(undefined4 *param_1,int *param_2,undefined1 *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = (undefined1 *)*param_1;
  iVar1 = 0;
  if (param_3 != (undefined1 *)0x0) {
    iVar3 = iVar1;
    if (param_5 < 0) {
      do {
        iVar1 = iVar3;
        iVar3 = iVar1 + 1;
      } while (*(int *)(param_3 + iVar1 * 4) != 0);
    }
    else if (0 < param_5) {
      do {
        if (*(int *)(param_3 + iVar1 * 4) == 0) break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_5);
    }
    iVar3 = *param_2;
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    *param_2 = iVar3 - iVar1;
    iVar3 = param_4 - iVar1;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 4;
    }
    while ((0 < iVar3 && (*param_2 != 0))) {
      *param_2 = *param_2 + -1;
      iVar3 = iVar3 + -1;
      *puVar2 = 0x20;
      puVar2 = puVar2 + 1;
    }
    *param_1 = puVar2;
  }
  return;
}


/* END FUNCTION 0x0046d2a0 */
