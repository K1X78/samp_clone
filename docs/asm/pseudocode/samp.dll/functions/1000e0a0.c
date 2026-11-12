/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000e0a0
 * Name: FUN_1000e0a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000e0a0(int param_1,undefined4 *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  if ((DAT_102aca10 != 0) && (DAT_102aca0c != 0)) {
    iVar1 = FUN_10065890("logurls");
    if (iVar1 != 0) {
      FUN_10067ae0(DAT_102aca10,"[url 0x%X]: %s",*(undefined4 *)((int)param_2 + 0x11),param_3);
    }
  }
  DAT_10156b44 = param_1;
  if (*(char *)(param_1 + 0x1344) == '\0') {
    FUN_1000dff0();
  }
  iVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x1349);
  while ((pcVar2[2] == '\0' || (*pcVar2 != '\0'))) {
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x230;
    if (5 < iVar1) {
      if (DAT_102aca10 != 0) {
        FUN_10067b60(DAT_102aca10,"[error] AddURLRequest: No free slots!");
      }
      return;
    }
  }
  param_1 = iVar1 * 0x230 + param_1;
  puVar3 = (undefined4 *)(param_1 + 0x1457);
  for (iVar1 = 0x47; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)param_2;
  _strncpy((char *)(param_1 + 0x1351),param_3,0x100);
  *(undefined1 *)(param_1 + 0x1349) = 1;
  *(undefined1 *)(param_1 + 0x134a) = 0;
  return;
}


/* END FUNCTION 0x1000e0a0 */
