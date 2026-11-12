/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004058d0
 * Name: FUN_004058d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004058d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Str;
  int iVar3;
  size_t sVar4;
  size_t _Count;
  FILE *_File;
  undefined4 local_4;
  
  puVar2 = param_2;
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = puVar2[3];
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      local_4 = *param_2;
      _File = (FILE *)puVar2[1];
      param_2 = param_2 + 1;
      _Count = 1;
      sVar4 = 4;
      _Str = (void *)FUN_00401020(&local_4);
      sVar4 = _fwrite(_Str,sVar4,_Count,_File);
      if (sVar4 != 1) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return iVar3;
}


/* END FUNCTION 0x004058d0 */
