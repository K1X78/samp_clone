/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406ea0
 * Name: FUN_00406ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00406ea0(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 local_a0 [4];
  short local_9c [44];
  byte local_44 [68];
  
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)local_a0);
  iVar2 = FUN_00406d10(local_9c,local_44);
  if (iVar2 != 0) {
    if (0 < *(int *)(param_2 + 0x10)) {
      FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)local_a0);
      *(undefined4 *)local_a0 = 0;
    }
    return 0;
  }
  puVar3 = (undefined2 *)(local_a0 + 3);
  do {
    pcVar1 = (char *)((int)puVar3 + 1);
    puVar3 = (undefined2 *)((int)puVar3 + 1);
  } while (*pcVar1 != '\0');
  iVar2 = *(int *)(param_2 + 4);
  *puVar3 = 10;
  FUN_00403100(param_1,iVar2,(int *)local_a0);
  FUN_00403250((undefined4 *)local_a0,local_9c,1,0,*(uint *)(param_2 + 0x10));
  return ((*(int *)(param_2 + 0xc) + 2) / 3) * 4 + 2;
}


/* END FUNCTION 0x00406ea0 */
