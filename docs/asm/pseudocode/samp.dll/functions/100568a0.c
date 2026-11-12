/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100568a0
 * Name: FUN_100568a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100568a0(char *param_1,uint param_2,char *param_3,size_t *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  if ((param_1 != (char *)0x0) && (7 < (int)param_2)) {
    uVar2 = param_2 & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    if (uVar2 == 0) {
      if (0 < (int)param_2) {
        do {
          FUN_10056600(param_1 + iVar5,param_1 + iVar5 + 4);
          iVar5 = iVar5 + 8;
        } while (iVar5 < (int)param_2);
      }
      cVar1 = *param_3;
      uVar2 = (uint)(param_3[1] & 0xf);
      *param_4 = (param_2 - uVar2) - 2;
      FUN_1001fce0(param_1 + 1,(param_2 - uVar2) + -1 + uVar2);
      if (cVar1 == '\0') {
        if (param_1 == param_3) {
          _memmove(param_3,param_1 + uVar2 + 2,*param_4);
          return 1;
        }
        uVar4 = *param_4;
        pcVar6 = param_1 + uVar2 + 2;
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)param_3 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          param_3 = param_3 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          param_3 = param_3 + 1;
        }
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100568a0 */
