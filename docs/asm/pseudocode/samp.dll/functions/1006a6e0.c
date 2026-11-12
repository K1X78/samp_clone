/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a6e0
 * Name: FUN_1006a6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006a6e0(int *param_1)

{
  int iVar1;
  void *_Memory;
  uint uVar2;
  
  iVar1 = param_1[1];
  uVar2 = 0;
  if (0 < iVar1) {
    do {
      if ((uVar2 < (uint)param_1[1]) &&
         (_Memory = *(void **)(*param_1 + uVar2 * 4), _Memory != (void *)0x0)) {
        _free(_Memory);
        FUN_1006a6b0(uVar2);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  FUN_1008c270();
  return;
}


/* END FUNCTION 0x1006a6e0 */
