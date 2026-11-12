/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465760
 * Name: FUN_00465760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00465760(void *this,ushort param_1)

{
  void *this_00;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((((ushort)uVar1 < 2000) && (*(int *)((int)this + (uVar1 & 0xffff) * 4 + 0xf44340) != 0)) &&
       (this_00 = *(void **)((int)this + (uVar1 & 0xffff) * 4 + 0xf46280),
       *(int *)((int)this_00 + 6) != 0)) {
      FUN_0049dfc0(this_00,param_1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 2000);
  return;
}


/* END FUNCTION 0x00465760 */
