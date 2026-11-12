/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042cca0
 * Name: FUN_0042cca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0042cca0(void)

{
  uint *puVar1;
  undefined4 *in_EAX;
  int iVar2;
  int local_4;
  
  puVar1 = (uint *)*in_EAX;
  if ((*(int *)(puVar1[2] + 0x14) == 0) && (*(char *)(in_EAX + 0x7a) == '\0')) {
    iVar2 = FUN_0042a6a0(puVar1,0x21e,(char *)0x0,2000,&local_4);
    if (iVar2 != 0) {
      FUN_00418b00((undefined **)
                   "unable to open a temporary database file for storing temporary tables");
      in_EAX[1] = iVar2;
      return 1;
    }
    *(int *)(puVar1[2] + 0x14) = local_4;
    iVar2 = FUN_00414a20(local_4,-1,0);
    if (iVar2 == 7) {
      *(undefined1 *)((int)puVar1 + 0x1e) = 1;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x0042cca0 */
