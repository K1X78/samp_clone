/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d320
 * Name: FUN_0046d320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_0046d320(undefined4 *param_1,int *param_2,undefined1 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)*param_1;
  iVar1 = 0;
  if (param_3 != (undefined1 *)0x0) {
    iVar2 = iVar1;
    if (param_5 < 0) {
      do {
        iVar1 = iVar2;
        iVar2 = iVar1 + 1;
      } while (param_3[iVar1] != '\0');
    }
    else if (0 < param_5) {
      do {
        if (param_3[iVar1] == '\0') break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_5);
    }
    iVar2 = *param_2;
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
    *param_2 = iVar2 - iVar1;
    iVar2 = param_4 - iVar1;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *param_3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    while ((0 < iVar2 && (*param_2 != 0))) {
      *param_2 = *param_2 + -1;
      iVar2 = iVar2 + -1;
      *puVar3 = 0x20;
      puVar3 = puVar3 + 1;
    }
    *param_1 = puVar3;
  }
  return;
}


/* END FUNCTION 0x0046d320 */
