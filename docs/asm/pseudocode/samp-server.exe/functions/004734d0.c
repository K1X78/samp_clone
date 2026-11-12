/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004734d0
 * Name: FUN_004734d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004734d0(undefined4 param_1,int param_2)

{
  _struct_1227 in;
  char *pcVar1;
  int iVar2;
  undefined1 local_8 [4];
  int *piStack_4;
  
  if (*(ushort *)(param_2 + 4) < 1000) {
    if (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) != 0) {
      in = ((_union_1226 *)(param_2 + 4))->S_un_b;
      (**(code **)(**(int **)(DAT_004fc438 + 0x40) + 0xe8))(local_8);
      iVar2 = *(int *)(param_2 + 0xc);
      pcVar1 = inet_ntoa((in_addr)in);
      iVar2 = FUN_0046fcb0(piStack_4,*(int *)(param_2 + 8),pcVar1,iVar2);
      return iVar2;
    }
  }
  return -1;
}


/* END FUNCTION 0x004734d0 */
