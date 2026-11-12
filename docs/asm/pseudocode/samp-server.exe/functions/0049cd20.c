/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049cd20
 * Name: FUN_0049cd20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0049cd20(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_320 [100];
  int aiStack_190 [100];
  
  FUN_0049cc60(this,param_1,local_320);
  piVar3 = local_320;
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(int *)this = *piVar3;
    piVar3 = piVar3 + 1;
    this = (int *)((int)this + 4);
  }
  uVar1 = 100;
  do {
    if (local_320[uVar1] != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 200);
  return 0;
}


/* END FUNCTION 0x0049cd20 */
