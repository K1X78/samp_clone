/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476fc0
 * Name: FUN_00476fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00476fc0(undefined4 param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  
  if (DAT_004fc438 != 0) {
    uVar2 = *(ushort *)(param_2 + 4);
    if ((uVar2 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar2 * 4) != 0)) {
      if (uVar2 < 1000) {
        iVar4 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar2 * 4);
      }
      else {
        iVar4 = 0;
      }
      iVar4 = *(int *)(iVar4 + 0x2d4b);
      if (((iVar4 != 0) && (uVar2 = *(ushort *)(param_2 + 8), uVar2 < 0x100)) &&
         (*(int *)(iVar4 + (uint)uVar2 * 4) != 0)) {
        uVar3 = *(undefined2 *)(param_2 + 0x10);
        piVar1 = (int *)(iVar4 + 0x400 + (uint)uVar2 * 4);
        *(undefined2 *)(*piVar1 + 0x3b) = *(undefined2 *)(param_2 + 0xc);
        *(undefined2 *)(*piVar1 + 0x3d) = uVar3;
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00476fc0 */
