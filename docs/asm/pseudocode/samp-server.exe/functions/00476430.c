/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476430
 * Name: FUN_00476430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00476430(undefined4 param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = *(int *)(DAT_004fc438 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  if (((iVar3 != 0) && (uVar2 = *(ushort *)(param_2 + 4), uVar2 < 0x800)) &&
     (*(int *)(iVar3 + (uint)uVar2 * 4) != 0)) {
    piVar1 = (int *)(iVar3 + 0x2000 + (uint)uVar2 * 4);
    *(undefined4 *)(*piVar1 + 0x2b) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(*piVar1 + 0x2f) = uVar4;
    *(undefined4 *)(*piVar1 + 0x33) = uVar5;
    *(undefined4 *)(*piVar1 + 0x37) = uVar6;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00476430 */
