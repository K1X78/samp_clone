/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427f70
 * Name: FUN_00427f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00427f70(void)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined1 *in_EAX;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *in_EAX;
  iVar6 = *(int *)(in_EAX + 0x48);
  iVar3 = FUN_0041f780();
  if (iVar3 != 0) {
    *in_EAX = uVar1;
    return iVar3;
  }
  uVar2 = *(ushort *)(in_EAX + 0x10);
  iVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_004275c0();
      if (in_EAX[3] == '\0') {
        cVar4 = '\x05';
        iVar5 = iVar6;
        FUN_00408f80();
        FUN_00427460(cVar4,iVar5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)uVar2);
  }
  if (in_EAX[3] != '\0') {
    *in_EAX = uVar1;
    return 0;
  }
  cVar4 = '\x05';
  FUN_00408f80();
  FUN_00427460(cVar4,iVar6);
  *in_EAX = uVar1;
  return 0;
}


/* END FUNCTION 0x00427f70 */
