/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00433460
 * Name: FUN_00433460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00433460(uint *param_1,int *param_2,int *param_3,uint param_4,uint param_5)

{
  void *in_EAX;
  undefined4 *unaff_EDI;
  uint *local_4;
  
  if ((*(byte *)(*(int *)((int)in_EAX + 0xc) + 0x22) & 0x10) != 0) {
    local_4 = (uint *)0x0;
    FUN_00437170(param_3,unaff_EDI,in_EAX,param_4,param_5,param_2,param_1,(uint *)&local_4);
    if (local_4[7] != 0) {
      FUN_004080d0(local_4[6]);
    }
    FUN_00408130(*param_3);
    return;
  }
  local_4 = param_1;
  FUN_00432d20(param_3,(int)unaff_EDI,(int)in_EAX,param_4,param_5,param_2,param_1);
  return;
}


/* END FUNCTION 0x00433460 */
