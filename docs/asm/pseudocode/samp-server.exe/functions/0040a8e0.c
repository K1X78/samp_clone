/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a8e0
 * Name: FUN_0040a8e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040a8e0(uint param_1)

{
  uint *puVar1;
  int unaff_EBX;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = 0;
  if (*(int *)(unaff_EBX + 0x18) != 0) {
    do {
      puVar3 = (uint *)(*(int *)(unaff_EBX + 0x1c) + uVar2 * 4);
      puVar1 = *(uint **)(*(int *)(unaff_EBX + 0x1c) + uVar2 * 4);
      while (puVar1 != (uint *)0x0) {
        if (*puVar1 < param_1) {
          puVar3 = puVar1 + 1;
        }
        else {
          *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + -1;
          *puVar3 = puVar1[1];
          FUN_0040a800();
          FUN_0040a6d0();
        }
        puVar1 = (uint *)*puVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(unaff_EBX + 0x18));
  }
  return;
}


/* END FUNCTION 0x0040a8e0 */
