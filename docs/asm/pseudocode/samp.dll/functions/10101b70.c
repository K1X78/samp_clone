/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10101b70
 * Name: ___updatetlocinfo_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int ___updatetlocinfo_lk(void)

{
  int *piVar1;
  int *piVar2;
  _ptiddata p_Var3;
  
  p_Var3 = __getptd();
  piVar1 = (int *)p_Var3->_tfpecode;
  if (piVar1 != (int *)PTR_DAT_10155d74) {
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0xb];
      *piVar1 = *piVar1 + -1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xd];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xc];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0x10];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
    }
    p_Var3->_tfpecode = (int)PTR_DAT_10155d74;
    *(int *)PTR_DAT_10155d74 = *(int *)PTR_DAT_10155d74 + 1;
    if (*(int *)(PTR_DAT_10155d74 + 0x2c) != 0) {
      **(int **)(PTR_DAT_10155d74 + 0x2c) = **(int **)(PTR_DAT_10155d74 + 0x2c) + 1;
    }
    if (*(int *)(PTR_DAT_10155d74 + 0x34) != 0) {
      **(int **)(PTR_DAT_10155d74 + 0x34) = **(int **)(PTR_DAT_10155d74 + 0x34) + 1;
    }
    if (*(int *)(PTR_DAT_10155d74 + 0x30) != 0) {
      **(int **)(PTR_DAT_10155d74 + 0x30) = **(int **)(PTR_DAT_10155d74 + 0x30) + 1;
    }
    if (*(int *)(PTR_DAT_10155d74 + 0x40) != 0) {
      **(int **)(PTR_DAT_10155d74 + 0x40) = **(int **)(PTR_DAT_10155d74 + 0x40) + 1;
    }
    *(int *)(*(int *)(PTR_DAT_10155d74 + 0x4c) + 0xb4) =
         *(int *)(*(int *)(PTR_DAT_10155d74 + 0x4c) + 0xb4) + 1;
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != &DAT_10155d20)) {
      ___freetlocinfo(piVar1);
    }
  }
  return p_Var3->_tfpecode;
}


/* END FUNCTION 0x10101b70 */
