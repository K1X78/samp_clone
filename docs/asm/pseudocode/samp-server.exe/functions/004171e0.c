/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004171e0
 * Name: FUN_004171e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004171e0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_004106c0(this,param_2);
  if (param_3 < *param_1) {
    iVar1 = param_3 * 0x14;
    do {
      uVar3 = FUN_004170e0(param_1,param_2,*(char **)(iVar1 + param_1[3]));
      param_3 = param_3 + 1;
      iVar1 = iVar1 + 0x14;
      if (((uint)uVar3 & ~(uint)lVar2) != 0 ||
          ((uint)(uVar3 >> 0x20) & ~(uint)((ulonglong)lVar2 >> 0x20)) != 0) {
        return 1;
      }
    } while (param_3 < *param_1);
  }
  return 0;
}


/* END FUNCTION 0x004171e0 */
