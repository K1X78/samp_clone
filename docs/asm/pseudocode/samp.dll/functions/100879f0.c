/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100879f0
 * Name: FUN_100879f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100879f0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((*(char *)(param_1 + 0x3c) == '\0') || (*(char *)(param_1 + 4) == '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(*(int *)(param_1 + 0x15e) + 0x14))(param_2,param_3,param_4);
  if (cVar1 != '\0') {
    return 1;
  }
  if (param_2 == 0x100) {
    switch(param_3) {
    case 0xd:
      if (*(char *)(param_1 + 0x214) == '\0') {
        return 0;
      }
      if (*(int *)(param_1 + 0x152) != *(int *)(param_1 + 0x156)) {
        *(int *)(param_1 + 0x152) = *(int *)(param_1 + 0x156);
        FUN_10084460(0x201,1,param_1);
      }
      *(undefined1 *)(param_1 + 0x214) = 0;
      cVar1 = *(char *)(*(int *)(param_1 + 0x18) + 1);
      break;
    default:
      goto switchD_10087a4d_caseD_e;
    case 0x25:
    case 0x26:
      if (*(int *)(param_1 + 0x156) < 1) {
        return 1;
      }
      iVar2 = *(int *)(param_1 + 0x156) + -1;
      *(int *)(param_1 + 0x156) = iVar2;
      *(int *)(param_1 + 0x152) = iVar2;
      if (*(char *)(param_1 + 0x214) != '\0') {
        return 1;
      }
      FUN_10084460(0x201,1,param_1);
      return 1;
    case 0x27:
    case 0x28:
      iVar2 = *(int *)(param_1 + 0x156) + 1;
      if (*(int *)(param_1 + 0x259) <= iVar2) {
        return 1;
      }
      *(int *)(param_1 + 0x156) = iVar2;
      *(int *)(param_1 + 0x152) = iVar2;
      if (*(char *)(param_1 + 0x214) != '\0') {
        return 1;
      }
      FUN_10084460(0x201,1,param_1);
      return 1;
    case 0x73:
      if ((param_4 & 0x40000000) != 0) {
        return 1;
      }
      bVar3 = *(char *)(param_1 + 0x214) == '\0';
      *(bool *)(param_1 + 0x214) = bVar3;
      if (bVar3) {
        return 1;
      }
      FUN_10084460(0x201,1,param_1);
      cVar1 = *(char *)(*(int *)(param_1 + 0x18) + 1);
    }
    if (cVar1 == '\0') {
      FUN_10084880();
    }
    return 1;
  }
switchD_10087a4d_caseD_e:
  return 0;
}


/* END FUNCTION 0x100879f0 */
