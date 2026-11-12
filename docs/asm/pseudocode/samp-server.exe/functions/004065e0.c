/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004065e0
 * Name: FUN_004065e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004065e0(int *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  int local_c;
  uint *local_8;
  int local_4;
  
  puVar1 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&local_8);
  FUN_00403100(param_1,puVar1[2],(int *)&param_2);
  FUN_004031d0(local_8,&local_4);
  FUN_004031d0(param_2,&local_c);
  if (local_c == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_00406190(extraout_ECX,param_2,puVar1[3]);
  uVar4 = puVar1[4];
  iVar3 = uVar4 + local_c;
  if (iVar3 <= local_4) {
    do {
      iVar3 = FUN_00406190(iVar3,param_2,puVar1[3]);
      if (iVar3 == iVar2) {
        iVar3 = FUN_004064e0(param_2,local_8,param_2,local_c);
        if (iVar3 == 0) {
          return uVar4;
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = uVar4 + local_c;
    } while (iVar3 <= local_4);
  }
  return 0xffffffff;
}


/* END FUNCTION 0x004065e0 */
