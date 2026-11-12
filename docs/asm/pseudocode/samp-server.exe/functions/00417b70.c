/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417b70
 * Name: FUN_00417b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_00417b70(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = FUN_00412930(in_EAX);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (uVar2 = in_EAX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = in_EAX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return puVar1;
}


/* END FUNCTION 0x00417b70 */
