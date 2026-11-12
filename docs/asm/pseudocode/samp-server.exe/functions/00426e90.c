/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426e90
 * Name: FUN_00426e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00426e90(void)

{
  bool bVar1;
  int in_EAX;
  undefined3 extraout_var;
  int iVar2;
  undefined4 extraout_ECX;
  
  bVar1 = FUN_0040b4a0(in_EAX);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00426390(extraout_ECX,-1,2);
    FUN_00413bd0((uint)*(byte *)(in_EAX + 0x13));
    iVar2 = FUN_0040b4b0(in_EAX);
    return iVar2;
  }
  if ((*(char *)(in_EAX + 0xf) != '\0') && (**(int **)(in_EAX + 0x3c) != 0)) {
    if ((*(int *)(in_EAX + 0x24) != 0) && (*(int *)(in_EAX + 0x24) != 0xd)) {
      if (3 < *(byte *)(in_EAX + 0xe)) {
        FUN_00425560(0);
      }
      return *(int *)(in_EAX + 0x24);
    }
    if (*(char *)(in_EAX + 0xe) == '\x02') {
      FUN_00425560(0);
      FUN_00413bd0((uint)*(byte *)(in_EAX + 0x13));
    }
    else {
      FUN_00425560(0);
    }
    if (*(char *)(in_EAX + 0xd) == '\0') {
      *(undefined1 *)(in_EAX + 0x16) = 0;
    }
    iVar2 = FUN_0040b4b0(in_EAX);
    return iVar2;
  }
  iVar2 = FUN_00413bd0((uint)*(byte *)(in_EAX + 0x13));
  return iVar2;
}


/* END FUNCTION 0x00426e90 */
