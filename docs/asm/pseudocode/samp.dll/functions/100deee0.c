/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100deee0
 * Name: FUN_100deee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100deee0(char *param_1,int *param_2)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  
  if (in_EAX < 10) {
    return 2;
  }
  if ((*param_1 != '\x1f') || (param_1[1] != -0x75)) {
    return 1;
  }
  bVar1 = param_1[3];
  if ((param_1[2] != '\b') || ((bVar1 & 0xe0) != 0)) {
    return 1;
  }
  iVar2 = in_EAX + -10;
  puVar3 = (ushort *)(param_1 + 10);
  if ((bVar1 & 4) != 0) {
    if (iVar2 < 2) {
      return 2;
    }
    uVar4 = (uint)*puVar3;
    if (iVar2 < (int)(uVar4 + 2)) {
      return 2;
    }
    iVar2 = iVar2 + (-2 - uVar4);
    puVar3 = (ushort *)(param_1 + uVar4 + 0xc);
  }
  if ((bVar1 & 8) != 0) {
    if (iVar2 == 0) {
      return 2;
    }
    while ((char)*puVar3 != '\0') {
      iVar2 = iVar2 + -1;
      puVar3 = (ushort *)((int)puVar3 + 1);
      if (iVar2 == 0) {
        return 2;
      }
    }
    if (iVar2 == 0) {
      return 2;
    }
    if ((char)*puVar3 != '\0') {
      return 2;
    }
    iVar2 = iVar2 + -1;
    puVar3 = (ushort *)((int)puVar3 + 1);
  }
  if ((bVar1 & 0x10) != 0) {
    if (iVar2 == 0) {
      return 2;
    }
    while ((char)*puVar3 != '\0') {
      iVar2 = iVar2 + -1;
      puVar3 = (ushort *)((int)puVar3 + 1);
      if (iVar2 == 0) {
        return 2;
      }
    }
    if (iVar2 == 0) {
      return 2;
    }
    if ((char)*puVar3 != '\0') {
      return 2;
    }
    iVar2 = iVar2 + -1;
  }
  if ((bVar1 & 2) != 0) {
    if (iVar2 < 2) {
      return 2;
    }
    iVar2 = iVar2 + -2;
  }
  *param_2 = in_EAX - iVar2;
  return 0;
}


/* END FUNCTION 0x100deee0 */
