/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004085d0
 * Name: FUN_004085d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x00408711) */
/* WARNING: Removing unreachable block (ram,0x0040866a) */
/* WARNING: Removing unreachable block (ram,0x00408847) */
/* WARNING: Removing unreachable block (ram,0x0040886e) */

int __cdecl FUN_004085d0(double *param_1)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  byte *in_EAX;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_8;
  
  local_14 = 1;
  local_20 = 1;
  bVar1 = (&DAT_004b29c8)[*in_EAX];
  local_8 = 0;
  local_1c = 0;
  local_18 = 0;
  pbVar5 = in_EAX;
  while ((bVar1 & 1) != 0) {
    pbVar6 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar1 = (&DAT_004b29c8)[*pbVar6];
  }
  if (*pbVar5 == 0x2d) {
    local_14 = -1;
LAB_00408635:
    pbVar5 = pbVar5 + 1;
  }
  else if (*pbVar5 == 0x2b) goto LAB_00408635;
  bVar1 = *pbVar5;
  while (bVar1 == 0x30) {
    pbVar6 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar6;
  }
  bVar1 = *pbVar5;
  bVar2 = (&DAT_004b29c8)[bVar1];
  while ((bVar2 & 4) != 0) {
    if (0xcccccccccccccca < local_8) break;
    local_8 = __allmul((uint)local_8,(int)((ulonglong)local_8 >> 0x20),10,0);
    local_8 = local_8 + ((char)bVar1 + -0x30);
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
    bVar2 = (&DAT_004b29c8)[bVar1];
  }
  bVar1 = (&DAT_004b29c8)[*pbVar5];
  while ((bVar1 & 4) != 0) {
    pbVar6 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    local_1c = local_1c + 1;
    bVar1 = (&DAT_004b29c8)[*pbVar6];
  }
  if (*pbVar5 == 0x2e) {
    bVar1 = pbVar5[1];
    pbVar5 = pbVar5 + 1;
    bVar2 = (&DAT_004b29c8)[bVar1];
    while ((bVar2 & 4) != 0) {
      if (0xcccccccccccccca < local_8) break;
      local_8 = __allmul((uint)local_8,(int)((ulonglong)local_8 >> 0x20),10,0);
      local_8 = local_8 + ((char)bVar1 + -0x30);
      pbVar5 = pbVar5 + 1;
      local_1c = local_1c + -1;
      bVar1 = *pbVar5;
      bVar2 = (&DAT_004b29c8)[bVar1];
    }
    bVar1 = (&DAT_004b29c8)[*pbVar5];
    while ((bVar1 & 4) != 0) {
      pbVar6 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      bVar1 = (&DAT_004b29c8)[*pbVar6];
    }
  }
  if ((*pbVar5 != 0x65) && (*pbVar5 != 0x45)) goto LAB_004087e4;
  pbVar6 = pbVar5 + 1;
  if (pbVar5[1] == 0x2d) {
    local_20 = -1;
LAB_004087b4:
    pbVar6 = pbVar5 + 2;
  }
  else if (pbVar5[1] == 0x2b) goto LAB_004087b4;
  bVar1 = *pbVar6;
  bVar2 = (&DAT_004b29c8)[bVar1];
  pbVar5 = pbVar6;
  while ((bVar2 & 4) != 0) {
    local_18 = (char)bVar1 + -0x30 + local_18 * 10;
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
    bVar2 = (&DAT_004b29c8)[bVar1];
  }
LAB_004087e4:
  local_1c = local_18 * local_20 + local_1c;
  if (local_1c < 0) {
    local_20 = -1;
    local_1c = -local_1c;
  }
  else {
    local_20 = 1;
  }
  if (local_8 == 0) {
    *param_1 = 0.0;
    return (int)pbVar5 - (int)in_EAX;
  }
  if (local_20 < 1) {
    lVar7 = __allrem((uint)local_8,(uint)((ulonglong)local_8 >> 0x20),10,0);
    for (; (lVar7 == 0 && (0 < local_1c)); local_1c = local_1c + -1) {
      local_8 = __alldiv((uint)local_8,(uint)((ulonglong)local_8 >> 0x20),10,0);
      lVar7 = __allrem((uint)local_8,(uint)((ulonglong)local_8 >> 0x20),10,0);
    }
  }
  else {
    for (; (local_8 < 0xccccccccccccccc && (0 < local_1c)); local_1c = local_1c + -1) {
      local_8 = __allmul((uint)local_8,(int)((ulonglong)local_8 >> 0x20),10,0);
    }
  }
  if (local_14 < 0) {
    local_8 = CONCAT44(-((int)((ulonglong)local_8 >> 0x20) + (uint)((int)local_8 != 0)),
                       -(int)local_8);
  }
  if (local_1c == 0) {
    *param_1 = (double)local_8;
    return (int)pbVar5 - (int)in_EAX;
  }
  dVar3 = 1.0;
  if ((0x133 < local_1c) && (local_1c < 0x156)) {
    for (; local_1c % 0x134 != 0; local_1c = local_1c + -1) {
      dVar3 = dVar3 * 10.0;
    }
    if (-1 < local_20) {
      *param_1 = (double)local_8 * dVar3 * 1e+308;
      return (int)pbVar5 - (int)in_EAX;
    }
    *param_1 = ((double)local_8 / dVar3) * 1e-308;
    return (int)pbVar5 - (int)in_EAX;
  }
  for (; local_1c % 0x16 != 0; local_1c = local_1c + -1) {
    dVar3 = dVar3 * 10.0;
  }
  if (0 < local_1c) {
    iVar4 = (local_1c - 1U) / 0x16 + 1;
    do {
      iVar4 = iVar4 + -1;
      dVar3 = dVar3 * 1e+22;
    } while (iVar4 != 0);
  }
  if (-1 < local_20) {
    *param_1 = (double)local_8 * dVar3;
    return (int)pbVar5 - (int)in_EAX;
  }
  *param_1 = (double)local_8 / dVar3;
  return (int)pbVar5 - (int)in_EAX;
}


/* END FUNCTION 0x004085d0 */
