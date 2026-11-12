/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10016010
 * Name: FUN_10016010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10016010(short *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_2c [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 2) != 0) && (iVar6 = FUN_1009f210(), iVar6 != 0)) {
    uVar8 = *(undefined4 *)(param_2 + 0xb);
    puVar7 = local_2c;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_2c[2] = *(undefined4 *)(param_2 + 7);
    local_2c[1] = *(undefined4 *)(param_2 + 3);
    local_18 = *(undefined4 *)(param_2 + 0x13);
    local_c = *(float *)(param_2 + 0x1f);
    local_1c = *(undefined4 *)(param_2 + 0xf);
    local_14 = *(undefined4 *)(param_2 + 0x17);
    cVar1 = *param_2;
    local_10 = *(float *)(param_2 + 0x1b);
    local_8 = *(float *)(param_2 + 0x23);
    local_2c[3] = uVar8;
    if (cVar1 != '\0') {
      if (300.0 < local_10) {
        return;
      }
      if (local_10 < -300.0) {
        return;
      }
      if (300.0 < local_c) {
        return;
      }
      if (local_c < -300.0) {
        return;
      }
      if (300.0 < local_8) {
        return;
      }
      if (local_8 < -300.0) {
        return;
      }
      if (cVar1 == '\x01') {
        psVar4 = *(short **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
        if (psVar4 != (short *)0x0) {
          sVar2 = *(short *)(param_2 + 1);
          uVar8 = CONCAT22((short)((uint)puVar7 >> 0x10),sVar2);
          if (sVar2 == *psVar4) {
            iVar6 = FUN_10001010();
            local_4 = *(undefined4 *)(iVar6 + 0x2a4);
          }
          else {
            if (sVar2 == *param_1) {
              return;
            }
            iVar6 = FUN_100010b0(uVar8);
            if (iVar6 != 0) {
              iVar6 = FUN_100010f0(uVar8);
              if (*(int *)(iVar6 + 4) != 0) {
                local_4 = *(undefined4 *)(*(int *)(iVar6 + 4) + 0x2a4);
              }
            }
          }
        }
      }
      else if ((cVar1 == '\x02') && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc) != 0)) {
        uVar3 = *(undefined2 *)(param_2 + 1);
        iVar6 = FUN_10001150(uVar3);
        if (iVar6 != 0) {
          iVar6 = FUN_10001120(uVar3);
          local_4 = *(undefined4 *)(iVar6 + 0x4c);
        }
      }
    }
    iVar6 = FUN_1009f210();
    if (iVar6 != 0) {
      cVar1 = param_2[0x27];
      cVar5 = FUN_100ab870();
      if (cVar5 != cVar1) {
        FUN_100abc80(cVar1,1);
        cVar1 = param_2[0x27];
        cVar5 = FUN_100ab870();
        if (cVar5 != cVar1) {
          FUN_100af390(cVar1,9999);
          FUN_100abc80(param_2[0x27],1);
        }
      }
    }
    FUN_100aee80(local_2c);
    FUN_100af670();
  }
  return;
}


/* END FUNCTION 0x10016010 */
