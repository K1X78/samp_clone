/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10058e10
 * Name: FUN_10058e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall
FUN_10058e10(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_40 [52];
  undefined4 local_c;
  int local_8;
  
  local_c = 6;
  if (4 < param_5) {
    local_8 = param_1;
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint_x86.h",0x159);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_40,&DAT_101383ec);
  }
  puVar1 = (uint *)(param_1 + param_5 * 4);
  bVar6 = CARRY4(*puVar1,param_4);
  *puVar1 = *puVar1 + param_4;
  iVar5 = 5 - param_5;
  do {
    param_5 = param_5 + 1;
    puVar1 = (uint *)(param_1 + param_5 * 4);
    uVar3 = (uint)bVar6;
    uVar2 = *puVar1;
    uVar4 = *puVar1 + param_3;
    bVar6 = CARRY4(uVar2,param_3) || CARRY4(uVar4,uVar3);
    *puVar1 = uVar4 + uVar3;
    if (!CARRY4(uVar2,param_3) && !CARRY4(uVar4,uVar3)) break;
    param_3 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return CONCAT44(param_2,(uint)bVar6);
}


/* END FUNCTION 0x10058e10 */
