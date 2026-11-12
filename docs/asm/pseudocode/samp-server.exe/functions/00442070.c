/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442070
 * Name: FUN_00442070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00442070(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  
  uVar1 = *(uint *)(unaff_ESI + 0xc);
  uVar4 = 0;
  iVar3 = 0;
  *(undefined1 *)(unaff_ESI + 0x7c) = 1;
  iVar2 = 0;
  do {
    if (*(int *)(unaff_ESI + 4) <= iVar3) {
      if ((((uVar4 == 0) && (1 < *(int *)(unaff_ESI + 4))) &&
          ((*(byte *)(*(int *)(*(int *)(unaff_ESI + 8) + 0x1c) + 0x4a) & 1) == 0)) &&
         (uVar4 = FUN_00441d50(1,param_1), uVar4 != 0)) {
        FUN_00420a50(1);
      }
      break;
    }
    if ((((*(byte *)(*(int *)(*(int *)(unaff_ESI + 8) + 0xc + iVar2) + 0x4a) & 1) == 0) &&
        (iVar2 != 0x10)) && (uVar4 = FUN_00441d50(iVar3,param_1), uVar4 != 0)) {
      FUN_00420a50(iVar3);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (uVar4 == 0);
  *(undefined1 *)(unaff_ESI + 0x7c) = 0;
  if ((uVar4 == 0) && ((~(uVar1 >> 9) & 1) != 0)) {
    FUN_0040ef10();
  }
  return uVar4;
}


/* END FUNCTION 0x00442070 */
