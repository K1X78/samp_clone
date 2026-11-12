/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10058700
 * Name: FUN_10058700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 __fastcall
FUN_10058700(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,uint param_6
            ,int param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_38 [52];
  
  if (param_6 <= param_5) {
    iVar5 = param_5 - param_6;
    bVar7 = false;
    iVar6 = 0;
    do {
      uVar2 = *(uint *)(param_3 + iVar6 * 4);
      puVar1 = (uint *)(param_4 + iVar6 * 4);
      uVar3 = (uint)bVar7;
      uVar4 = uVar2 + *puVar1;
      bVar7 = CARRY4(uVar2,*puVar1) || CARRY4(uVar4,uVar3);
      *(uint *)(param_7 + iVar6 * 4) = uVar4 + uVar3;
      iVar6 = iVar6 + 1;
      param_6 = param_6 - 1;
    } while (param_6 != 0);
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar2 = *(uint *)(param_3 + iVar6 * 4);
      uVar3 = (uint)bVar7;
      bVar7 = CARRY4(uVar2,uVar3);
      *(uint *)(param_7 + iVar6 * 4) = uVar2 + uVar3;
      iVar6 = iVar6 + 1;
    }
    return CONCAT44(param_2,(uint)bVar7);
  }
  FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint_x86.h",0x1c3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_38,&DAT_101383ec);
}


/* END FUNCTION 0x10058700 */
