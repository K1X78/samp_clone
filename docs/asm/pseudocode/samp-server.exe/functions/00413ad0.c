/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413ad0
 * Name: FUN_00413ad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00413ad0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  undefined4 local_4;
  
  iVar2 = 0;
  local_4 = 0;
  uVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 100)) {
    iVar3 = 0;
    do {
      if (param_1 <= *(uint *)(*(int *)(unaff_ESI + 0x60) + 0x14 + iVar3)) {
        uVar1 = FUN_00413480(*(uint **)(*(int *)(unaff_ESI + 0x60) + iVar3 + 0x10),param_1);
        local_4 = local_4 | uVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x30;
      uVar1 = local_4;
    } while (iVar2 < *(int *)(unaff_ESI + 100));
  }
  return uVar1;
}


/* END FUNCTION 0x00413ad0 */
