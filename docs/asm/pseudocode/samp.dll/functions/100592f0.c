/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100592f0
 * Name: FUN_100592f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall
FUN_100592f0(uint *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_40 [52];
  undefined4 local_c;
  uint *local_8;
  
  local_c = 2;
  if (param_5 != 0) {
    local_8 = param_1;
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint_x86.h",0x159);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_40,&DAT_101383ec);
  }
  bVar7 = CARRY4(*param_1,param_4);
  *param_1 = *param_1 + param_4;
  iVar5 = 1;
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
    puVar1 = param_1 + iVar6;
    uVar3 = (uint)bVar7;
    uVar2 = *puVar1;
    uVar4 = *puVar1 + param_3;
    bVar7 = CARRY4(uVar2,param_3) || CARRY4(uVar4,uVar3);
    *puVar1 = uVar4 + uVar3;
    if (!CARRY4(uVar2,param_3) && !CARRY4(uVar4,uVar3)) break;
    param_3 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return CONCAT44(param_2,(uint)bVar7);
}


/* END FUNCTION 0x100592f0 */
