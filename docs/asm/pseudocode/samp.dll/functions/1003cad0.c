/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003cad0
 * Name: FUN_1003cad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003cad0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [16];
  
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  *param_2 = 0xffff;
  local_5c = 0;
  local_58 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_54 = 0;
  param_2[4] = 0;
  local_50 = 0;
  param_2[5] = 0;
  local_4c = 0;
  local_48 = 0;
  param_2[6] = 0;
  local_40[0] = 1;
  local_60 = 2;
  local_44 = 0;
  param_2[7] = 0;
  cVar1 = FUN_100399e0(param_2,param_1);
  if (cVar1 != '\0') {
    *param_2 = 3;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  do {
    FUN_10039850(param_2,&local_60);
    FUN_1003b530(param_1,param_2,local_40 + 8);
    iVar2 = 8;
    bVar5 = true;
    piVar3 = local_40 + 8;
    piVar4 = local_40;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      return;
    }
  } while( true );
}


/* END FUNCTION 0x1003cad0 */
