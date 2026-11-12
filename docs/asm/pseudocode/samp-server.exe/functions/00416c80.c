/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416c80
 * Name: FUN_00416c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00416c80(char *param_1)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  byte *extraout_ECX;
  int unaff_EBX;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(unaff_EBX + 8) + 0xc + in_EAX * 0x10);
  iVar3 = 0;
  FUN_00408380(param_1);
  iVar1 = FUN_00412f40((void *)(iVar1 + 0x24),extraout_ECX,iVar3);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 0x18)) {
      iVar3 = FUN_00410210();
      piVar2 = (int *)(iVar3 + 0x40);
      iVar3 = *(int *)(iVar3 + 0x40);
      while (iVar3 != iVar1) {
        piVar2 = (int *)(iVar3 + 0x20);
        iVar3 = *piVar2;
      }
      *piVar2 = *(int *)(*piVar2 + 0x20);
    }
    FUN_00416c30();
    *(uint *)(unaff_EBX + 0xc) = *(uint *)(unaff_EBX + 0xc) | 0x200;
  }
  return;
}


/* END FUNCTION 0x00416c80 */
