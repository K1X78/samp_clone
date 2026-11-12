/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040bb50
 * Name: FUN_0040bb50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040bb50(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)FUN_0040ba90();
  puVar4 = (undefined4 *)(unaff_EBX + 0x20);
  *(undefined1 *)(unaff_EBX + 0x2c) = 1;
  *puVar4 = 0x2de218;
  FUN_0040baa0((int *)0x0,0x28,1,(int *)(unaff_EBX + 0x48));
  puVar3 = puVar4;
  puVar5 = puVar1 + 0xc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00407be0();
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}


/* END FUNCTION 0x0040bb50 */
