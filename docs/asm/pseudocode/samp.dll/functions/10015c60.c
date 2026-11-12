/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015c60
 * Name: FUN_10015c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10015c60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1ed) = 0;
  *(undefined4 *)(param_1 + 0x1f1) = 0;
  *(undefined4 *)(param_1 + 0x1f5) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1d1) = 2;
  puVar3 = (undefined4 *)(param_1 + 0x3c);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x80);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  *(undefined4 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0x105) = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  *(undefined2 *)(param_1 + 0x111) = 0;
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 0;
  *(undefined4 *)(param_1 + 0x1d9) = 0;
  *(undefined4 *)(param_1 + 0x1dd) = 0;
  if (*(int *)(param_1 + 0x1f9) != 0) {
    FUN_100a0ce0(*(int *)(param_1 + 0x1f9));
    *(undefined4 *)(param_1 + 0x1f9) = 0;
  }
  *(undefined4 *)(param_1 + 0x1e9) = 0;
  if (DAT_102aca24 != 0) {
    uVar1 = thunk_FUN_1002e2b0();
    *(undefined4 *)(param_1 + 0x1c9) = uVar1;
  }
  return;
}


/* END FUNCTION 0x10015c60 */
