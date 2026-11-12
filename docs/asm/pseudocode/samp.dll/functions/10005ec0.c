/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005ec0
 * Name: FUN_10005ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10005ec0(int param_1)

{
  int iVar1;
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x30a) != 0) {
    *(undefined4 *)(param_1 + 0x143) = 0;
    FUN_1009e950(local_40);
    iVar1 = *(int *)(param_1 + 0x302);
    if (iVar1 == 0) {
      iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x23);
    }
    *(int *)(param_1 + 0x302) = iVar1 + -1;
    FUN_100a20e0(0x41d,local_10,local_c,local_8);
    FUN_10005720(*(undefined4 *)(param_1 + 0x302));
  }
  return;
}


/* END FUNCTION 0x10005ec0 */
