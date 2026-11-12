/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041cc50
 * Name: FUN_0041cc50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041cc50(undefined1 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = FUN_00417b70();
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = unaff_EBX[1];
    puVar4 = (undefined4 *)*unaff_EBX;
    puVar5 = puVar1 + 10;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar1[3] = puVar1 + 10;
    puVar1[4] = unaff_EBX[1];
    *(undefined1 *)puVar1 = param_1;
  }
  return;
}


/* END FUNCTION 0x0041cc50 */
