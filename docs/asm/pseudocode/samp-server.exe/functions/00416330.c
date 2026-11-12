/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416330
 * Name: FUN_00416330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00416330(char *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  byte *extraout_ECX;
  int iVar3;
  int unaff_EDI;
  
  iVar2 = *(int *)(*(int *)(unaff_EDI + 8) + 0xc + in_EAX * 0x10);
  FUN_00408380(param_1);
  iVar2 = FUN_00412f40((void *)(iVar2 + 0x14),extraout_ECX,0);
  if (iVar2 != 0) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x14);
    if (iVar3 == iVar2) {
      *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x14) = *(undefined4 *)(iVar2 + 0x20);
      FUN_0040eef0();
      *(uint *)(unaff_EDI + 0xc) = *(uint *)(unaff_EDI + 0xc) | 0x200;
      return;
    }
    if (iVar3 != 0) {
      while (iVar1 = *(int *)(iVar3 + 0x20), iVar1 != iVar2) {
        iVar3 = iVar1;
        if (iVar1 == 0) {
          FUN_0040eef0();
          *(uint *)(unaff_EDI + 0xc) = *(uint *)(unaff_EDI + 0xc) | 0x200;
          return;
        }
      }
      if (*(int *)(iVar3 + 0x20) == iVar2) {
        *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
      }
    }
    FUN_0040eef0();
  }
  *(uint *)(unaff_EDI + 0xc) = *(uint *)(unaff_EDI + 0xc) | 0x200;
  return;
}


/* END FUNCTION 0x00416330 */
