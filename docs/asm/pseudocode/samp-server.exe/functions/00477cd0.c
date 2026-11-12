/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477cd0
 * Name: FUN_00477cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_00477cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  void *this;
  int iVar2;
  
  this = *(void **)(DAT_004fc438 + 0x20);
  if (this == (void *)0x0) {
    return false;
  }
  uVar1 = *(ushort *)(param_4 + 4);
  if ((uVar1 < 0x400) && (*(int *)((int)this + (uint)uVar1 * 4) != 0)) {
    iVar2 = FUN_00464180(this,CONCAT22((short)((uint)param_2 >> 0x10),uVar1),
                         *(ushort *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                         *(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14));
    return iVar2 != 0;
  }
  return false;
}


/* END FUNCTION 0x00477cd0 */
