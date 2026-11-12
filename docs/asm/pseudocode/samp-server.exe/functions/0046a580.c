/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a580
 * Name: FUN_0046a580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0046a580(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *param_1;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_0046a1c0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


/* END FUNCTION 0x0046a580 */
