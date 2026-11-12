/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e7c0
 * Name: FUN_0040e7c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_0040e7c0(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == 'b') {
    return true;
  }
  for (; (*param_1 == -99 || (*param_1 == -100)); param_1 = *(char **)(param_1 + 8)) {
  }
  cVar1 = *param_1;
  if (cVar1 == -0x7c) {
    cVar1 = param_1[0x23];
  }
  switch(cVar1) {
  case '^':
    return param_2 == 'a';
  default:
    goto switchD_0040e7ef_caseD_5f;
  case -0x7f:
    bVar2 = param_2 == 'd';
    break;
  case -0x7e:
    bVar2 = param_2 == 'e';
    break;
  case -0x7d:
    goto switchD_0040e7ef_caseD_83;
  case -0x68:
    if (-1 < *(short *)(param_1 + 0x1c)) {
      return false;
    }
    if (param_2 == 'd') {
      return true;
    }
    goto joined_r0x0040e820;
  }
  if (!bVar2) {
joined_r0x0040e820:
    if (param_2 != 'c') {
switchD_0040e7ef_caseD_5f:
      return false;
    }
  }
switchD_0040e7ef_caseD_83:
  return true;
}


/* END FUNCTION 0x0040e7c0 */
