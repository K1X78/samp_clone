/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041aaa0
 * Name: FUN_0041aaa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041aaa0(int *param_1,char *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((*(int *)(*param_1 + 0x100) != 0) && (iVar1 = FUN_0040fc30(*param_1), -1 < iVar1)) {
    if (*param_2 == '<') {
      iVar5 = param_1[0x6b];
    }
    else {
      iVar2 = 0;
      if (0 < *param_3) {
        piVar4 = (int *)(param_3 + 0x10);
        do {
          if (*(int *)(param_2 + 0x18) == *piVar4) {
            iVar5 = *(int *)(param_3 + iVar2 * 0x1c + 10);
            break;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 0xe;
        } while (iVar2 < *param_3);
      }
    }
    if (iVar5 != 0) {
      if (*(short *)(param_2 + 0x1c) < 0) {
        if (*(int *)(iVar5 + 8) < 0) {
          pcVar3 = "ROWID";
        }
        else {
          pcVar3 = *(char **)(*(int *)(iVar5 + 0x10) + *(int *)(iVar5 + 8) * 0x18);
        }
      }
      else {
        pcVar3 = *(char **)(*(int *)(iVar5 + 0x10) + *(short *)(param_2 + 0x1c) * 0x18);
      }
      iVar5 = FUN_0041a9f0(*(undefined4 *)(iVar5 + 4),pcVar3,iVar1);
      if (iVar5 == 2) {
        *param_2 = 'b';
      }
    }
  }
  return;
}


/* END FUNCTION 0x0041aaa0 */
