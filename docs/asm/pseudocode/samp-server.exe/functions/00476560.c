/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476560
 * Name: FUN_00476560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00476560(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *this;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if (((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)) &&
     (this = *(void **)(DAT_004fc438 + 0x1c), this != (void *)0x0)) {
    uVar2 = *(ushort *)(param_2 + 8);
    if ((uVar2 < 0x800) && (*(int *)((int)this + (uint)uVar2 * 4) != 0)) {
      FUN_00467130(this,uVar1,(uint)uVar2);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00476560 */
