/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408500
 * Name: FUN_00408500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_00408500(undefined4 param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_EAX;
  byte *pbVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  
  iVar4 = (param_2 != '\x01') + 1;
  if (param_2 == '\x03') {
    in_EAX = in_EAX + 1;
  }
  if ((*in_EAX == 0x2d) || (*in_EAX == 0x2b)) {
    in_EAX = in_EAX + iVar4;
  }
  if (((&DAT_004b29c8)[*in_EAX] & 4) == 0) {
    return false;
  }
  pbVar3 = in_EAX + iVar4;
  *unaff_ESI = 0;
  bVar2 = (&DAT_004b29c8)[*pbVar3];
  while ((bVar2 & 4) != 0) {
    pbVar1 = pbVar3 + iVar4;
    pbVar3 = pbVar3 + iVar4;
    bVar2 = (&DAT_004b29c8)[*pbVar1];
  }
  if (*pbVar3 == 0x2e) {
    pbVar1 = pbVar3 + iVar4;
    pbVar3 = pbVar3 + iVar4;
    if (((&DAT_004b29c8)[*pbVar1] & 4) == 0) {
      return false;
    }
    do {
      pbVar1 = pbVar3 + iVar4;
      pbVar3 = pbVar3 + iVar4;
    } while (((&DAT_004b29c8)[*pbVar1] & 4) != 0);
    *unaff_ESI = 1;
  }
  if ((*pbVar3 == 0x65) || (*pbVar3 == 0x45)) {
    pbVar1 = pbVar3 + iVar4;
    pbVar3 = pbVar3 + iVar4;
    if ((*pbVar1 == 0x2b) || (*pbVar1 == 0x2d)) {
      pbVar3 = pbVar3 + iVar4;
    }
    if (((&DAT_004b29c8)[*pbVar3] & 4) == 0) {
      return false;
    }
    do {
      pbVar1 = pbVar3 + iVar4;
      pbVar3 = pbVar3 + iVar4;
    } while (((&DAT_004b29c8)[*pbVar1] & 4) != 0);
    *unaff_ESI = 1;
  }
  return *pbVar3 == 0;
}


/* END FUNCTION 0x00408500 */
