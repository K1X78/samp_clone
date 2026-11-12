/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10063c20
 * Name: FUN_10063c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10063c20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  *(undefined1 *)(iVar1 + 0x20 + param_1) = 0x80;
  iVar2 = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar1 < 0x38) {
    while (iVar2 < 0x38) {
      *(undefined1 *)(iVar2 + 0x20 + param_1) = 0;
      iVar2 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar2;
    }
  }
  else {
    while (iVar2 < 0x40) {
      *(undefined1 *)(iVar2 + 0x20 + param_1) = 0;
      iVar2 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar2;
    }
    FUN_100635f0();
    iVar1 = *(int *)(param_1 + 0x60);
    while (iVar1 < 0x38) {
      *(undefined1 *)(param_1 + 0x20 + *(int *)(param_1 + 0x60)) = 0;
      iVar1 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar1;
    }
  }
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_1 + 0x1d);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x5e) = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_1 + 0x18);
  FUN_100635f0();
  return;
}


/* END FUNCTION 0x10063c20 */
