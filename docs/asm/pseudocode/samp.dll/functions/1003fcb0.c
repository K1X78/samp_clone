/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003fcb0
 * Name: thunk_FUN_1003d390
 * Status: ok
 * Single JMP forwarder to 0x1003d390; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void thunk_FUN_1003d390(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [32];
  int aiStack_80 [8];
  int aiStack_60 [8];
  undefined4 auStack_40 [8];
  undefined4 auStack_20 [8];
  
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_c0 = 1;
  uStack_a4 = 0;
  FUN_1003b8b0(param_2,param_1,auStack_a0,aiStack_60);
  puVar3 = param_2;
  puVar4 = auStack_40;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_10039b40(auStack_40,auStack_a0);
  piVar5 = aiStack_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  do {
    FUN_1003b8b0(aiStack_80,aiStack_60,auStack_a0,aiStack_80);
    uVar1 = 0;
    while (aiStack_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = auStack_40;
        goto LAB_1003d4f2;
      }
    }
    FUN_1003bbb0(auStack_40,auStack_a0,&uStack_c0,param_2,auStack_20);
    FUN_1003b8b0(aiStack_60,aiStack_80,auStack_a0,aiStack_60);
    uVar1 = 0;
    while (aiStack_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = auStack_20;
        goto LAB_1003d4f2;
      }
    }
    FUN_1003bbb0(auStack_20,auStack_a0,auStack_40,param_2,&uStack_c0);
    FUN_1003b8b0(aiStack_80,aiStack_60,auStack_a0,aiStack_80);
    uVar1 = 0;
    while (aiStack_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) goto LAB_1003d4ee;
    }
    FUN_1003bbb0(&uStack_c0,auStack_a0,auStack_20,param_2,auStack_40);
    FUN_1003b8b0(aiStack_60,aiStack_80,auStack_a0,aiStack_60);
    uVar1 = 0;
    while (aiStack_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = auStack_40;
        goto LAB_1003d4f2;
      }
    }
    FUN_1003bbb0(auStack_40,auStack_a0,&uStack_c0,param_2,auStack_20);
    FUN_1003b8b0(aiStack_80,aiStack_60,auStack_a0,aiStack_80);
    uVar1 = 0;
    while (aiStack_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = auStack_20;
        goto LAB_1003d4f2;
      }
    }
    FUN_1003bbb0(auStack_20,auStack_a0,auStack_40,param_2,&uStack_c0);
    FUN_1003b8b0(aiStack_60,aiStack_80,auStack_a0,aiStack_60);
    uVar1 = 0;
    while (aiStack_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
LAB_1003d4ee:
        puVar3 = &uStack_c0;
LAB_1003d4f2:
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_3 = *puVar3;
          puVar3 = puVar3 + 1;
          param_3 = param_3 + 1;
        }
        return;
      }
    }
    FUN_1003bbb0(&uStack_c0,auStack_a0,auStack_20,param_2,auStack_40);
  } while( true );
}


/* END FUNCTION 0x1003fcb0 */
