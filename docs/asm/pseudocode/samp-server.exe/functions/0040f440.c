/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f440
 * Name: FUN_0040f440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040f440(void *param_1)

{
  uint uVar1;
  int iVar2;
  byte *extraout_ECX;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = FUN_00408380(*(char **)(unaff_ESI + 0x18));
  iVar3 = (int)((byte)(&DAT_004b28c8)[*extraout_ECX] + uVar1) % 0x17;
  iVar2 = FUN_0040f400(param_1,extraout_ECX);
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(iVar2 + 8);
    *(int *)(iVar2 + 8) = unaff_ESI;
    return;
  }
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)((int)param_1 + iVar3 * 4);
  *(int *)((int)param_1 + iVar3 * 4) = unaff_ESI;
  return;
}


/* END FUNCTION 0x0040f440 */
