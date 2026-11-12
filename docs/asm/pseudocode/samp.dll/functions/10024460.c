/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10024460
 * Name: FUN_10024460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10024460(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = **(char **)(param_2 + 0x10);
  switch(cVar1) {
  case '\x1e':
    FUN_100243d0(param_1,param_2);
    return 1;
  default:
    return 1;
  case ' ':
  case '!':
    FUN_10023b70(param_1,*(undefined4 *)(param_2 + 2),*(undefined2 *)(param_2 + 6),
                 (cVar1 != '!') + '=');
    return 1;
  case '\"':
    FUN_10024400(param_1,param_2);
    return 1;
  case '9':
    FUN_100230d0(param_1,param_2);
    return 0;
  case ':':
    FUN_10023d20(param_1,param_2);
    return 0;
  case ';':
    FUN_10023f70(param_1,param_2);
    return 0;
  case '<':
    FUN_10024080(param_1,param_2);
    break;
  case '=':
  case '>':
    cVar1 = FUN_10024210(param_1,param_2,
                         CONCAT31((int3)((uint)*(char **)(param_2 + 0x10) >> 8),cVar1));
    if (cVar1 != '\0') {
      **(char **)(param_2 + 0x10) = (**(char **)(param_2 + 0x10) == '=') + '*';
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10024460 */
