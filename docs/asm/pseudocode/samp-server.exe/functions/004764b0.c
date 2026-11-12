/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004764b0
 * Name: FUN_004764b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004764b0(undefined4 param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_004fc438 + 0x1c);
  if (iVar4 != 0) {
    uVar2 = *(ushort *)(param_2 + 4);
    if ((uVar2 < 0x800) && (*(int *)(iVar4 + (uint)uVar2 * 4) != 0)) {
      uVar3 = *(undefined2 *)(param_2 + 0xc);
      piVar1 = (int *)(iVar4 + 0x2000 + (uint)uVar2 * 4);
      *(undefined2 *)(*piVar1 + 0x3b) = *(undefined2 *)(param_2 + 8);
      *(undefined2 *)(*piVar1 + 0x3d) = uVar3;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004764b0 */
