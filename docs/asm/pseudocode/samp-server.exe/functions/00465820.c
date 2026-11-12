/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465820
 * Name: FUN_00465820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00465820(void *param_1)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  
  piVar2 = (int *)((int)param_1 + 8000000);
  uVar4 = 0;
  do {
    iVar1 = FUN_004657b0(param_1,uVar4);
    if ((iVar1 == 0) && (*piVar2 != 0)) {
      uVar3 = 0;
      do {
        FUN_004656c0(param_1,uVar3,uVar4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 1000);
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar4 != 2000);
  return;
}


/* END FUNCTION 0x00465820 */
