/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b9a0
 * Name: FUN_1009b9a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1009b9a0(undefined4 *param_1,LPCWSTR param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = lstrlenW(param_2);
  iVar4 = iVar4 + 1;
  if (iVar4 < 0xffff) {
    iVar1 = param_1[1];
    while ((iVar1 < iVar4 && (cVar3 = FUN_1009b240(0xffffffff), cVar3 != '\0'))) {
      iVar1 = param_1[1];
    }
    uVar2 = param_1[1];
    if (iVar4 <= (int)uVar2) {
      if (uVar2 < 0x80000000) {
        FUN_10083fa0(*param_1,uVar2,param_2);
      }
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1009b9a0 */
