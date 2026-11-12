/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473140
 * Name: FUN_00473140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00473140(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_4;
  
  puVar1 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  uVar5 = puVar1[2];
  iVar4 = 0;
  iVar3 = 0;
  psVar2 = (short *)FUN_0046fd00(param_1,(int)puVar1,3,&local_4);
  FUN_00403250(param_2,psVar2,iVar3,iVar4,uVar5);
  return 1;
}


/* END FUNCTION 0x00473140 */
