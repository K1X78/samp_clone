/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412e20
 * Name: FUN_00412e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_00412e20(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_DL;
  uint uVar4;
  
  puVar1 = FUN_00412930(param_2 / 2 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = 0;
    if (0 < param_2 + -1) {
      do {
        FUN_00408fc0();
        uVar2 = FUN_00408fc0();
        uVar3 = uVar4 >> 1;
        uVar4 = uVar4 + 2;
        *(byte *)(uVar3 + (int)puVar1) = extraout_DL | (byte)uVar2;
      } while ((int)uVar4 < param_2 + -1);
    }
    *(undefined1 *)((int)uVar4 / 2 + (int)puVar1) = 0;
  }
  return puVar1;
}


/* END FUNCTION 0x00412e20 */
