/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411ba0
 * Name: FUN_00411ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 FUN_00411ba0(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_EAX;
  tm *ptVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int local_34;
  uint local_30 [8];
  double local_10;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  puVar5 = local_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *in_EAX;
    in_EAX = in_EAX + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00407a90();
  if (((int)local_30[2] < 0x7b3) || (0x7f5 < (int)local_30[2])) {
    local_10 = 0.0;
    local_30[2] = 2000;
    local_30[3] = 1;
    local_30[4] = 1;
    local_30[5] = 0;
    local_30[6] = 0;
  }
  else {
    uVar6 = FUN_004a0540();
    local_34 = (int)uVar6;
    local_10 = (double)local_34;
  }
  local_30[7] = 0;
  local_6 = 0;
  FUN_004076b0();
  uVar2 = local_30[1];
  uVar1 = local_30[0];
  uVar7 = __alldiv(local_30[0],local_30[1],1000,0);
  local_34 = (int)uVar7 + -0x18a36940;
  iVar4 = FUN_00407e10();
  FUN_00407e50(iVar4);
  ptVar3 = _localtime((time_t *)&local_34);
  local_10 = (double)ptVar3->tm_sec;
  local_30[2] = ptVar3->tm_year + 0x76c;
  local_30[4] = ptVar3->tm_mday;
  local_30[3] = ptVar3->tm_mon + 1;
  local_30[5] = ptVar3->tm_hour;
  local_30[6] = ptVar3->tm_min;
  iVar4 = FUN_00407e10();
  FUN_00407e90(iVar4);
  local_8 = 1;
  local_7 = 1;
  local_6 = 0;
  local_5 = 0;
  FUN_004076b0();
  return CONCAT44((local_30[1] - uVar2) - (uint)(local_30[0] < uVar1),local_30[0] - uVar1);
}


/* END FUNCTION 0x00411ba0 */
