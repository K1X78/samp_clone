/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473a90
 * Name: FUN_00473a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00473a90(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_SI;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 local_8 [8];
  
  piVar1 = *(int **)(DAT_004fc438 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar3 = 0x47;
  (**(code **)(*piVar1 + 0xec))(local_8,uVar4);
  iVar2 = (**(code **)(*piVar1 + 0x90))(uVar4,CONCAT22(uVar3,unaff_SI));
  if (iVar2 != 0) {
    return *(undefined4 *)(iVar2 + 0xcb0);
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00473a90 */
