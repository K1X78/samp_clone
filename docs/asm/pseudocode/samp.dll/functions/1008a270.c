/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008a270
 * Name: FUN_1008a270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1008a270(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *_Memory;
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *local_8;
  int local_4;
  
  _Memory = operator_new(0x29e);
  if (_Memory == (char *)0x0) {
    return -0x7ff8fff2;
  }
  iVar3 = 0x100;
  pcVar1 = _Memory;
  do {
    if (pcVar1[param_1 - (int)_Memory] == '\0') {
      if (iVar3 != 0) goto LAB_1008a2c4;
      break;
    }
    *pcVar1 = pcVar1[param_1 - (int)_Memory];
    pcVar1 = pcVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar1 = pcVar1 + -1;
LAB_1008a2c4:
  *pcVar1 = '\0';
  *(undefined4 *)(_Memory + 0x284) = param_2;
  local_8 = _Memory;
  SetRect((LPRECT)(_Memory + 0x288),0,0,0,0);
  _Memory[0x298] = '\0';
  *(undefined4 *)(_Memory + 0x299) = param_3;
  _Memory[0x29d] = '\0';
  iVar3 = 3;
  pcVar1 = _Memory + 0x101;
  do {
    iVar3 = iVar3 + -1;
    pcVar4 = pcVar1;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    }
    pcVar1 = pcVar1 + 0x81;
  } while (iVar3 != 0);
  iVar3 = FUN_100895d0(&local_8);
  if (-1 < iVar3) {
    FUN_100886d0(0,*(undefined4 *)(local_4 + 0x150));
    return iVar3;
  }
  _free(_Memory);
  return iVar3;
}


/* END FUNCTION 0x1008a270 */
