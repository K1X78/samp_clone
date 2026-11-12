/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ee60
 * Name: FUN_0040ee60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040ee60(char *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  FUN_00408380(param_1);
  iVar1 = *(int *)(in_EAX + 4);
  uVar5 = 0;
  if (0 < iVar1) {
    iVar2 = *(int *)(in_EAX + 8);
    do {
      uVar3 = uVar5;
      if ((int)uVar5 < 2) {
        uVar3 = uVar5 ^ 1;
      }
      if (((param_2 == (byte *)0x0) ||
          (iVar4 = FUN_00408450(param_2,*(byte **)(uVar3 * 0x10 + iVar2)), iVar4 == 0)) &&
         (iVar6 = FUN_00409170(), iVar6 != 0)) {
        return iVar6;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  return iVar6;
}


/* END FUNCTION 0x0040ee60 */
