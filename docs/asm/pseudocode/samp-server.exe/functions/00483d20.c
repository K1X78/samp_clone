/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483d20
 * Name: FUN_00483d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483d20(void *this,int param_1)

{
  char *pcVar1;
  
  if (*(void **)(DAT_004fc438 + 0x10) != (void *)0x0) {
    FUN_00465a10(*(void **)(DAT_004fc438 + 0x10),param_1,*(ushort *)((int)this + 0x2d53));
    pcVar1 = (char *)(param_1 + 0x18dd + (int)this);
    *pcVar1 = *pcVar1 + '\x01';
    *(int *)((int)this + 0x2cd5) = *(int *)((int)this + 0x2cd5) + 1;
  }
  return;
}


/* END FUNCTION 0x00483d20 */
