/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004658c0
 * Name: FUN_004658c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_004658c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)((int)this + 0x14004);
  do {
    if (piVar2[-1] == 0) break;
    if (*piVar2 == 0) {
      iVar3 = iVar3 + 1;
      break;
    }
    if (piVar2[1] == 0) {
      iVar3 = iVar3 + 2;
      break;
    }
    if (piVar2[2] == 0) {
      iVar3 = iVar3 + 3;
      break;
    }
    iVar3 = iVar3 + 4;
    piVar2 = piVar2 + 4;
  } while (iVar3 < 0x1000);
  if (iVar3 != 0x1000) {
    puVar1 = (undefined4 *)((int)this + iVar3 * 0x14);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    *(undefined4 *)((int)this + iVar3 * 4 + 0x14000) = 1;
    *(undefined4 *)((int)this + iVar3 * 4 + 0x18000) = param_6;
    FUN_00465870((int)this);
    return iVar3;
  }
  return -1;
}


/* END FUNCTION 0x004658c0 */
