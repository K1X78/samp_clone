/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473540
 * Name: FUN_00473540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00473540(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 unaff_SI;
  undefined4 unaff_EDI;
  undefined2 uVar3;
  undefined1 local_8 [8];
  
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) != 0)) {
    piVar1 = *(int **)(DAT_004fc438 + 0x40);
    uVar3 = 0x47;
    (**(code **)(*piVar1 + 0xe8))(local_8,*(undefined4 *)(param_2 + 4));
    uVar2 = (**(code **)(*piVar1 + 0x4c))(unaff_EDI,CONCAT22(uVar3,unaff_SI));
    return uVar2;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00473540 */
