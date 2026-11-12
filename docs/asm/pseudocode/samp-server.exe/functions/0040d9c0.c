/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d9c0
 * Name: FUN_0040d9c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_0040d9c0(undefined4 param_1,int param_2,undefined4 *param_3,uint param_4)

{
  uint *in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_ECX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_0040d8d0(in_EAX,param_2);
  if ((uVar1 < 8) && (uVar1 != 0)) {
    if (uVar1 == 7) {
      uVar1 = in_EAX[3];
    }
    else {
      uVar1 = in_EAX[1];
    }
    uVar2 = FUN_0040d9a0();
    uVar3 = uVar2;
    uVar4 = extraout_ECX;
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      *(char *)(uVar3 + (int)param_3) = (char)uVar4;
      uVar4 = uVar4 >> 8 | uVar1 << 0x18;
      uVar1 = uVar1 >> 8;
    }
    return uVar2;
  }
  if (uVar1 < 0xc) {
    return 0;
  }
  uVar1 = in_EAX[6];
  puVar5 = (undefined4 *)in_EAX[5];
  puVar6 = param_3;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if ((*(byte *)((int)in_EAX + 0x1d) & 0x40) != 0) {
    uVar1 = uVar1 + *in_EAX;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    uVar4 = uVar1 - in_EAX[6];
    puVar5 = (undefined4 *)(in_EAX[6] + (int)param_3);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return uVar1;
}


/* END FUNCTION 0x0040d9c0 */
