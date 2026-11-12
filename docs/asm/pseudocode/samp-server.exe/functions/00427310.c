/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427310
 * Name: FUN_00427310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00427310(uint param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  
  uVar2 = param_1;
  pcVar1 = (char *)(param_1 + 0xd);
  param_1 = 0;
  if ((*pcVar1 != '\0') && (uVar3 = FUN_00423650(in_EAX), uVar3 != 0)) {
    return uVar3;
  }
  if ((((*(byte *)(in_EAX + 0x14) & 2) != 0) && (iVar4 = FUN_0040b000(), iVar4 != 0)) &&
     (uVar3 = FUN_00419210(in_EAX), uVar3 != 0)) {
    return uVar3;
  }
  if (((*(ushort *)(in_EAX + 0x14) & 4) != 0) && (param_3 == 0)) {
    param_1 = *(uint *)(in_EAX + 0xc);
  }
  *(ushort *)(in_EAX + 0x14) = *(ushort *)(in_EAX + 0x14) & 0xfffb;
  iVar4 = FUN_0040b480(param_2);
  if (iVar4 != 0) {
    *(ushort *)(in_EAX + 0x14) = *(ushort *)(in_EAX + 0x14) | *(byte *)(iVar4 + 0x14) & 4;
    if (*(char *)(uVar2 + 0xd) == '\0') {
      FUN_0040a340();
    }
    else {
      FUN_0040a400();
    }
  }
  FUN_0040a400();
  FUN_0040a370(in_EAX);
  uVar3 = param_1;
  *(undefined1 *)(uVar2 + 0xf) = 1;
  if (param_1 != 0) {
    uVar5 = FUN_004234f0(param_1,&param_1,0);
    if (uVar5 != 0) {
      if (uVar3 <= *(uint *)(uVar2 + 0x1c)) {
        FUN_00409f30(uVar3,*(uint **)(uVar2 + 0xa0));
      }
      return uVar5;
    }
    *(undefined1 *)(uVar2 + 0x10) = 1;
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 4;
    FUN_0040a370(param_1);
    FUN_00427080(extraout_ECX);
  }
  if (*(char *)(uVar2 + 0xd) != '\0') {
    FUN_0040a400();
    FUN_00427080(iVar4);
  }
  return 0;
}


/* END FUNCTION 0x00427310 */
