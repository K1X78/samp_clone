/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00433740
 * Name: FUN_00433740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_00433740(int param_1,byte *param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  
  if (param_2 == (byte *)0x0) goto LAB_004337a4;
  if (param_6 == 0) {
    if (param_8 == 0) goto LAB_0043375a;
    if (param_7 == 0) goto LAB_004337a4;
  }
  else {
    if (param_8 != 0) goto LAB_004337a4;
LAB_0043375a:
    if (param_7 != 0) goto LAB_004337a4;
  }
  if (((-2 < param_3) && (param_3 < 0x80)) &&
     (uVar1 = FUN_00408380((char *)param_2), (int)uVar1 < 0x100)) {
    if (param_4 == 4) {
      param_4 = 2;
    }
    else if (param_4 == 5) {
      iVar2 = FUN_00433740(param_1,param_2,param_3,1,param_5,param_6,param_7,param_8);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00433740(param_1,param_2,param_3,2,param_5,param_6,param_7,param_8);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_4 = 3;
    }
    psVar3 = FUN_0041b710(param_1,param_2,uVar1,param_3,(char)param_4,0);
    if (((psVar3 != (short *)0x0) && (*(byte *)(psVar3 + 1) == param_4)) && (*psVar3 == param_3)) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        FUN_0042f990(5,(undefined **)
                       "unable to delete/modify user-function due to active statements");
        return 5;
      }
      FUN_0040dcd0();
    }
    psVar3 = FUN_0041b710(param_1,param_2,uVar1,param_3,(char)param_4,1);
    if (psVar3 != (short *)0x0) {
      *(int *)(psVar3 + 6) = param_6;
      *(int *)(psVar3 + 8) = param_7;
      *psVar3 = (short)param_3;
      *(undefined1 *)((int)psVar3 + 3) = 0;
      *(int *)(psVar3 + 10) = param_8;
      *(undefined4 *)(psVar3 + 2) = param_5;
      return 0;
    }
    return 7;
  }
LAB_004337a4:
  iVar2 = FUN_0041d7c0();
  return iVar2;
}


/* END FUNCTION 0x00433740 */
