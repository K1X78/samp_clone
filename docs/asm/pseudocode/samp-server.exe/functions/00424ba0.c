/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00424ba0
 * Name: FUN_00424ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_00424ba0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int *unaff_ESI;
  int unaff_EDI;
  code *local_10;
  code *local_c;
  int local_8;
  
  if (unaff_EDI == 0) {
    return false;
  }
  iVar2 = *unaff_ESI;
  bVar3 = FUN_00419eb0(param_1,*(int *)(iVar2 + 0x220) + *(int *)(unaff_EDI + 0x2c));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    return true;
  }
  *(int *)(iVar2 + 0x220) = *(int *)(iVar2 + 0x220) + *(int *)(unaff_EDI + 0x2c);
  local_8 = *unaff_ESI;
  cVar1 = *(char *)((int)unaff_ESI + 0x15);
  *(undefined1 *)((int)unaff_ESI + 0x15) = 0;
  local_10 = FUN_00424790;
  local_c = FUN_00426b70;
  FUN_00415640(&local_10,unaff_EDI);
  *(int *)(*unaff_ESI + 0x220) = *(int *)(*unaff_ESI + 0x220) - *(int *)(unaff_EDI + 0x2c);
  if ((0 < unaff_ESI[4]) || (0 < *(int *)(local_8 + 0x40))) {
    *(byte *)(unaff_EDI + 2) = *(byte *)(unaff_EDI + 2) | 8;
  }
  if (*(char *)((int)unaff_ESI + 0x15) != '\0') {
    *(byte *)(unaff_EDI + 2) = *(byte *)(unaff_EDI + 2) | 2;
    return (bool)('\x01' - ((*(byte *)(unaff_EDI + 2) & 8) != 8));
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((int)unaff_ESI + 0x15) = 1;
  }
  return (bool)('\x01' - ((*(byte *)(unaff_EDI + 2) & 8) != 8));
}


/* END FUNCTION 0x00424ba0 */
