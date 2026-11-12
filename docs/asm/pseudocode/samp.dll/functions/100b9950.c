/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b9950
 * Name: FUN_100b9950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __thiscall FUN_100b9950(int param_1,ushort *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  cVar2 = FUN_100b98a0(iVar1 + (uint)*param_2 * 6,param_3);
  if (cVar2 == '\0') {
    cVar2 = FUN_100b98a0(iVar1 + (uint)param_2[1] * 6,param_3);
    if (cVar2 == '\0') {
      cVar2 = FUN_100b98a0(iVar1 + (uint)param_2[2] * 6,param_3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


/* END FUNCTION 0x100b9950 */
