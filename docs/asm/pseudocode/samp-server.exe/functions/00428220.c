/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428220
 * Name: FUN_00428220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00428220(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_0040c2c0();
  for (iVar1 = *(int *)(*(int *)(param_1 + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_0040c720();
    iVar3 = 0;
    *(undefined1 *)(iVar1 + 0x43) = 3;
    *(undefined4 *)(iVar1 + 0x50) = unaff_EBX;
    if (-1 < *(short *)(iVar1 + 0x5c)) {
      puVar2 = (undefined4 *)(iVar1 + 0x60);
      do {
        FUN_00427610();
        *puVar2 = 0;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 <= *(short *)(iVar1 + 0x5c));
    }
  }
  FUN_0040c340();
  return;
}


/* END FUNCTION 0x00428220 */
