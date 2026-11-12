/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00425250
 * Name: FUN_00425250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00425250(undefined4 *param_1,uint *param_2,uint *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  undefined3 extraout_var_00;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_10;
  uint local_c;
  
  puVar6 = param_2;
  puVar1 = param_1;
  puVar7 = (undefined4 *)param_1[0x28];
  uVar3 = FUN_0040b060();
  if (uVar3 != 0) {
    return uVar3;
  }
  uVar3 = FUN_00407ad0();
  if (uVar3 != 0) {
    return uVar3;
  }
  uVar5 = *puVar6;
  uVar3 = puVar1[0x21] + 4 + param_4 * 4;
  *puVar6 = uVar5 + uVar3;
  puVar6[1] = puVar6[1] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar5,uVar3);
  if ((local_c == 0) || (local_c == DAT_004ca204 / (int)puVar1[0x21] + 1U)) {
    return 0x65;
  }
  if (((uint)puVar1[6] < local_c) ||
     (bVar2 = FUN_00409e90(param_3), CONCAT31(extraout_var,bVar2) != 0)) {
    return 0;
  }
  if (param_4 != 0) {
    uVar3 = FUN_0040b060();
    if (uVar3 != 0) {
      return uVar3;
    }
    if ((param_5 == 0) &&
       (puVar4 = (undefined4 *)FUN_0040b4d0((int)puVar1,(int)puVar7), puVar4 != param_1)) {
      return 0x65;
    }
  }
  local_10 = 0;
  if ((param_3 != (uint *)0x0) && (local_10 = FUN_00413480(param_3,local_c), local_10 != 0)) {
    return local_10;
  }
  if ((local_c == 1) && (*(ushort *)((int)puVar1 + 0x7e) != (ushort)*(byte *)(puVar7 + 5))) {
    *(ushort *)((int)puVar1 + 0x7e) = (ushort)*(byte *)(puVar7 + 5);
  }
  bVar2 = FUN_0040b4a0((int)puVar1);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    param_1 = (undefined4 *)FUN_0040b480(local_c);
  }
  else {
    param_1 = (undefined4 *)0x0;
  }
  if (param_4 == 0) {
    if ((param_1 == (undefined4 *)0x0) || ((*(byte *)(param_1 + 5) & 4) == 0)) goto LAB_004253e8;
LAB_00425460:
    bVar2 = false;
  }
  else {
    if (*(char *)(puVar1 + 2) == '\0') {
      if (((int)puVar1[0x15] <= (int)puVar6[1]) &&
         (((int)puVar1[0x15] < (int)puVar6[1] || ((uint)puVar1[0x14] < *puVar6))))
      goto LAB_00425460;
    }
LAB_004253e8:
    bVar2 = true;
  }
  if (((*(byte *)((int)puVar1 + 0xe) < 4) || (*(int *)puVar1[0xe] == 0)) || (!bVar2)) {
    if (param_4 != 0) goto LAB_004254ab;
    if (param_1 == (undefined4 *)0x0) {
      *(char *)(puVar1 + 5) = *(char *)(puVar1 + 5) + '\x01';
      uVar3 = FUN_004234f0(local_c,&param_1,1);
      *(char *)(puVar1 + 5) = *(char *)(puVar1 + 5) + -1;
      if (uVar3 != 0) {
        return uVar3;
      }
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf7;
      FUN_0040a370((int)param_1);
      local_10 = 0;
      goto LAB_004254ab;
    }
  }
  else {
    __allmul(local_c - 1,0,puVar1[0x21],(int)puVar1[0x21] >> 0x1f);
    local_10 = FUN_00407af0();
    if ((uint)puVar1[8] < local_c) {
      puVar1[8] = local_c;
    }
    if (puVar1[0x2a] != 0) {
      FUN_00423c30();
      puVar6 = param_2;
    }
LAB_004254ab:
    if (param_1 == (undefined4 *)0x0) {
      return local_10;
    }
  }
  puVar4 = (undefined4 *)*param_1;
  uVar3 = puVar1[0x21];
  puVar8 = puVar4;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  (*(code *)puVar1[0x27])();
  if (param_4 != 0) {
    if (param_5 != 0) {
      if (((int)puVar1[0x15] < (int)puVar6[1]) ||
         (((int)puVar1[0x15] <= (int)puVar6[1] && ((uint)puVar1[0x14] < *puVar6))))
      goto LAB_00425507;
    }
    FUN_0040a390();
  }
LAB_00425507:
  if (local_c == 1) {
    puVar1[0x1a] = puVar4[6];
    puVar1[0x1b] = puVar4[7];
    puVar1[0x1c] = puVar4[8];
    puVar1[0x1d] = puVar4[9];
  }
  FUN_0040a300();
  return local_10;
}


/* END FUNCTION 0x00425250 */
