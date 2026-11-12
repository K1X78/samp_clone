/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b200
 * Name: FUN_0040b200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong FUN_0040b200(void)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  longlong lVar3;
  
  iVar1 = *(int *)(in_EAX + 0x48);
  lVar3 = 0;
  if (iVar1 != 0 || *(int *)(in_EAX + 0x4c) != 0) {
    uVar2 = *(uint *)(in_EAX + 0x78);
    lVar3 = __alldiv(iVar1 - 1,*(int *)(in_EAX + 0x4c) - (uint)(iVar1 == 0),uVar2,0);
    lVar3 = __allmul((uint)(lVar3 + 1),(int)((ulonglong)(lVar3 + 1) >> 0x20),uVar2,0);
  }
  return lVar3;
}


/* END FUNCTION 0x0040b200 */
