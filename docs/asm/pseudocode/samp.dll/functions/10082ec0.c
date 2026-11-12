/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10082ec0
 * Name: FUN_10082ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10082ec0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x29)) {
    do {
      param_3 = *(uint *)(*(int *)(param_1 + 0x25) + iVar2 * 4);
      if (((*(int *)(iVar1 + 0x10) == 0) || (((param_3 != 2 && (param_3 != 4)) && (param_3 != 8))))
         && ((param_3 == 0 || ((*(uint *)(param_2 + 0x1c) & param_3) != 0)))) {
        FUN_10082b50(&param_3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x29));
  }
  return;
}


/* END FUNCTION 0x10082ec0 */
