/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004074a0
 * Name: FUN_004074a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_004074a0(void *this,int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_EAX;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  bVar2 = (&DAT_004b29c8)[*in_EAX];
  while ((bVar2 & 1) != 0) {
    pbVar4 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    bVar2 = (&DAT_004b29c8)[*pbVar4];
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  bVar2 = *in_EAX;
  if (bVar2 == 0x2d) {
    iVar5 = -1;
  }
  else {
    if (bVar2 != 0x2b) {
      if ((bVar2 != 0x5a) && (bVar2 != 0x7a)) {
        return bVar2 != 0;
      }
      pbVar4 = in_EAX + 1;
      goto LAB_0040754d;
    }
    iVar5 = 1;
  }
  iVar3 = FUN_004073f0(in_EAX + 1);
  if (iVar3 != 2) {
    return true;
  }
  pbVar4 = in_EAX + 6;
  *(int *)(param_1 + 0x1c) = (int)(param_1 * 0x3c + (int)this) * iVar5;
LAB_0040754d:
  bVar2 = (&DAT_004b29c8)[*pbVar4];
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_004b29c8)[*pbVar1];
  }
  return *pbVar4 != 0;
}


/* END FUNCTION 0x004074a0 */
