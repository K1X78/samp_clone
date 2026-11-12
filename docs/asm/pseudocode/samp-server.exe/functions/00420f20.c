/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420f20
 * Name: FUN_00420f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00420f20(int *param_1)

{
  int *piVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = FUN_0041b6e0(unaff_EBX,0,(&DAT_004b3148)[iVar2]);
    if (piVar1[3] != 0) {
      *param_1 = *piVar1;
      param_1[1] = piVar1[1];
      param_1[2] = piVar1[2];
      param_1[3] = piVar1[3];
      param_1[4] = piVar1[4];
      param_1[4] = 0;
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 1;
}


/* END FUNCTION 0x00420f20 */
