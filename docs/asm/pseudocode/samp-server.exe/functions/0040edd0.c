/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040edd0
 * Name: FUN_0040edd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040edd0(int param_1,char *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = 0;
  FUN_00408380(param_2);
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar5 = uVar4;
      if ((int)uVar4 < 2) {
        uVar5 = uVar4 ^ 1;
      }
    } while ((((param_3 != (byte *)0x0) &&
              (iVar2 = FUN_00408450(param_3,*(byte **)(uVar5 * 0x10 + *(int *)(param_1 + 8))),
              iVar2 != 0)) || (iVar3 = FUN_00409170(), iVar3 == 0)) &&
            (uVar4 = uVar4 + 1, (int)uVar4 < iVar1));
    return iVar3;
  }
  return 0;
}


/* END FUNCTION 0x0040edd0 */
