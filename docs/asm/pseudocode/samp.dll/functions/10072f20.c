/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10072f20
 * Name: FUN_10072f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10072f20(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  tagPOINT local_8;
  
  iVar4 = 0;
  GetCursorPos(&local_8);
  iVar1 = *(int *)(param_1 + 0x113);
  cVar2 = '\0';
  if (iVar1 == 0) {
    cVar2 = *(char *)(param_1 + 0xa4);
    iVar4 = *(int *)(param_1 + 0xb7);
  }
  else if (iVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0xa5);
    iVar4 = *(int *)(param_1 + 0xbb);
  }
  else if (iVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0xa6);
    iVar4 = *(int *)(param_1 + 0xbf);
  }
  if (*(int *)(param_1 + 0x7c) == 1) {
    if (iVar4 != 0) {
LAB_10072f90:
      if (cVar2 == '\0') {
        iVar3 = *(int *)(param_1 + 0xa7);
        iVar4 = local_8.x;
      }
      else {
        iVar4 = *(int *)(param_1 + 0xa7);
        iVar3 = local_8.x;
      }
      goto LAB_10072fb6;
    }
  }
  else if (iVar4 == 0) goto LAB_10072f90;
  if (cVar2 == '\0') {
    iVar3 = *(int *)(param_1 + 0xab);
    iVar4 = local_8.y;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xab);
    iVar3 = local_8.y;
  }
LAB_10072fb6:
  if (iVar4 - iVar3 != 0) {
    FUN_10072f00(iVar1,(float)(iVar4 - iVar3) * 0.01);
    FUN_10071e60();
  }
  return;
}


/* END FUNCTION 0x10072f20 */
