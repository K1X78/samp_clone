/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040be70
 * Name: FUN_0040be70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall
FUN_0040be70(undefined4 param_1,int param_2,undefined4 *param_3,int param_4,int *param_5,
            uint *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = *param_6;
  iVar1 = *param_5;
  iVar3 = 0;
  iVar7 = 0;
  uVar6 = 0;
  do {
    if (iVar7 < (int)uVar5) {
      if (iVar3 < param_4) goto LAB_0040bed2;
LAB_0040bef1:
      uVar4 = *(ushort *)(iVar1 + iVar7 * 2);
      iVar7 = iVar7 + 1;
    }
    else {
      if (param_4 <= iVar3) {
        *param_5 = (int)param_3;
        *param_6 = uVar6;
        for (uVar5 = (uVar6 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_3 = *param_7;
          param_7 = param_7 + 1;
          param_3 = param_3 + 1;
        }
        for (uVar5 = uVar6 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)param_3 = *(undefined1 *)param_7;
          param_7 = (undefined4 *)((int)param_7 + 1);
          param_3 = (undefined4 *)((int)param_3 + 1);
        }
        return;
      }
LAB_0040bed2:
      if ((iVar7 < (int)uVar5) &&
         (*(uint *)(param_2 + (uint)*(ushort *)(iVar1 + iVar7 * 2) * 4) <=
          *(uint *)(param_2 + (uint)*(ushort *)((int)param_3 + iVar3 * 2) * 4))) goto LAB_0040bef1;
      uVar4 = *(ushort *)((int)param_3 + iVar3 * 2);
      iVar3 = iVar3 + 1;
    }
    iVar2 = *(int *)(param_2 + (uint)uVar4 * 4);
    *(ushort *)((int)param_7 + uVar6 * 2) = uVar4;
    uVar6 = uVar6 + 1;
    if ((iVar3 < param_4) &&
       (*(int *)(param_2 + (uint)*(ushort *)((int)param_3 + iVar3 * 2) * 4) == iVar2)) {
      iVar3 = iVar3 + 1;
    }
  } while( true );
}


/* END FUNCTION 0x0040be70 */
