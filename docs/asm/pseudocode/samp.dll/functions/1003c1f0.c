/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c1f0
 * Name: FUN_1003c1f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1003c1f0(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  cVar1 = FUN_100331a0(&DAT_1013c7cc);
  if (cVar1 == '\0') {
    if (param_4 == '\0') {
      uVar4 = 0;
      if (*(short *)(param_1 + 7) != 0) {
        iVar3 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0x334) + iVar3) != '\0') {
            cVar1 = FUN_100331a0(&param_2);
            if (cVar1 != '\0') {
              return uVar4;
            }
          }
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0xc69;
        } while (uVar4 < *(ushort *)(param_1 + 7));
      }
      return 0xffffffff;
    }
    uVar2 = FUN_1003ac00(&param_2,&param_4);
    if (param_4 != '\0') {
      iVar3 = FUN_1003aca0(uVar2);
      return *(uint *)(iVar3 + 6);
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x1003c1f0 */
