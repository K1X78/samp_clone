/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405950
 * Name: FUN_00405950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00405950(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_4 [4];
  
  puVar2 = param_2;
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = puVar2[3];
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      sVar3 = _fread(local_4,4,1,(FILE *)puVar2[1]);
      if (sVar3 != 1) {
        return iVar5;
      }
      puVar4 = (undefined4 *)FUN_00401020(local_4);
      *param_2 = *puVar4;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return iVar5;
}


/* END FUNCTION 0x00405950 */
