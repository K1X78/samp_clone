/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004736e0
 * Name: FUN_004736e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004736e0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_SI;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined1 local_8 [8];
  
  piVar1 = *(int **)(DAT_004fc438 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar4 = 0x47;
  (**(code **)(*piVar1 + 0xec))(local_8,uVar5);
  iVar2 = (**(code **)(*piVar1 + 0x90))(uVar5,CONCAT22(uVar4,unaff_SI));
  if ((iVar2 != 0) && (iVar2 != -0x2f8)) {
    uVar3 = FUN_0044e910();
    return (int)uVar3 - *(int *)(iVar2 + 0x410);
  }
  return 0;
}


/* END FUNCTION 0x004736e0 */
