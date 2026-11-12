/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a440
 * Name: FUN_0040a440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a440(void)

{
  uint *puVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  int *unaff_EBX;
  undefined4 *puVar5;
  
  if (unaff_EBX[10] != 0) {
    iVar2 = *unaff_EBX;
    while (iVar2 != 0) {
      puVar1 = (uint *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (in_EAX < *puVar1) {
        FUN_0040a390();
      }
    }
    if ((in_EAX == 0) && ((undefined4 *)unaff_EBX[0xb] != (undefined4 *)0x0)) {
      uVar4 = unaff_EBX[5];
      puVar5 = *(undefined4 **)unaff_EBX[0xb];
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      in_EAX = 1;
    }
    (*DAT_004ca1a8)(unaff_EBX[10],in_EAX + 1);
  }
  return;
}


/* END FUNCTION 0x0040a440 */
