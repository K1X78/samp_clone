/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426f90
 * Name: FUN_00426f90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00426f90(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_00407d90();
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = (uint)*(byte *)(param_1 + 10);
  }
  else {
    uVar1 = 0;
  }
  FUN_00423850(uVar1,*(uint *)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0xac) = 0;
  FUN_00413a30();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (**(int **)(param_1 + 0x3c) != 0) {
      uVar2 = FUN_0040b720();
      *(undefined4 *)(param_1 + 0x24) = uVar2;
    }
    FUN_00426f60();
  }
  else {
    FUN_00413b30();
  }
  FUN_00407da0();
  FUN_00407ab0();
  FUN_00407ab0();
  FUN_0040a700();
  FUN_0040a4a0();
  FUN_004080d0(param_1);
  return 0;
}


/* END FUNCTION 0x00426f90 */
