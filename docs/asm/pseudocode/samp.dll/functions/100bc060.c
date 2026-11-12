/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc060
 * Name: FUN_100bc060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100bc060(int *param_1,FILE *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[2];
  iVar1 = *param_1;
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = uVar2 + 0x400;
      if (uVar3 < uVar4) {
        _fwrite((void *)(uVar2 + iVar1),1,0x400,param_2);
      }
      else {
        _fwrite((void *)(uVar2 + iVar1),1,uVar4 - uVar2,param_2);
        uVar3 = param_1[2];
      }
      uVar4 = param_1[2];
      uVar2 = uVar3;
    } while (uVar3 < uVar4);
  }
  return param_1[2];
}


/* END FUNCTION 0x100bc060 */
