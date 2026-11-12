/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412ab0
 * Name: FUN_00412ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00412ab0(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  uint unaff_EBX;
  undefined4 *puVar3;
  
  if (in_EAX == (undefined4 *)0x0) {
    return;
  }
  puVar1 = FUN_00412930(unaff_EBX + 1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (uVar2 = unaff_EBX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *in_EAX;
      in_EAX = in_EAX + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = unaff_EBX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)in_EAX;
      in_EAX = (undefined4 *)((int)in_EAX + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(undefined1 *)((int)puVar1 + unaff_EBX) = 0;
  }
  return;
}


/* END FUNCTION 0x00412ab0 */
