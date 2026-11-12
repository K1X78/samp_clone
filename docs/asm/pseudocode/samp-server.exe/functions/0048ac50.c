/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ac50
 * Name: FUN_0048ac50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048ac50(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(in_EAX + 4);
  uVar3 = *(int *)(in_EAX + 0x18) - *(int *)(in_EAX + 0x14);
  uVar2 = -iVar1 - 1U;
  if (uVar3 < -iVar1 - 1U) {
    uVar2 = uVar3;
  }
  uVar3 = *(int *)(in_EAX + 0xc) - iVar1;
  if (*(uint *)(in_EAX + 0x44) < uVar3) {
    uVar4 = uVar3 - *(uint *)(in_EAX + 0x44);
  }
  else {
    uVar4 = uVar3;
    if (uVar3 != 0) {
      uVar4 = 1;
    }
  }
  if (uVar4 < uVar2) {
    uVar2 = uVar4;
  }
  if (*(uint *)(in_EAX + 0x20) < uVar3) {
    uVar3 = *(uint *)(in_EAX + 0x20);
  }
  *(uint *)(in_EAX + 0x10) = uVar3;
  *(uint *)(in_EAX + 8) = iVar1 + uVar2;
  return;
}


/* END FUNCTION 0x0048ac50 */
