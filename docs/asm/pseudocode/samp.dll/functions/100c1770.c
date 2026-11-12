/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c1770
 * Name: FUN_100c1770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c1770(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8,
                undefined4 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  
  uVar1 = *param_4;
  uVar2 = *param_2;
  *param_4 = 0;
  *param_2 = 0;
  *param_8 = 0;
  if (uVar1 < 5) {
    return 6;
  }
  local_5c = 0;
  local_60 = 0;
  iVar3 = FUN_100c1640(local_70,param_5,param_6,param_9);
  if (iVar3 == 0) {
    local_5c = param_1;
    local_48 = uVar2;
    FUN_100c1090(local_70);
    *param_4 = uVar1;
    iVar3 = FUN_100c1100(local_70,uVar2,param_3,param_4,param_7,param_8);
    *param_2 = local_4c;
    if ((iVar3 == 0) && (*param_8 == 3)) {
      iVar3 = 6;
    }
    FUN_100c1520(local_70,param_9);
  }
  return iVar3;
}


/* END FUNCTION 0x100c1770 */
