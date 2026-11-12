/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004708e0
 * Name: FUN_004708e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004708e0(undefined4 param_1,int param_2)

{
  char *pcVar1;
  in_addr unaff_EDI;
  int iVar2;
  undefined1 local_8 [8];
  
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) != 0)
     ) {
    (**(code **)(**(int **)((int)DAT_004fc438 + 0x40) + 0xec))(local_8,*(undefined4 *)(param_2 + 4))
    ;
    if (*(ushort *)(param_2 + 4) < 1000) {
      iVar2 = (uint)*(ushort *)(param_2 + 4) * 0x19 + 0x26d24 + *(int *)((int)DAT_004fc438 + 8);
    }
    else {
      iVar2 = 0;
    }
    pcVar1 = inet_ntoa(unaff_EDI);
    FUN_004940e0(DAT_004fc438,iVar2,pcVar1);
    FUN_00494040(DAT_004fc438,(uint)*(ushort *)(param_2 + 4));
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004708e0 */
