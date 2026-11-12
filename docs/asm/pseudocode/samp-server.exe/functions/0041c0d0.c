/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041c0d0
 * Name: FUN_0041c0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __cdecl FUN_0041c0d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int local_10;
  int local_c [3];
  
  local_c[0] = param_2;
  bVar3 = 0;
  local_c[1] = param_3;
  local_c[2] = param_4;
  local_10 = 0;
  do {
    puVar1 = (undefined4 *)local_c[local_10];
    if (puVar1 == (undefined4 *)0x0) break;
    uVar2 = puVar1[1];
    iVar5 = 0;
    pbVar6 = &DAT_004b36c4;
    while ((uVar2 != pbVar6[1] ||
           (iVar4 = FUN_004084a0((byte *)*puVar1,
                                 (byte *)("naturaleftouterightfullinnercross" + *pbVar6),uVar2),
           iVar4 != 0))) {
      pbVar6 = pbVar6 + 3;
      iVar5 = iVar5 + 1;
      if (0x4b36d8 < (int)pbVar6) goto LAB_0041c144;
    }
    bVar3 = bVar3 | (&DAT_004b36c6)[iVar5 * 3];
    if (6 < iVar5) {
LAB_0041c144:
      bVar3 = bVar3 | 0x40;
      break;
    }
    local_10 = local_10 + 1;
  } while (local_10 < 3);
  if (((bVar3 & 0x21) == 0x21) || ((bVar3 & 0x40) != 0)) {
    FUN_00418b00((undefined **)"unknown or unsupported join type: %T %T%s%T");
    bVar3 = 1;
  }
  else if (((bVar3 & 0x20) != 0) && ((bVar3 & 0x18) != 8)) {
    FUN_00418b00((undefined **)"RIGHT and FULL OUTER JOINs are not currently supported");
    return 1;
  }
  return bVar3;
}


/* END FUNCTION 0x0041c0d0 */
