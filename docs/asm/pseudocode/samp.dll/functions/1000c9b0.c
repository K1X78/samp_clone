/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c9b0
 * Name: FUN_1000c9b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_1000c9b0(int *param_1)

{
  char cVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(char *)((int)param_1 + 0x21f) != '\0') {
    uVar4 = 0;
    iVar2 = 0;
    if (param_1[1] != 0) {
      bVar5 = param_1[1] != 0;
      do {
        if (bVar5) {
          pcVar3 = *(char **)(*param_1 + uVar4 * 4);
        }
        else {
          pcVar3 = (char *)0x0;
        }
        if (((pcVar3[7] == '\x01') ||
            ((pcVar3[7] == '\x02' &&
             ((*(int *)(pcVar3 + 8) == *(int *)((int)param_1 + 0x217) ||
              (*(int *)(pcVar3 + 8) == -1)))))) && (pcVar3[6] == '\0')) {
          if (*pcVar3 == '\0') {
            pcVar3[2] = '\x01';
            cVar1 = FUN_1000c950(uVar4,*(undefined4 *)(pcVar3 + 0x46));
            param_1 = extraout_ECX;
            if (cVar1 == '\0') {
              iVar2 = iVar2 + 1;
            }
          }
          if (pcVar3[1] == '\0') {
            pcVar3[3] = '\x01';
            cVar1 = FUN_1000c950(uVar4,*(undefined4 *)(pcVar3 + 0x4a));
            param_1 = extraout_ECX_00;
            if (cVar1 == '\0') {
              iVar2 = iVar2 + 1;
            }
          }
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < (uint)param_1[1];
      } while (uVar4 != param_1[1]);
    }
    return iVar2;
  }
  return -1;
}


/* END FUNCTION 0x1000c9b0 */
