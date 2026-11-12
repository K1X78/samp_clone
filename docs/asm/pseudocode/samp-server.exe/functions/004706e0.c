/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004706e0
 * Name: FUN_004706e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004706e0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 0xc);
  if (((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 2000)) &&
     (*(int *)(iVar2 + 0x2014 + (uint)uVar1 * 4) != 0)) {
    if (1999 < uVar1) {
      iVar2 = FUN_004899c0(0);
      return (int)*(char *)(iVar2 + 7);
    }
    iVar2 = FUN_004899c0(*(int *)(iVar2 + 0x3f54 + (uint)uVar1 * 4));
    return (int)*(char *)(iVar2 + 7);
  }
  return 0;
}


/* END FUNCTION 0x004706e0 */
