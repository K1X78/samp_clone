/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00436960
 * Name: FUN_00436960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00436960(int param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  uint uVar3;
  int unaff_EBX;
  int *unaff_EDI;
  char *pcVar4;
  char **ppcVar5;
  char *local_4;
  
  if (*(int *)(unaff_EBX + 0x1c) == 0) {
    uVar3 = (uint)*(byte *)(*(int *)(unaff_EBX + 0x10) + in_EAX * 0x18 + 0x16);
    ppcVar5 = &local_4;
    iVar1 = FUN_0040b9a0();
    pcVar4 = *(char **)(extraout_ECX + 4);
    uVar2 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 8) + 0xc) + 0x49);
    iVar1 = FUN_0040b9a0();
    FUN_00434100(iVar1,pcVar4,uVar2,uVar3,ppcVar5);
    if (local_4 != (char *)0x0) {
      FUN_00415110(-8,local_4,unaff_EDI);
    }
    if ((-1 < param_1) && (*(char *)(in_EAX * 0x18 + 0x16 + *(int *)(unaff_EBX + 0x10)) == 'e')) {
      FUN_00414e50(0x16);
    }
  }
  return;
}


/* END FUNCTION 0x00436960 */
