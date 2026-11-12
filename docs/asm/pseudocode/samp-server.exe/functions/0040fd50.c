/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fd50
 * Name: FUN_0040fd50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040fd50(byte *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < unaff_EBX) {
    do {
      iVar1 = FUN_0040fd10(param_1);
      if (-1 < iVar1) {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar2;
          *param_3 = iVar1;
        }
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  return 0;
}


/* END FUNCTION 0x0040fd50 */
