/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f240
 * Name: FUN_0040f240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040f240(short *param_1)

{
  int in_EAX;
  int iVar1;
  short *psVar2;
  
  if (param_1 != (short *)0x0) {
    iVar1 = 0;
    psVar2 = param_1 + 4;
    if (0 < *param_1) {
      do {
        FUN_00408130(in_EAX);
        FUN_00408130(in_EAX);
        FUN_00408130(in_EAX);
        FUN_00408130(in_EAX);
        FUN_0041aca0(*(int **)(psVar2 + 6));
        FUN_0040fce0(in_EAX,*(int *)(psVar2 + 8));
        FUN_004158d0(in_EAX,*(int *)(psVar2 + 0xe));
        FUN_0040f150();
        iVar1 = iVar1 + 1;
        psVar2 = psVar2 + 0x1c;
      } while (iVar1 < *param_1);
    }
    FUN_00408130(in_EAX);
  }
  return;
}


/* END FUNCTION 0x0040f240 */
