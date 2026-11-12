/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412be0
 * Name: FUN_00412be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00412be0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  
  if (((*(int *)(unaff_EBX + 8) != 0) &&
      (*(undefined1 *)(*(int *)(unaff_EBX + 8) + *(int *)(unaff_EBX + 0xc)) = 0,
      *(char *)(unaff_EBX + 0x19) != '\0')) && (*(int *)(unaff_EBX + 8) == *(int *)(unaff_EBX + 4)))
  {
    puVar1 = FUN_00412930(*(int *)(unaff_EBX + 0xc) + 1);
    *(undefined4 **)(unaff_EBX + 8) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = *(int *)(unaff_EBX + 0xc) + 1;
      puVar4 = *(undefined4 **)(unaff_EBX + 4);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar1 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      return *(undefined4 *)(unaff_EBX + 8);
    }
    *(undefined1 *)(unaff_EBX + 0x18) = 1;
    return *(undefined4 *)(unaff_EBX + 8);
  }
  return *(undefined4 *)(unaff_EBX + 8);
}


/* END FUNCTION 0x00412be0 */
