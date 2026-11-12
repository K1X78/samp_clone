/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fc10
 * Name: FUN_0041fc10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041fc10(uint param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int unaff_ESI;
  undefined4 uVar4;
  char *pcVar5;
  
  uVar1 = *(ushort *)(unaff_ESI + 0x1c);
  bVar2 = FUN_00414b80((void *)0x20,unaff_ESI);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    return 7;
  }
  if ((uVar1 & 4) == 0) {
    uVar4 = *(undefined4 *)(unaff_ESI + 0x14);
    pcVar5 = "%!.15g";
  }
  else {
    uVar4 = *(undefined4 *)(unaff_ESI + 0x14);
    pcVar5 = &DAT_004b6da8;
  }
  FUN_004189f0(0x20,uVar4,(undefined **)pcVar5);
  uVar3 = FUN_00408380(*(char **)(unaff_ESI + 0x14));
  *(ushort *)(unaff_ESI + 0x1c) = *(ushort *)(unaff_ESI + 0x1c) | 0x202;
  *(uint *)(unaff_ESI + 0x18) = uVar3;
  *(undefined1 *)(unaff_ESI + 0x1f) = 1;
  FUN_0041fbf0(param_1);
  return 0;
}


/* END FUNCTION 0x0041fc10 */
