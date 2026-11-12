/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041aca0
 * Name: FUN_0041aca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041aca0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    *(short *)(param_1 + 8) = (short)param_1[8] + -1;
    iVar1 = *param_1;
    if ((short)param_1[8] == 0) {
      iVar2 = param_1[5];
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x20);
        FUN_00416300();
      }
      FUN_00416970();
      FUN_004163b0();
      FUN_00408130(iVar1);
      FUN_00408130(iVar1);
      FUN_0040fce0(iVar1,param_1[7]);
      FUN_004158d0(iVar1,param_1[0xb]);
      FUN_00410490();
      FUN_00408130(iVar1);
    }
  }
  return;
}


/* END FUNCTION 0x0041aca0 */
