/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403e00
 * Name: FUN_00403e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00403e00(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_7a [2];
  int local_78;
  undefined4 local_74;
  char local_70;
  int local_6c;
  undefined1 local_64 [99];
  undefined1 local_1;
  
  local_78 = 0;
  local_74 = 0;
  if (param_3 == 0) {
    iVar2 = 0;
    if (*param_2 != 0) {
      do {
        local_64[iVar2] = (char)*param_2;
        iVar2 = iVar2 + 1;
        if (iVar2 == 99) {
          local_1 = 0;
          _printf("%s",local_64);
          iVar2 = 0;
        }
        piVar1 = param_2 + 1;
        param_2 = param_2 + 1;
      } while (*piVar1 != 0);
      if (0 < iVar2) {
        local_64[iVar2] = 0;
        _printf("%s",local_64);
      }
    }
  }
  else if (*param_2 != 0) {
    do {
      local_70 = (char)*param_2;
      iVar3 = FUN_00403d30(&local_74,local_70,local_7a);
      iVar2 = local_78;
      if (iVar3 == -1) {
        __fputchar((int)local_70);
      }
      else if (iVar3 == 0) {
        if (param_4 <= local_78) {
          FUN_004030f0(param_1,10);
        }
      }
      else if (iVar3 == 1) {
        local_78 = FUN_00403aa0(local_70,(int *)param_1,local_6c);
        local_78 = iVar2 + local_78;
        local_74 = 0;
      }
      piVar1 = param_2 + 1;
      param_2 = param_2 + 1;
    } while (*piVar1 != 0);
    return local_78;
  }
  return 0;
}


/* END FUNCTION 0x00403e00 */
