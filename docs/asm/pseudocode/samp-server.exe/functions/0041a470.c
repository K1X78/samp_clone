/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a470
 * Name: FUN_0041a470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_0041a470(int param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_00412930(0x44);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  piVar3 = FUN_00415950(param_1,(int *)*param_2,param_3);
  *puVar2 = piVar3;
  psVar4 = FUN_0041a330(param_1,(short *)param_2[2],param_3);
  puVar2[2] = psVar4;
  uVar5 = FUN_00420310(param_1,(undefined4 *)param_2[3],param_3);
  puVar2[3] = uVar5;
  piVar3 = FUN_00415950(param_1,(int *)param_2[4],param_3);
  puVar2[4] = piVar3;
  uVar5 = FUN_00420310(param_1,(undefined4 *)param_2[5],param_3);
  puVar2[5] = uVar5;
  piVar3 = FUN_00415950(param_1,(int *)param_2[6],param_3);
  puVar2[6] = piVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  puVar6 = FUN_0041a470(param_1,(undefined4 *)param_2[7],param_3);
  puVar2[7] = puVar6;
  uVar5 = FUN_00420310(param_1,(undefined4 *)param_2[10],param_3);
  puVar2[10] = uVar5;
  uVar5 = FUN_00420310(param_1,(undefined4 *)param_2[0xb],param_3);
  puVar2[0xb] = uVar5;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  uVar1 = *(ushort *)((int)param_2 + 6);
  puVar2[9] = 0;
  puVar2[0xe] = 0xffffffff;
  puVar2[0xf] = 0xffffffff;
  puVar2[0x10] = 0xffffffff;
  *(ushort *)((int)puVar2 + 6) = uVar1 & 0xfff7;
  return puVar2;
}


/* END FUNCTION 0x0041a470 */
