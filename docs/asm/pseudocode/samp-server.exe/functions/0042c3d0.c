/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042c3d0
 * Name: FUN_0042c3d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0042c3d0(uint *param_1)

{
  short *psVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  bool bVar4;
  uint local_4;
  
  uVar3 = 0;
  local_4 = 0;
  iVar2 = FUN_0042ae50();
  if (iVar2 != 0) {
    return iVar2;
  }
  do {
    iVar2 = *(int *)(in_EAX + 0x60 + *(short *)(in_EAX + 0x5c) * 4);
    if ((*(char *)(iVar2 + 3) != '\0') || (*(char *)(iVar2 + 2) == '\0')) {
      bVar4 = CARRY4(uVar3,(uint)*(ushort *)(iVar2 + 0x10));
      uVar3 = uVar3 + *(ushort *)(iVar2 + 0x10);
      local_4 = local_4 + bVar4;
    }
    if (*(char *)(iVar2 + 3) != '\0') {
      do {
        if (*(short *)(in_EAX + 0x5c) == 0) {
          *param_1 = uVar3;
          param_1[1] = local_4;
          return 0;
        }
        FUN_004286e0();
      } while (*(ushort *)(*(int *)(in_EAX + 0x60 + *(short *)(in_EAX + 0x5c) * 4) + 0x10) <=
               *(ushort *)(in_EAX + 0xb0 + *(short *)(in_EAX + 0x5c) * 2));
      psVar1 = (short *)(in_EAX + 0xb0 + *(short *)(in_EAX + 0x5c) * 2);
      *psVar1 = *psVar1 + 1;
    }
    FUN_00408f80();
    iVar2 = FUN_0042add0(extraout_ECX);
  } while (iVar2 == 0);
  return iVar2;
}


/* END FUNCTION 0x0042c3d0 */
