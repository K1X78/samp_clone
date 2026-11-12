/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401240
 * Name: FUN_00401240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00401240(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  uint in_EAX;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EDI;
  uint local_204;
  uint auStack_200 [128];
  
  uVar6 = 0;
  iVar5 = 0;
  local_204 = 0;
  do {
    if ((int)in_EAX < 1) {
      return;
    }
    uVar7 = 0;
    iVar4 = 0;
    do {
      pbVar1 = (byte *)(unaff_EDI + -1 + in_EAX);
      in_EAX = in_EAX - 1;
      bVar3 = (byte)iVar4;
      iVar4 = iVar4 + 7;
      uVar7 = uVar7 | (*pbVar1 & 0x7f) << (bVar3 & 0x1f);
      if ((int)in_EAX < 1) break;
    } while (*(char *)(unaff_EDI + -1 + in_EAX) < '\0');
    if ((*(byte *)(unaff_EDI + in_EAX) & 0x40) != 0) {
      for (; iVar4 < 0x20; iVar4 = iVar4 + 8) {
        uVar7 = uVar7 | 0xff << ((byte)iVar4 & 0x1f);
      }
    }
    while ((iVar5 != 0 && (iVar4 = uVar6 * 2, (int)in_EAX < (int)auStack_200[iVar4]))) {
      iVar2 = uVar6 * 2;
      uVar6 = uVar6 + 1 & 0x8000003f;
      *(uint *)(auStack_200[iVar4] + unaff_EDI) = auStack_200[iVar2 + 1];
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
      }
      iVar5 = iVar5 + -1;
    }
    param_1 = param_1 - 4;
    if (((int)in_EAX < (int)param_1) || ((param_1 == in_EAX && (param_1 == 0)))) {
      *(uint *)(unaff_EDI + param_1) = uVar7;
    }
    else {
      auStack_200[local_204 * 2] = param_1;
      auStack_200[local_204 * 2 + 1] = uVar7;
      local_204 = local_204 + 1 & 0x8000003f;
      if ((int)local_204 < 0) {
        local_204 = (local_204 - 1 | 0xffffffc0) + 1;
      }
      iVar5 = iVar5 + 1;
    }
  } while( true );
}


/* END FUNCTION 0x00401240 */
