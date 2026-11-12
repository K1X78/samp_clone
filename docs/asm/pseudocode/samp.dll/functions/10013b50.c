/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013b50
 * Name: FUN_10013b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013b50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x22);
  uVar4 = 0;
  if (-1 < iVar1) {
    uVar5 = 0;
    do {
      if ((uVar4 < 0x3ec) && (*(int *)(param_1 + 0xfd6 + uVar5 * 4) == 1)) {
        iVar2 = *(int *)(param_1 + 0x26 + uVar5 * 4);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        if ((*(int *)(iVar2 + 4) != 0) && (iVar2 = FUN_100aba90(), iVar2 == 0)) {
          uVar3 = FUN_1009f4a0();
          *(undefined4 *)(param_1 + 0x1f86 + uVar5 * 4) = uVar3;
          FUN_1009f470(1);
        }
      }
      uVar4 = uVar4 + 1;
      uVar5 = (uint)uVar4;
    } while ((int)uVar5 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x10013b50 */
