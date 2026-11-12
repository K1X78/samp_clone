/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a040
 * Name: FUN_0040a040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a040(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x18);
  if (puVar1[2] == in_EAX) {
    for (iVar2 = *(int *)(in_EAX + 0x20); (iVar2 != 0 && ((*(byte *)(iVar2 + 0x14) & 4) != 0));
        iVar2 = *(int *)(iVar2 + 0x20)) {
    }
    puVar1[2] = iVar2;
  }
  if (*(int *)(in_EAX + 0x1c) == 0) {
    puVar1[1] = *(undefined4 *)(in_EAX + 0x20);
  }
  else {
    *(undefined4 *)(*(int *)(in_EAX + 0x1c) + 0x20) = *(undefined4 *)(in_EAX + 0x20);
  }
  if (*(int *)(in_EAX + 0x20) == 0) {
    *puVar1 = *(undefined4 *)(in_EAX + 0x1c);
    *(undefined4 *)(in_EAX + 0x1c) = 0;
    *(undefined4 *)(in_EAX + 0x20) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(in_EAX + 0x20) + 0x1c) = *(undefined4 *)(in_EAX + 0x1c);
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)(in_EAX + 0x20) = 0;
  return;
}


/* END FUNCTION 0x0040a040 */
