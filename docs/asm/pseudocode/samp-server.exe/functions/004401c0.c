/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004401c0
 * Name: FUN_004401c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004401c0(int param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int *unaff_EBX;
  
  for (piVar1 = *(int **)(param_1 + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    if ((param_2 == (byte *)0x0) || (iVar3 = FUN_0040f350(param_2), iVar3 != 0)) {
      bVar2 = FUN_0040fc30(*unaff_EBX);
      FUN_0042cdb0(bVar2,0);
      FUN_0043fff0(piVar1,-1);
    }
  }
  return;
}


/* END FUNCTION 0x004401c0 */
