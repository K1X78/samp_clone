/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2cc0
 * Name: FUN_100f2cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall
FUN_100f2cc0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint local_4;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    return;
  }
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 1:
    if (*(int *)(param_2 + 8) - (int)*(char **)(param_2 + 4) == 1) {
      pcVar1 = "TRUE";
      if (**(char **)(param_2 + 4) == '\0') {
        pcVar1 = "FALSE";
      }
      uVar3 = (*(code *)PTR___strdup_101554c4)(pcVar1);
    }
    else {
      uVar3 = 0;
    }
    break;
  case 2:
  case 10:
    uVar3 = FUN_100f1c90();
    break;
  case 3:
    if (*(int *)(param_2 + 4) + 1U <= *(uint *)(param_2 + 8)) goto LAB_100f2d50;
    uVar3 = 0;
    break;
  case 4:
LAB_100f2d50:
    uVar3 = FUN_100f1c10();
    break;
  case 5:
    uVar3 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
    break;
  case 6:
    uVar3 = FUN_100f20e0(*(undefined4 *)(param_2 + 4),1);
    break;
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x19:
  case 0x1b:
  case 0x1d:
    goto switchD_100f2cea_caseD_7;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    iVar2 = FUN_100f1cf0(&local_4,*(undefined4 *)(param_2 + 8));
    uVar3 = (iVar2 < 0) - 1 & local_4;
    break;
  case 0x17:
    uVar3 = FUN_100f2250();
    break;
  case 0x18:
    uVar3 = FUN_100f2160(*(undefined4 *)(param_2 + 8));
    break;
  default:
    return;
  }
  if (uVar3 != 0) {
    if (*(int *)(param_3 + 0x440) != 0) {
      FUN_100cf340(param_3,param_4,param_5,uVar3);
    }
    if (param_4 == 0) {
      FUN_100d8ae0(param_3,"   %s: %s\n",param_5,uVar3);
    }
    (*(code *)PTR__free_101554bc)(uVar3);
  }
switchD_100f2cea_caseD_7:
  return;
}


/* END FUNCTION 0x100f2cc0 */
