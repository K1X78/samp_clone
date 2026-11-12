/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004123c0
 * Name: FUN_004123c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004123c0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar2 = FUN_0043a410();
  if (iVar2 != 0) {
    return 0;
  }
  iVar3 = FUN_00407e10();
  FUN_00407e50(iVar3);
  iVar2 = DAT_004ed468;
  if (DAT_004ed468 != 0) {
    while (param_1 != (byte *)0x0) {
      pbVar6 = *(byte **)(iVar2 + 0x10);
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00412424:
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00412429;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00412424;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00412429:
      if ((iVar5 == 0) || (iVar2 = *(int *)(iVar2 + 0xc), iVar2 == 0)) break;
    }
  }
  FUN_00407e90(iVar3);
  return iVar2;
}


/* END FUNCTION 0x004123c0 */
