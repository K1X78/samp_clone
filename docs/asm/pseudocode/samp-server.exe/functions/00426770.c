/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426770
 * Name: FUN_00426770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00426770(int *param_1,char *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  int *in_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)*in_EAX;
  iVar5 = *param_1;
  uVar1 = *(undefined1 *)(iVar5 + 0x21);
  *(undefined1 *)(iVar5 + 0x21) = 1;
  bVar3 = FUN_00424ba0(CONCAT31((int3)((uint)param_1 >> 8),uVar1));
  *(undefined1 *)(iVar5 + 0x21) = uVar1;
  if ((CONCAT31(extraout_var,bVar3) == 0) && (iVar5 = 0, 0 < *piVar2)) {
    iVar6 = 0;
    do {
      bVar4 = FUN_00415fe0(*(char **)(piVar2[3] + iVar6),param_2);
      if (CONCAT31(extraout_var_00,bVar4) < 2) {
        return iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < *piVar2);
  }
  return 0;
}


/* END FUNCTION 0x00426770 */
