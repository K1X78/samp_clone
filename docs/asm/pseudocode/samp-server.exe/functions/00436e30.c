/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00436e30
 * Name: FUN_00436e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00436e30(int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  byte *pbVar1;
  byte *in_EAX;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  
  FUN_00407e50(*(int *)(param_1 + 0x44));
  uVar2 = FUN_00408380((char *)in_EAX);
  puVar3 = FUN_00412930(uVar2 + 0x11);
  if (puVar3 == (undefined4 *)0x0) {
    if (param_4 != (undefined *)0x0) {
      (*(code *)param_4)(param_3);
    }
  }
  else {
    pbVar1 = (byte *)(puVar3 + 4);
    pbVar6 = pbVar1;
    for (uVar5 = uVar2 + 1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar6 = *(undefined4 *)in_EAX;
      in_EAX = in_EAX + 4;
      pbVar6 = pbVar6 + 4;
    }
    for (uVar2 = uVar2 + 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pbVar6 = *in_EAX;
      in_EAX = in_EAX + 1;
      pbVar6 = pbVar6 + 1;
    }
    *puVar3 = param_2;
    puVar3[1] = pbVar1;
    puVar3[3] = param_4;
    puVar3[2] = param_3;
    puVar4 = (undefined4 *)FUN_00412f40((void *)(param_1 + 0x114),pbVar1,(int)puVar3);
    if ((puVar4 != (undefined4 *)0x0) && ((code *)puVar4[3] != (code *)0x0)) {
      (*(code *)puVar4[3])(puVar4[2]);
    }
    FUN_00408130(param_1);
    if (puVar4 == puVar3) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    FUN_00420a50(0);
  }
  uVar2 = FUN_004340c0(0);
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return uVar2;
}


/* END FUNCTION 0x00436e30 */
