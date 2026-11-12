/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406540
 * Name: FUN_00406540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00406540(int *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  void *this;
  uint uVar3;
  uint *local_c;
  uint local_8;
  uint local_4;
  
  puVar1 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&local_c);
  FUN_00403100(param_1,puVar1[2],(int *)&param_2);
  FUN_004031d0(local_c,(int *)&local_8);
  FUN_004031d0(param_2,(int *)&local_4);
  uVar3 = local_8;
  if ((int)local_4 < (int)local_8) {
    uVar3 = local_4;
  }
  if ((int)puVar1[4] < (int)uVar3) {
    uVar3 = puVar1[4];
  }
  if (uVar3 == 0) {
    return 0;
  }
  iVar2 = FUN_004064e0(this,local_c,param_2,uVar3);
  if ((iVar2 == 0) && (uVar3 != puVar1[4])) {
    iVar2 = local_8 - local_4;
  }
  return iVar2;
}


/* END FUNCTION 0x00406540 */
