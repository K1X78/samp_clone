/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004905e0
 * Name: FUN_004905e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_004905e0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int local_420;
  int local_41c;
  char local_418 [1044];
  
  local_41c = param_1;
  FUN_00491fa0("Console Variables:");
  local_420 = **(int **)(param_1 + 4);
  if ((int *)local_420 != *(int **)(param_1 + 4)) {
    do {
      iVar2 = local_420;
      local_418[0] = '\0';
      switch(**(undefined4 **)(local_420 + 0x28)) {
      case 0:
        _sprintf(local_418,"%f  (float)",(double)*(float *)(*(undefined4 **)(local_420 + 0x28))[2]);
        goto switchD_00490623_default;
      case 1:
        pcVar3 = "%d  (int)";
        break;
      case 2:
        pcVar3 = "%d  (bool)";
        break;
      case 3:
        pcVar3 = "\"%s\"  (string)";
        break;
      default:
        goto switchD_00490623_default;
      }
      _sprintf(local_418,pcVar3);
switchD_00490623_default:
      if (*(uint *)(iVar2 + 0x24) < 0x10) {
        pcVar3 = (char *)(iVar2 + 0x10);
      }
      else {
        pcVar3 = *(char **)(iVar2 + 0x10);
      }
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00491fa0("  %s\t%s= %s%s%s%s");
      FUN_00490340(&local_420);
    } while (local_420 != *(int *)(local_41c + 4));
  }
  FUN_00491fa0("");
  return;
}


/* END FUNCTION 0x004905e0 */
