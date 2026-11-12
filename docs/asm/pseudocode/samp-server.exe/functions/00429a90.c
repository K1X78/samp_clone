/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00429a90
 * Name: FUN_00429a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00429a90(int param_1)

{
  int in_EAX;
  int iVar1;
  byte unaff_BL;
  byte local_5;
  int local_4;
  
  iVar1 = FUN_00427530(&local_5,&local_4);
  if (iVar1 != 0) {
    if ((iVar1 == 7) || (iVar1 == 0xc0a)) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
    FUN_004195e0((undefined **)"Failed to read ptrmap key=%d");
    return;
  }
  if ((local_5 != unaff_BL) || (local_4 != in_EAX)) {
    FUN_004195e0((undefined **)"Bad ptr map entry key=%d expected=(%d,%d) got=(%d,%d)");
  }
  return;
}


/* END FUNCTION 0x00429a90 */
