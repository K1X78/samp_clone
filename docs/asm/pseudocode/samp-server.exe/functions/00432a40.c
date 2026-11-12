/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00432a40
 * Name: FUN_00432a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_00432a40(int param_1,int param_2,int param_3,uint param_4,uint param_5,ushort param_6,
            int param_7)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar7 = *(int *)(param_1 + 0x14);
  do {
    if (iVar7 == 0) {
      return 0;
    }
    if ((((*(int *)(iVar6 + 8) == param_2) &&
         ((*(uint *)(iVar6 + 0x18) & param_4) == 0 && (*(uint *)(iVar6 + 0x1c) & param_5) == 0)) &&
        (*(int *)(iVar6 + 0xc) == param_3)) && ((param_6 & 0xfff & *(ushort *)(iVar6 + 0x10)) != 0))
    {
      if ((param_7 == 0) || (*(ushort *)(iVar6 + 0x10) == 0x80)) {
        return iVar6;
      }
      bVar2 = FUN_00415880();
      if (CONCAT31(extraout_var,bVar2) != 0) {
        piVar3 = FUN_00430190();
        piVar5 = *(int **)(param_7 + 8);
        iVar4 = 0;
        if (*piVar5 != param_3) {
          iVar4 = 0;
          do {
            if (*(int *)(param_7 + 4) <= iVar4) {
              return 0;
            }
            piVar1 = piVar5 + 1;
            piVar5 = piVar5 + 1;
            iVar4 = iVar4 + 1;
          } while (*piVar1 != param_3);
        }
        if (piVar3 == (int *)0x0) {
          return iVar6;
        }
        iVar4 = FUN_00408450((byte *)*piVar3,*(byte **)(*(int *)(param_7 + 0x2c) + iVar4 * 4));
        if (iVar4 == 0) {
          return iVar6;
        }
      }
    }
    iVar7 = iVar7 + -1;
    iVar6 = iVar6 + 0x28;
  } while( true );
}


/* END FUNCTION 0x00432a40 */
