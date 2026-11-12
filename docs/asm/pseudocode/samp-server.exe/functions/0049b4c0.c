/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b4c0
 * Name: FUN_0049b4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0049b4c0(void *this,uint param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_194;
  undefined4 local_190 [100];
  
  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    return 1;
  }
  if (param_1 == 1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
      return 0;
    }
  }
  else {
    puVar3 = this;
    puVar4 = local_190;
    for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = this;
    for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_194 = 0;
    iVar2 = 99;
    piVar1 = (int *)register0x00000010;
    do {
      if (piVar1[-1] != 0) break;
      if (piVar1[-2] != 0) {
        iVar2 = iVar2 + -1;
        break;
      }
      if (piVar1[-3] != 0) {
        iVar2 = iVar2 + -2;
        break;
      }
      iVar2 = iVar2 + -3;
      piVar1 = piVar1 + -3;
    } while (0 < iVar2);
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      FUN_0049b1e0(local_194,local_190[iVar2],param_1,(undefined4 *)((int)this + iVar2 * 4),
                   &local_194);
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_194;
    }
  }
  return 0;
}


/* END FUNCTION 0x0049b4c0 */
