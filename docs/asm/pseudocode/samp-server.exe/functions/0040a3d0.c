/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a3d0
 * Name: FUN_0040a3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040a3d0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    param_1[2] = param_1[1];
    return;
  }
  do {
    *(ushort *)(iVar1 + 0x14) = *(ushort *)(iVar1 + 0x14) & 0xfffb;
    iVar1 = *(int *)(iVar1 + 0x1c);
  } while (iVar1 != 0);
  param_1[2] = param_1[1];
  return;
}


/* END FUNCTION 0x0040a3d0 */
