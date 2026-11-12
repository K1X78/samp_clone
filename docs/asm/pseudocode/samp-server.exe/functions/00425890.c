/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00425890
 * Name: FUN_00425890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00425890(uint *param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined4 *in_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar3 = 0;
  local_18 = (uint *)0x0;
  if (param_1 == (uint *)0x0) {
    uVar4 = in_EAX[7];
  }
  else {
    local_18 = (uint *)FUN_00413460(param_1[5]);
    if (local_18 == (uint *)0x0) {
      return 7;
    }
    uVar4 = param_1[5];
  }
  in_EAX[6] = uVar4;
  *(undefined1 *)((int)in_EAX + 0x12) = *(undefined1 *)((int)in_EAX + 0xb);
  if ((param_1 == (uint *)0x0) &&
     (bVar2 = FUN_0040b4a0((int)in_EAX), CONCAT31(extraout_var,bVar2) != 0)) {
    uVar3 = FUN_004233b0();
    return uVar3;
  }
  local_8 = in_EAX[0x12];
  local_4 = in_EAX[0x13];
  puVar1 = in_EAX + 0x12;
  if ((param_1 == (uint *)0x0) ||
     (bVar2 = FUN_0040b4a0((int)in_EAX), CONCAT31(extraout_var_00,bVar2) != 0)) {
    *puVar1 = 0;
    in_EAX[0x13] = 0;
LAB_00425990:
    while (((int)in_EAX[0x13] <= (int)local_4 &&
           (((int)in_EAX[0x13] < (int)local_4 || (*puVar1 < local_8))))) {
      local_14 = 0;
      local_10 = FUN_00418ff0(0,local_8,local_4,&local_14,&local_10);
      if (local_14 == 0) {
        uVar3 = *puVar1;
        if ((in_EAX[0x1e] + in_EAX[0x14] == uVar3) &&
           (in_EAX[0x15] + (uint)CARRY4(in_EAX[0x1e],in_EAX[0x14]) == in_EAX[0x13])) {
          uVar5 = __alldiv(local_8 - uVar3,(local_4 - in_EAX[0x13]) - (uint)(local_8 < uVar3),
                           in_EAX[0x21] + 8,(int)(in_EAX[0x21] + 8) >> 0x1f);
          local_14 = (uint)uVar5;
        }
      }
      uVar4 = 0;
      uVar3 = local_10;
      while( true ) {
        if (uVar3 != 0) goto LAB_00425a73;
        if (((local_14 <= uVar4) || ((int)local_4 < (int)in_EAX[0x13])) ||
           (((int)local_4 <= (int)in_EAX[0x13] && (local_8 <= *puVar1)))) break;
        uVar3 = FUN_00425250(in_EAX,puVar1,local_18,1,1);
        uVar4 = uVar4 + 1;
      }
    }
  }
  else {
    local_10 = param_1[2];
    local_c = param_1[3];
    if (param_1[2] == 0 && param_1[3] == 0) {
      local_10 = local_8;
      local_c = local_4;
    }
    *puVar1 = *param_1;
    in_EAX[0x13] = param_1[1];
    uVar3 = 0;
    do {
      if (((int)local_c < (int)in_EAX[0x13]) ||
         (((int)local_c <= (int)in_EAX[0x13] && (local_10 <= *puVar1)))) {
        if (uVar3 == 0) goto LAB_00425990;
        break;
      }
      uVar3 = FUN_00425250(in_EAX,puVar1,local_18,1,1);
    } while (uVar3 == 0);
  }
LAB_00425a73:
  if (param_1 != (uint *)0x0) {
    local_10 = (in_EAX[0x21] + 4) * param_1[6];
    local_c = 0;
    bVar2 = FUN_0040b4a0((int)in_EAX);
    if (CONCAT31(extraout_var_01,bVar2) != 0) {
      uVar3 = FUN_004148f0(param_1 + 7);
    }
    for (uVar4 = param_1[6]; (uVar3 == 0 && (uVar4 < (uint)in_EAX[0xc])); uVar4 = uVar4 + 1) {
      uVar3 = FUN_00425250(in_EAX,&local_10,local_18,0,1);
    }
  }
  FUN_0040a000((int)local_18);
  if (uVar3 == 0) {
    *puVar1 = local_8;
    in_EAX[0x13] = local_4;
  }
  return uVar3;
}


/* END FUNCTION 0x00425890 */
