/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406bc0
 * Name: FUN_00406bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00406bc0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  short local_34 [26];
  
  puVar1 = param_2;
  iVar2 = param_2[2];
  bVar6 = iVar2 < 0;
  iVar4 = 10;
  iVar3 = 1;
  if (bVar6) {
    iVar3 = 2;
    iVar2 = -iVar2;
  }
  uVar5 = (uint)bVar6;
  if (9 < iVar2) {
    do {
      iVar4 = iVar4 * 10;
      iVar3 = iVar3 + 1;
    } while (iVar4 <= iVar2);
  }
  *(undefined1 *)((int)local_34 + iVar3) = 0;
  iVar4 = iVar3;
  while (iVar4 = iVar4 + -1, (int)uVar5 <= iVar4) {
    *(char *)((int)local_34 + iVar4) = (char)(iVar2 % 10) + '0';
    iVar2 = iVar2 / 10;
  }
  if (uVar5 != 0) {
    local_34[0]._0_1_ = 0x2d;
  }
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_00403250(param_2,local_34,puVar1[3],0,0x7fffffff);
  return iVar3;
}


/* END FUNCTION 0x00406bc0 */
