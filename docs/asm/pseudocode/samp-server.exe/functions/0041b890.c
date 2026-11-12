/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b890
 * Name: FUN_0041b890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041b890(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  FUN_00408fe0();
  FUN_00408ff0();
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    FUN_00416c30();
  }
  FUN_00408ff0();
  FUN_00408fe0();
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    FUN_0041aca0((int *)puVar1[2]);
  }
  FUN_00408ff0();
  FUN_00408ff0();
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


/* END FUNCTION 0x0041b890 */
