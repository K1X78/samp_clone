/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10058580
 * Name: FUN_10058580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong __fastcall FUN_10058580(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_3c [56];
  
  if ((param_3 != 0) && (param_3 < 0x20)) {
    iVar7 = 100;
    uVar4 = 0xffffffff >> (0x20 - (byte)param_3 & 0x1f);
    iVar5 = 0;
    uVar6 = 0;
    if (param_4 != 0) {
      uVar6 = uVar4;
    }
    do {
      puVar1 = (uint *)(param_1 + iVar5 * 4);
      bVar2 = (byte)param_3 & 0x1f;
      *puVar1 = *puVar1 << bVar2 | *puVar1 >> 0x20 - bVar2;
      uVar3 = *(uint *)(param_1 + iVar5 * 4) & uVar4;
      puVar1 = (uint *)(param_1 + iVar5 * 4);
      *puVar1 = *puVar1 ^ uVar3;
      puVar1 = (uint *)(param_1 + iVar5 * 4);
      *puVar1 = *puVar1 | uVar6;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
      uVar6 = uVar3;
    } while (iVar7 != 0);
    return CONCAT44(param_2,uVar3) & 0xffffffff00000001;
  }
  FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint_x86.h",0x424);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_3c,&DAT_101383ec);
}


/* END FUNCTION 0x10058580 */
