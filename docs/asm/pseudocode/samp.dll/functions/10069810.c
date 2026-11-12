/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069810
 * Name: FUN_10069810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10069810(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  local_4 = 100;
  local_10 = 0;
  local_8 = 100;
  iVar1 = 100;
  iVar2 = 100;
  if (*(int *)(param_1 + 0x13f) != 0) {
    (**(code **)(**(int **)(param_1 + 0x13f) + 0x38))
              (*(int **)(param_1 + 0x13f),0,&DAT_10118354,0xffffffff,&local_10,0x504,0xff000000);
    iVar1 = local_8;
    iVar2 = local_4;
  }
  *param_2 = iVar1 - local_10;
  param_2[1] = iVar2 - local_c;
  return;
}


/* END FUNCTION 0x10069810 */
