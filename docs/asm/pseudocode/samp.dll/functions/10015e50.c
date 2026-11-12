/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015e50
 * Name: FUN_10015e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10015e50(int param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if ((param_2 < 2000) && (*(int *)(iVar1 + 0x3074 + (uint)param_2 * 4) != 0)) {
    iVar1 = *(int *)(iVar1 + 0x1134 + (uint)param_2 * 4);
  }
  else {
    iVar1 = 0;
  }
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 != 0)) {
    iVar1 = FUN_100aba90();
    if (iVar1 == 0) {
      iVar1 = FUN_1001e680(param_2);
      if ((iVar1 != 0) && (iVar1 != 0xffff)) {
        FUN_100aef40(0,0,0);
        FUN_100ac030(iVar1,param_3);
      }
    }
  }
  return;
}


/* END FUNCTION 0x10015e50 */
