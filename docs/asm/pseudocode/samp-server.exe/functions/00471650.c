/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471650
 * Name: FUN_00471650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00471650(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *this;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 8);
  iVar3 = *(int *)(DAT_004fc438 + 8);
  if ((((iVar3 != 0) && (uVar1 < 1000)) && (*(int *)(iVar3 + 0x24de4 + (uint)uVar1 * 4) != 0)) &&
     (((uVar2 < 1000 && (*(int *)(iVar3 + 0x24de4 + (uint)uVar2 * 4) != 0)) &&
      (this = *(void **)(iVar3 + 0x25d84 + (uint)uVar2 * 4), this != (void *)0x0)))) {
    uVar4 = FUN_00465bb0(this,uVar1);
    if ((char)uVar4 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00471650 */
