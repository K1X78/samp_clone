/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408b10
 * Name: FUN_00408b10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_00408b10(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  
  bVar3 = *param_2;
  while (bVar3 == 0x30) {
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar3 = *pbVar1;
  }
  uVar5 = CONCAT31((int3)((uint)param_1 >> 8),*param_2);
  iVar4 = 0;
  if (*param_2 != 0) {
    do {
      iVar2 = iVar4 + 1;
      uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),param_2[iVar2]);
      iVar4 = iVar4 + 1;
    } while (param_2[iVar2] != 0);
    if (0x12 < iVar4) {
      if (iVar4 < 0x14) {
        iVar4 = FUN_004089f0(uVar5,param_2);
        return iVar4 < (int)(uint)(in_EAX != 0);
      }
      return false;
    }
  }
  return true;
}


/* END FUNCTION 0x00408b10 */
