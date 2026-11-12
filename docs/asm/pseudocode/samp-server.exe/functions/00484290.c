/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484290
 * Name: FUN_00484290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00484290(undefined1 param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined1 extraout_DL;
  
  iVar1 = FUN_004841a0(param_1);
  if (iVar1 == -1) {
    *(byte *)(extraout_ECX + 0xa2) = *(byte *)(extraout_ECX + 0xa2) & 0xc0;
    return;
  }
  *(undefined1 *)(iVar1 + 0x3068 + extraout_ECX) = extraout_DL;
  *(undefined1 *)(extraout_ECX + 0x3075) = extraout_DL;
  return;
}


/* END FUNCTION 0x00484290 */
