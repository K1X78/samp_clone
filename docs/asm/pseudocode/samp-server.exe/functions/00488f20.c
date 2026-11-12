/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488f20
 * Name: FUN_00488f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00488f20(void *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  piVar2 = (int *)((int)this + 0xbea4);
  do {
    if (piVar2[-1] == 0) break;
    if (*piVar2 == 0) {
      iVar5 = iVar5 + 1;
      break;
    }
    if (piVar2[1] == 0) {
      iVar5 = iVar5 + 2;
      break;
    }
    if (piVar2[2] == 0) {
      iVar5 = iVar5 + 3;
      break;
    }
    if (piVar2[3] == 0) {
      iVar5 = iVar5 + 4;
      break;
    }
    iVar4 = iVar4 + 5;
    piVar2 = piVar2 + 5;
    iVar5 = iVar5 + 5;
  } while (iVar4 < 800);
  if (iVar5 == 800) {
    return -1;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)(param_1 + 1)) < 0x29) {
    FUN_00468d20(param_1);
    iVar4 = iVar5 * 0x3d - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)this + iVar4] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)((int)this + iVar5 * 0x3d + 0x29) = 0;
    *(undefined4 *)((int)this + iVar5 * 0x3d + 0x2d) = 0;
    *(undefined4 *)((int)this + iVar5 * 4 + 0xbea0) = 1;
    FUN_00488e20((int)this);
    return iVar5;
  }
  return -1;
}


/* END FUNCTION 0x00488f20 */
