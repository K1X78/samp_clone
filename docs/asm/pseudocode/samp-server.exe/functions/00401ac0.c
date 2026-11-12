/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401ac0
 * Name: FUN_00401ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401ac0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)(param_1 + 0x2c);
  iVar1 = 0;
  piVar3 = piVar2;
  do {
    if (*piVar3 == param_2) {
      if (iVar1 < 4) goto LAB_00401b0a;
      break;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  while (*piVar2 != 0) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (3 < iVar1) {
      return 0x14;
    }
  }
  if (3 < iVar1) {
    return 0x14;
  }
LAB_00401b0a:
  *(int *)(param_1 + 0x2c + iVar1 * 4) = param_2;
  *(undefined4 *)(param_1 + 0x3c + iVar1 * 4) = param_3;
  return 0;
}


/* END FUNCTION 0x00401ac0 */
