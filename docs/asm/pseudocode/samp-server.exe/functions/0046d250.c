/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d250
 * Name: FUN_0046d250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_0046d250(int *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char local_c [12];
  
  iVar2 = *param_1;
  for (iVar4 = 0;
      (((iVar2 != 0 && (cVar1 = (char)*param_1, '/' < cVar1)) && (cVar1 < ':')) && (iVar4 < 0xb));
      iVar4 = iVar4 + 1) {
    param_1 = param_1 + 1;
    local_c[iVar4] = cVar1;
    iVar2 = *param_1;
  }
  local_c[iVar4] = '\0';
  lVar3 = _atol(local_c);
  *param_2 = lVar3;
  return param_1;
}


/* END FUNCTION 0x0046d250 */
