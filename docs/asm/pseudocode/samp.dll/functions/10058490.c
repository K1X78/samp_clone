/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10058490
 * Name: FUN_10058490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall FUN_10058490(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_40 [52];
  undefined4 local_c;
  int local_8;
  
  local_c = 100;
  if (99 < param_4) {
    local_8 = param_1;
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint_x86.h",0xe8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_40,&DAT_101383ec);
  }
  iVar2 = 100 - param_4;
  do {
    puVar1 = (uint *)(param_1 + param_4 * 4);
    bVar3 = CARRY4(*puVar1,param_3);
    *puVar1 = *puVar1 + param_3;
    if (!bVar3) break;
    param_3 = 1;
    param_4 = param_4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return CONCAT44(param_2,(uint)bVar3);
}


/* END FUNCTION 0x10058490 */
