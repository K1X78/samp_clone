/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421a90
 * Name: FUN_00421a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00421a90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  
  iVar1 = *unaff_EBX;
  if (((*(char *)(iVar1 + 0x1e) == '\0') && ((*(uint *)(iVar1 + 0xc) & 0x800000) == 0)) &&
     (FUN_0041db50((undefined **)"malformed database schema (%s)"), param_1 != 0)) {
    uVar2 = FUN_00418940(*(undefined4 *)unaff_EBX[2],(undefined **)"%s - %s");
    *(undefined4 *)unaff_EBX[2] = uVar2;
  }
  unaff_EBX[3] = (uint)(*(char *)(iVar1 + 0x1e) == '\0') * 4 + 7;
  return;
}


/* END FUNCTION 0x00421a90 */
