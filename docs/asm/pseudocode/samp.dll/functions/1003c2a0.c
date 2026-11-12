/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c2a0
 * Name: FUN_1003c2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_1003c2a0(int param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = FUN_100331a0(&DAT_1013c7cc);
  if (cVar1 != '\0') {
    return 0;
  }
  if (param_4 == '\0') {
    uVar5 = 0;
    uVar4 = 0xffffffff;
    if (*(short *)(param_1 + 7) != 0) {
      iVar3 = 0;
      do {
        cVar1 = FUN_100331a0(&param_2);
        if (cVar1 != '\0') {
          if (*(char *)(iVar3 + *(int *)(param_1 + 0x334)) != '\0') {
            return uVar5 * 0xc69 + *(int *)(param_1 + 0x334);
          }
          if (uVar4 == 0xffffffff) {
            uVar4 = uVar5;
          }
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0xc69;
      } while (uVar5 < *(ushort *)(param_1 + 7));
      if ((uVar4 != 0xffffffff) && (param_5 == '\0')) {
        return uVar4 * 0xc69 + *(int *)(param_1 + 0x334);
      }
    }
  }
  else {
    uVar2 = FUN_1003ac00(&param_2,&param_4);
    if (param_4 != '\0') {
      iVar3 = FUN_1003aca0(uVar2);
      return *(int *)(iVar3 + 6) * 0xc69 + *(int *)(param_1 + 0x334);
    }
  }
  return 0;
}


/* END FUNCTION 0x1003c2a0 */
