/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c860
 * Name: FUN_1008c860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1008c860(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = FUN_1008c170(iVar2);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = FUN_100874b0(iVar2);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  iVar2 = D3DXCreateSprite(param_2,param_1 + 4);
  if (-1 < iVar2) {
    FUN_10085460();
    iVar2 = 0;
  }
  return iVar2;
}


/* END FUNCTION 0x1008c860 */
