/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401a80
 * Name: FUN_00401a80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401a80(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x2c);
  do {
    if (*piVar2 == param_2) {
      if (3 < iVar1) {
        return 0x17;
      }
      *param_3 = *(undefined4 *)(param_1 + 0x3c + iVar1 * 4);
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 4);
  return 0x17;
}


/* END FUNCTION 0x00401a80 */
