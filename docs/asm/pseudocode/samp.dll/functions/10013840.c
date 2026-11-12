/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013840
 * Name: FUN_10013840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013840(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
  if ((*(int **)(param_1 + 0x1e) != (int *)0x0) && (**(int **)(param_1 + 0x1e) != 0)) {
    FUN_100b0e70();
    FUN_100b0180();
  }
  iVar1 = *(int *)(param_1 + 0x22);
  uVar3 = 0;
  if (-1 < iVar1) {
    uVar2 = 0;
    do {
      if ((uVar3 < 0x3ec) && (*(int *)(param_1 + 0xfd6 + uVar2 * 4) == 1)) {
        iVar4 = *(int *)(param_1 + 0x26 + uVar2 * 4);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 8);
        }
        if (*(int *)(iVar4 + 4) != 0) {
          FUN_100b0e70();
          FUN_100b0180();
        }
      }
      uVar3 = uVar3 + 1;
      uVar2 = (uint)uVar3;
    } while ((int)uVar2 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x10013840 */
