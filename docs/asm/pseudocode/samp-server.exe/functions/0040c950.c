/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c950
 * Name: FUN_0040c950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte * __cdecl FUN_0040c950(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)(*(byte *)(in_EAX + 6) + param_1);
  uVar4 = param_1;
  if (*(char *)(in_EAX + 2) == '\0') {
    if (*pbVar5 < 0x80) {
      uVar3 = 1;
      uVar4 = (uint)*pbVar5;
    }
    else {
      uVar3 = FUN_00408ed0(pbVar5);
      uVar3 = uVar3 & 0xff;
    }
    pbVar5 = pbVar5 + uVar3;
  }
  else {
    if (*(char *)(in_EAX + 4) == '\0') {
      uVar4 = 0;
    }
    else {
      bVar2 = *pbVar5;
      if (bVar2 < 0x80) {
        pbVar5 = pbVar5 + 1;
        uVar4 = (uint)bVar2;
      }
      else {
        uVar3 = FUN_00408ed0(pbVar5);
        pbVar5 = pbVar5 + (uVar3 & 0xff);
      }
    }
    pbVar1 = pbVar5 + 9;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if ((bVar2 & 0x80) == 0) break;
    } while (pbVar5 < pbVar1);
  }
  if (*(ushort *)(in_EAX + 8) < uVar4) {
    uVar3 = (uint)*(ushort *)(in_EAX + 10);
    uVar4 = (uVar4 - uVar3) % (*(ushort *)(*(int *)(in_EAX + 0x3c) + 0x18) - 4) + uVar3;
    if (*(ushort *)(in_EAX + 8) < uVar4) {
      uVar4 = uVar3;
    }
    uVar4 = uVar4 + 4;
  }
  pbVar5 = pbVar5 + (uVar4 - param_1);
  if (pbVar5 < (byte *)0x4) {
    pbVar5 = (byte *)0x4;
  }
  return pbVar5;
}


/* END FUNCTION 0x0040c950 */
