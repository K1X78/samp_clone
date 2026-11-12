/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004167a0
 * Name: FUN_004167a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004167a0(short *param_1)

{
  short sVar1;
  int *in_EAX;
  undefined4 uVar2;
  
  if ((param_1 != (short *)0x0) && (sVar1 = *param_1, 0 < sVar1)) {
    if ((in_EAX[1] == 1) && (*in_EAX == 0)) {
      *(undefined1 *)(param_1 + sVar1 * 0x1c + -0xd) = 1;
      return;
    }
    uVar2 = FUN_00416430();
    *(undefined4 *)(param_1 + sVar1 * 0x1c) = uVar2;
  }
  return;
}


/* END FUNCTION 0x004167a0 */
