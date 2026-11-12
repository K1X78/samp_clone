/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e500
 * Name: FUN_0040e500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_0040e500(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int extraout_EDX;
  
  uVar1 = FUN_0040e4c0(param_1);
  uVar1 = uVar1 & 0xfff;
  if (((*(byte *)(extraout_EDX + 3) & 4) == 0) && (*(char **)(extraout_EDX + 4) != (char *)0x0)) {
    uVar2 = FUN_00408380(*(char **)(extraout_EDX + 4));
    uVar1 = uVar1 + 1 + uVar2;
  }
  return uVar1 + 7 & 0xfffffff8;
}


/* END FUNCTION 0x0040e500 */
