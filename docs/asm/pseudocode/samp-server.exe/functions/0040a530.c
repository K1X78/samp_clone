/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a530
 * Name: FUN_0040a530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a530(void)

{
  undefined1 *in_EAX;
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int local_88 [33];
  
  piVar3 = local_88;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  do {
    puVar1 = in_EAX;
    if (puVar1 == (undefined1 *)0x0) {
      iVar2 = 1;
      do {
        FUN_0040a4c0((undefined1 *)local_88[iVar2]);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x20);
      return;
    }
    in_EAX = *(undefined1 **)(puVar1 + 8);
    *(int *)(puVar1 + 8) = 0;
    iVar2 = 0;
    do {
      if (local_88[iVar2] == 0) {
        local_88[iVar2] = (int)puVar1;
        break;
      }
      puVar1 = (undefined1 *)FUN_0040a4c0(puVar1);
      local_88[iVar2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1f);
    if (iVar2 == 0x1f) {
      local_88[0x1f] = FUN_0040a4c0(puVar1);
    }
  } while( true );
}


/* END FUNCTION 0x0040a530 */
