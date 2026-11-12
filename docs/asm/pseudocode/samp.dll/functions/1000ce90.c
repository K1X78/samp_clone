/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ce90
 * Name: FUN_1000ce90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000ce90(int *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = param_1[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    bVar5 = uVar1 != 0;
    do {
      if ((((bVar5) && (pcVar2 = *(char **)(*param_1 + uVar3 * 4), pcVar2 != (char *)0x0)) &&
          (*(int *)(pcVar2 + 0x10) == param_2)) && (pcVar2[7] == '\x02')) {
        if (*pcVar2 == '\0') {
          return 0;
        }
        if (pcVar2[1] == '\0') {
          return 0;
        }
        iVar4 = FUN_1000c2e0(*(undefined4 *)(pcVar2 + 0xc),*(undefined4 *)(pcVar2 + 0x10),
                             *(undefined4 *)(pcVar2 + 0x46),*(undefined4 *)(pcVar2 + 0x4a));
        if (iVar4 == 0) {
          return 0;
        }
        pcVar2[0x59] = '\0';
        pcVar2[0x58] = '\x01';
        return 1;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar1;
    } while (uVar3 != uVar1);
  }
  return 0;
}


/* END FUNCTION 0x1000ce90 */
