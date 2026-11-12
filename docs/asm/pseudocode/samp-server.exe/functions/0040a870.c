/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a870
 * Name: FUN_0040a870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a870(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *unaff_ESI;
  
  uVar2 = unaff_ESI[2];
  puVar1 = (uint *)(*(int *)(uVar2 + 0x1c) + (*unaff_ESI % *(uint *)(uVar2 + 0x18)) * 4);
  puVar3 = (uint *)*puVar1;
  while (puVar3 != unaff_ESI) {
    puVar1 = puVar3 + 1;
    puVar3 = (uint *)*puVar1;
  }
  *puVar1 = *(uint *)(*puVar1 + 4);
  *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + -1;
  return;
}


/* END FUNCTION 0x0040a870 */
