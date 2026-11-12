/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473af0
 * Name: FUN_00473af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00473af0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 uVar4;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined1 local_8 [8];
  
  piVar1 = *(int **)(DAT_004fc438 + 0x40);
  uStack_14 = *(undefined4 *)(param_2 + 4);
  puStack_18 = local_8;
  uVar4 = 0x47;
  (**(code **)(*piVar1 + 0xec))();
  iVar2 = (**(code **)(*piVar1 + 0x90))(unaff_EDI,CONCAT22(uVar4,(short)unaff_ESI));
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_2 + 0xc);
    pcVar3 = FUN_0044ef80(&puStack_18,'\x01');
    iVar2 = FUN_0046fcb0(unaff_ESI,*(int *)(param_2 + 8),pcVar3,iVar2);
    return iVar2;
  }
  return 0;
}


/* END FUNCTION 0x00473af0 */
