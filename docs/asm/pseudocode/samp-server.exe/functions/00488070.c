/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488070
 * Name: FUN_00488070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00488070(void *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)param_1 + 0x8400);
  do {
    if (*piVar2 != 0) {
      FUN_00487f60(param_1,uVar1);
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((ushort)uVar1 < 0x400);
  return;
}


/* END FUNCTION 0x00488070 */
